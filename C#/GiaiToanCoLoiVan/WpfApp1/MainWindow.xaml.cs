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
using DataProvide;

namespace XacDinhLoiGiaiDung
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private ListAnswer listAnswer;
        private Answer answer;
        private string answer_ = "";
        public ListAnswer listAnwer { get => listAnswer; set { listAnswer = value; } }
        public MainWindow()
        {
            InitializeComponent();
            listAnswer = CreateQuestion();
        }
        private void refeshData()
        {
            spMainControl.Children.Clear();
            LoadData();
        }
        private void btnEdit_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                EditQuestions editQuestions = new EditQuestions(listAnswer);
                bool? result = editQuestions.ShowDialog();
                if (result == true)
                {
                    listAnswer = editQuestions.GetList();
                    refeshData();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }

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
                if (item is RadioButton)
                {
                    RadioButton radioButton = item as RadioButton;
                    if (radioButton.IsChecked == true)
                        
                        if (radioButton.Content.ToString() == answer_)
                        {
                            tblMessage.Text = "Bạn đã trả lời đúng!!!";
                            tblMessage.Foreground = Brushes.Green;
                            return;
                        }
                        else
                        {
                            tblMessage.Text = "Bạn đã trả lời sai!!!";
                            tblMessage.Foreground = Brushes.Red;
                            return;
                        }

                }
        }
        private void AddAnswerToView(Answer answer1)
        {
            RadioButton radioButton = new RadioButton();
            radioButton.FontSize = 14;
            radioButton.FontFamily = new FontFamily("Arial");
            //radioButton.FontWeight = quizInfo_.Bold == true ? FontWeights.Bold : FontWeights.Normal;
            radioButton.Content = answer1.Values;
            if (answer1.Checked == true)
                answer_ = answer1.Values;
            spMainControl.Children.Add(radioButton);
        }
        private void LoadData()
        {
            tblQuestion.Text = listAnswer.Values;
            foreach (Answer answer in listAnswer.Answers)
            {
                AddAnswerToView(answer);
            }
        }
        
        private ListAnswer CreateQuestion()
        {
            ListAnswer answers = new ListAnswer();
            answers.Values = "Một đàn gà có 13 con gà mái và 2 con gà trống. Hỏi đàn gà có tất cả bao nhiêu con gà? ";
            for (int i = 0; i < 3; i++)
            {

                Answer answer1 = new Answer()
                {
                    Values = "Answer " + (i + 1).ToString(),
                    Checked = false
                };
                answers.Answers.Add(answer1);
            }
            answers.Answers[0].Values = @"
Bài giải
Đàn gà có tất cả là:
13 + 2 = 15
Đáp số: 15 con gà";
            answers.Answers[1].Values = @"
Bài giải
Đàn gà có tất cả là:
13 + 2 = 15 con gà
Đáp số: 15";
            answers.Answers[2].Values = @"
Bài giải
Đàn gà có tất cả là:
13 + 2 = 15 (con gà)
Đáp số: 15 con gà";
            answers.Answers[2].Checked = true;
            return answers;
        }
        private void Window_Load(object sender, RoutedEventArgs e)
        {
            LoadData();
        }
    }
}
