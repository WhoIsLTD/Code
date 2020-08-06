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
using DataProvide;

namespace XacDinhLoiGiaiDung
{
    /// <summary>
    /// Interaction logic for Window1.xaml
    /// </summary>
    public partial class EditQuestions : Window
    {
        private ListAnswer listAnswer;
        private Answer answer;
        private ObservableCollection<Answer> Answers = new ObservableCollection<Answer>();
        public EditQuestions(ListAnswer list)
        {
            InitializeComponent();
            listAnswer = list;
        }
        private void LoadData()
        {
            txtQuestion.Text = listAnswer.Values;
            foreach (Answer answer in listAnswer.Answers)
                Answers.Add(answer);
            lvAnswer.ItemsSource = Answers;
            tblListOfAnswer.Text = "List of answers: " + Answers.Count.ToString();
        }
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            LoadData();
        }
        private void btnAddAnswer_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                answer = new Answer() { Checked = false, Values = "" };
                Answers.Add(answer);
                tblListOfAnswer.Text = "List of answers: " + Answers.Count.ToString();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            
        }
        private void btnDelete_Click(object sender, RoutedEventArgs e)
        {
            Answers.Remove((sender as Button).DataContext as Answer);
            tblListOfAnswer.Text = "List of answers: " + Answers.Count.ToString();
        }
        public ListAnswer GetList()
        {
            return listAnswer;
        }
        private void btnAccept_Click(object sender, RoutedEventArgs e)
        {
            listAnswer.Values = txtQuestion.Text;
            listAnswer.Answers.Clear();
            foreach (Answer answer in Answers)
                listAnswer.Answers.Add(answer);
            this.DialogResult = true;
        }

        private void btnCancel_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

    }
}
