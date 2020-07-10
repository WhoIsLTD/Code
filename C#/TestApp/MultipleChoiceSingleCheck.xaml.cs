using DataProvider;
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
        public ObservableCollection<AnswerInfo> answerInfos_;
        public ListAnwer LsAnswer;

        public ObservableCollection<AnswerInfo> AnswerInfos { get => answerInfos_; set { answerInfos_ = value; } }
        public MultipleChoiceSingleCheck(ListAnwer LAnswer)
        {
            InitializeComponent();
            LsAnswer = LAnswer;
            AnswerInfos = new ObservableCollection<AnswerInfo>();

        }

        private void btnAddAnswer_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                AnswerInfo answer = new AnswerInfo() { Id = "test", Type = "text", Value = "", Checked = false };

                AnswerInfos.Add(answer);
                lvAnswer.ItemsSource = AnswerInfos;
                tblListOfAnswer.Text = "List of answers: " + AnswerInfos.Count.ToString();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }
        private void LoadData()
        {

            //add question
            txtQuestion.Text = LsAnswer.Value;
            Thickness thickness = new Thickness(2, 2, 2, 2);

            //if (quizInfo_.Question.Answers.Count > 0)
            //{
            //    //lvAnswer.Items.Clear();
            //    //lvAnswer.ItemsSource = quizInfo_.Question.Answers;
            //    tblListOfAnswer.Text = "List of answers: " + quizInfo_.Question.Answers.Count.ToString();
            //}
            //test binding list - copy
            foreach (AnswerInfo answerInfo in LsAnswer.Answers)
            {
                AnswerInfos.Add(answerInfo);
            }
            lvAnswer.ItemsSource = AnswerInfos;
            tblListOfAnswer.Text = "List of answers: " + AnswerInfos.Count.ToString();
        }
        private void btnAccept_Click(object sender, RoutedEventArgs e)
        {
            LsAnswer.Value = txtQuestion.Text;
            LsAnswer.Answers.Clear();
            foreach (AnswerInfo answerInfo in AnswerInfos)
            {
                //quizInfo_.Question.Answers.Add(answerInfo);
                LsAnswer.Answers.Add(answerInfo);
            }
            this.DialogResult = true;
        }
        public ListAnwer GetAnswer()
        {
            return LsAnswer;
        }

    }
}
