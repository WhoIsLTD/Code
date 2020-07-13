using MaterialDesignThemes.Wpf;
using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.IO;
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
using System.Windows.Media.Media3D;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Collections.ObjectModel;
using Provider;
using Provider.Item;

namespace Test1
{
    /// <summary>
    /// Interaction logic for Page1.xaml
    /// </summary>
    public partial class MultipleChoiceSingleCheck : Window
    {
        private ObservableCollection<AnswerInfo> answerInfos_;
        private QuizInfo quizInfo_;
        public ObservableCollection<AnswerInfo> AnswerInfos { get => answerInfos_; set { answerInfos_ = value; } }
        public MultipleChoiceSingleCheck()
        {
            InitializeComponent();
            txtQuestion.Text = "";
            AnswerInfos = new ObservableCollection<AnswerInfo>();
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            OpenFileDialog ofd = new OpenFileDialog();
            ofd.ShowDialog();
            txtQuestion.Text = ofd.FileName;

        }
        private void LoadData()
        {
            txtQuestion.Text = quizInfo_.Question.Value;
            Thickness thickness = new Thickness(2, 2, 2, 2);

            foreach (AnswerInfo answerInfo in quizInfo_.Question.Answers)
            {
                AnswerInfos.Add(answerInfo);
            }
            lvAnswer.ItemsSource = AnswerInfos;
            tblListOfAnswer.Text = "List of answers: " + AnswerInfos.Count.ToString();
        }
        private void Button_Click_2(object sender, RoutedEventArgs e)
        {
            AnswerInfo asr = new AnswerInfo() { Id = "test", Type = "text", Value = "", Checked = false };
            AnswerInfos.Add(asr);
            tblListOfAnswer.Text = "List of answers: " + AnswerInfos.Count.ToString();
        }
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            LoadData();
        }
        public QuizInfo GetQuiz()
        {
            return quizInfo_;
        }


    }
}
