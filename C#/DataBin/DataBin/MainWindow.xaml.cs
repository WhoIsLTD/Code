using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
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

namespace DataBin
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private User user1;
        private ObservableCollection<User> users = new ObservableCollection<User>();
        public MainWindow()
        {
            InitializeComponent();
            users.Add(new User() { Name = "Le Dat" });
            users.Add(new User() { Name = "Dat Le" });
            user1 = new User();
            
            LstName.ItemsSource = users;
            this.DataContext = this;
        }

        private void UpdateTitle_Click(object sender, RoutedEventArgs e)
        {
            BindingExpression binding = hello.GetBindingExpression(TextBox.TextProperty);
            binding.UpdateSource();
        }

        private void AddUser_Click(object sender, RoutedEventArgs e)
        {
            users.Add(new User() { Name = "New User" });
        }

        private void ChangeUser_Click(object sender, RoutedEventArgs e)
        {

            if (LstName.SelectedItem != null)
            {
                Window1 window1 = new Window1(user1);
                window1.ShowDialog();
                user1 = window1.Copy();
                (LstName.SelectedItem as User).Name = user1.Name;
            }
        }

        private void DeleteUser_Click(object sender, RoutedEventArgs e)
        {
            if (LstName.SelectedItem != null)
                users.Remove(LstName.SelectedItem as User);
        }
    }
}
