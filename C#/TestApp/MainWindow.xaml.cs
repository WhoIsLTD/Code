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
        private ListAnwer Lsnswer;
        public ListAnwer listAnwer { get => Lsnswer; set { Lsnswer = value; } }
        private string answer_ = "";
        public MainWindow()
        {
            InitializeComponent();
            //Lsnswer = LAnswer;
        }
        private void LoadData()
        {
            //tblQuestion.Text = Lsnswer.Value;
            // load media

            //add answers - lưu đáp án  
            foreach (AnswerInfo answer in Lsnswer.Answers)
            {
                AddAnswerToListView(answer);
            }
            //chinh do rong window vua kich thuoc control

        }
        private void btnEdit_Click(object sender, RoutedEventArgs e)
        {
            MultipleChoiceSingleCheck multipleChoice = new MultipleChoiceSingleCheck(Lsnswer);
            multipleChoice.ShowDialog();
            Lsnswer = multipleChoice.GetAnswer();
            spMainControl.Children.Clear();
            LoadData();
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

        }

        private void btnCheckAnswer_Click(object sender, RoutedEventArgs e)
        {

        }
    }
}
