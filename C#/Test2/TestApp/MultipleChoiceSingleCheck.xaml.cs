using DataProvider;
using MaterialDesignThemes.Wpf;
using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace TestApp
{
    /// <summary>
    /// Interaction logic for Window1.xaml
    /// </summary>
    public partial class MultipleChoiceSingleCheck : Window
    {
        private ObservableCollection<AnswerInfo> answerInfos_;
        public ObservableCollection<AnswerInfo> AnswerInfos { get => answerInfos_; set { answerInfos_ = value; } }

        private ListInfo lsAnswer;
        string flName = "E:/Code/C#/Test2/TestApp/bb.jpg";
        public MultipleChoiceSingleCheck(ListInfo LAnswer)
        {
            InitializeComponent();
            lsAnswer = LAnswer;
            AnswerInfos = new ObservableCollection<AnswerInfo>();
        }
        private void btnAddAnswer_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                AnswerInfo answer = new AnswerInfo() { Id = "test", Type = "text", Value = "", Checked = false };
                AnswerInfos.Add(answer);
                tblListOfAnswer.Text = "List of answers: " + AnswerInfos.Count.ToString();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }
        private void LoadData()
        {
            txtQuestion.Text = lsAnswer.Value;

            foreach (AnswerInfo answerInfo in lsAnswer.ListAnswer.Answers)
            {
                AnswerInfos.Add(answerInfo);
            }
            lvAnswer.ItemsSource = AnswerInfos;
            tblListOfAnswer.Text = "List of answers: " + AnswerInfos.Count.ToString();
        }
        private void btnAccept_Click(object sender, RoutedEventArgs e)
        {

            lsAnswer.Value = txtQuestion.Text;
            lsAnswer.MediaType = "image";
            lsAnswer.MediaUrl = flName;
            lsAnswer.ListAnswer.Answers.Clear();

            foreach (AnswerInfo answerInfo in AnswerInfos)
            {
                lsAnswer.ListAnswer.Answers.Add(answerInfo);
            }
            this.DialogResult = true;
        }
        public ListInfo GetAnswer()
        {
            return lsAnswer;
        }
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            LoadData();
        }

        private void btnDelete_Click(object sender, RoutedEventArgs e)
        {
            AnswerInfos.Remove((sender as Button).DataContext as AnswerInfo);
            tblListOfAnswer.Text = "List of answers: " + AnswerInfos.Count.ToString();
        }
        private void btnCancel_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void btnSearch_Click(object sender, RoutedEventArgs e)
        {
            OpenFileDialog file = new OpenFileDialog();
            file.ShowDialog();
            MediaName.Text = file.FileName;
            flName = file.FileName;
        }

        private void btnShowImage_Click(object sender, RoutedEventArgs e)
        {
<<<<<<< HEAD
            Window wd = new Window();
            BitmapImage image = new BitmapImage();
            image.BeginInit();
            image.UriSource = new Uri(MediaName.Text);
            image.EndInit();
            wd.Background = new ImageBrush(image);
            wd.Show();
            
=======
            try
            {
                Window wd = new Window();
                BitmapImage image = new BitmapImage();
                image.BeginInit();
                if (MediaName.Text == null)
                    MediaName.Text = flName;
                image.UriSource = new Uri(MediaName.Text);
                image.EndInit();
                wd.Background = new ImageBrush(image);
                wd.Show();
            }
            catch (Exception)
            {
                MessageBox.Show("Chưa thêm hình ảnh!!!");
            }

>>>>>>> cf7d0a42bb5f9b04f33f7b2894a6c5565bd88907
        }
        private void btnTrash_Click(object sender, RoutedEventArgs e)
        {
            MediaName.Text = null;
        }
    }
}
