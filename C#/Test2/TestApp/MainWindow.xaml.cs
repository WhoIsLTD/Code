using DataProvider;
using System;
using System.Collections.Generic;
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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace TestApp
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
       /// </summary>
    public partial class MainWindow : Window
    {
        private string answer_ = "";
        private ListInfo lsAnswer;
        string link = "E:/Code/C#/Test2/TestApp/bb.jpg";
        public ListInfo listAnwer { get => lsAnswer; set { lsAnswer = value; } }
        public MainWindow()
        {
            InitializeComponent();
            lsAnswer = CreateNewQuestion();
        }
        private void LoadData()
        {

            tblQuestion.Text = lsAnswer.Value;
            // load media
            switch (lsAnswer.MediaType)
            {
                case "image":
                    // Create Image and set its width and height  
                    Image dynamicImage = new Image();
                    //dynamicImage.Stretch = Stretch.UniformToFill;
                    dynamicImage.Width = 300;
                    dynamicImage.Height = 200;
                    // Create a BitmapSource
                    BitmapImage bitmap = new BitmapImage();
                    bitmap.BeginInit();
                    if (lsAnswer.MediaUrl != null)
                        link = lsAnswer.MediaUrl;
                    bitmap.UriSource = new Uri(link);
                    bitmap.EndInit();
                    // Set Image.Source  
                    dynamicImage.Source = bitmap;
                    // add to sp
                    spMedia.Children.Add(dynamicImage);
                    break;
                default:
                    spMedia.Visibility = Visibility.Hidden;
                    break;
            }
            //add answers - lưu đáp án
            foreach (AnswerInfo answer in lsAnswer.ListAnswer.Answers)
            {
                AddAnswerToListView(answer);
            }
        }
        private void RefreshData()
        {
            spMedia.Children.Clear();
            spMainControl.Children.Clear();
            LoadData();
        }
        private void btnEdit_Click(object sender, RoutedEventArgs e)
        {
            try
            {
            MultipleChoiceSingleCheck multipleChoice = new MultipleChoiceSingleCheck(lsAnswer);
                bool? dialogResult = multipleChoice.ShowDialog();
                if(dialogResult == true)
                {
                    lsAnswer = multipleChoice.GetAnswer();
                    RefreshData();
                }    
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }
        private void AddAnswerToListView(AnswerInfo answer)
        {
            RadioButton radioButton = new RadioButton();
            radioButton.Content = answer.Value;
            if (answer.Checked == true)
                answer_ = answer.Value;
            spMainControl.Children.Add(radioButton);
        }

        private void btnRefresh_Click(object sender, RoutedEventArgs e)
        {
            tblMessage.Text = "";
            foreach (var item in spMainControl.Children)
            {
                if (item is RadioButton)
                {   
                    RadioButton radioButton = item as RadioButton;
                    radioButton.IsChecked = false;
                }
            }
        }

        private void btnCheckAnswer_Click(object sender, RoutedEventArgs e)
        {
            foreach (var item in spMainControl.Children)
            {
                if (item is RadioButton)
                {
                    RadioButton radioButton = item as RadioButton;
                    if(radioButton.IsChecked == true)
                    {
                        if (radioButton.Content.ToString() == answer_)
                            tblMessage.Text = "Correct!!!";
                        else
                            tblMessage.Text = "Wrong!!!";
                    }    
                }    
            }    
        }
        private ListInfo CreateNewQuestion()
        {
            ListInfo lsAnwer1 = new ListInfo();
            lsAnwer1.MediaType = "image";
            lsAnwer1.MediaUrl = "E:/Code/C#/Test2/TestApp/bb.jpg";
            //lar_.Question.Value = "We love Hanoi ... in the spring!";
            lsAnwer1.Value = "We love Hanoi ... in the spring! We love Hanoi ... in the spring! We love Hanoi ... in the spring!";

            for (int i = 0; i < 4; i++)
            {
                AnswerInfo answer = new AnswerInfo()
                {
                    Id = "0",
                    Value = "Answer " + (i + 1).ToString(),
                    Type = "text",
                    Checked = false
                };
                lsAnwer1.ListAnswer.Answers.Add(answer);
            }
            lsAnwer1.ListAnswer.Answers[0].Value = "mostly";
            lsAnwer1.ListAnswer.Answers[1].Value = "most";
            lsAnwer1.ListAnswer.Answers[2].Value = "especially";
            lsAnwer1.ListAnswer.Answers[3].Value = "specially";
            lsAnwer1.ListAnswer.Answers[2].Checked = true;

            return lsAnwer1;
        }
        private void Windowloade(object sender, RoutedEventArgs e)
        {
            LoadData();
        }

    }
}
