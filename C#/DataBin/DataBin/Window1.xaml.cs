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

namespace DataBin
{
    /// <summary>
    /// Interaction logic for Window1.xaml
    /// </summary>
    public partial class Window1 : Window
    {
        private User user = new User();
        private ObservableCollection<User> users = new ObservableCollection<User>();
        public Window1(User test)
        {
            user = test;
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            //users[0].Name = text1.Text;
            user.Name = text1.Text;
            this.Close();
        }
        public User Copy()
        {
            return user;
        }
    }
}
