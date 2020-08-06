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
using System.Windows.Shapes;

namespace TuRaDeTheoPhepTinh
{
    /// <summary>
    /// Interaction logic for WindowControl.xaml
    /// </summary>
    public partial class WindowControl : UserControl
    {
        public WindowControl()
        {
            InitializeComponent();
        }

        private void RadioButton_Click(object sender, RoutedEventArgs e)
        {
            MainPhepTinh mainPhepTinh = new MainPhepTinh();
            sp.Children.Add(mainPhepTinh);
        }

        private void RadioButton_Click_1(object sender, RoutedEventArgs e)
        {
            MainTuRaDe mainTuRaDe = new MainTuRaDe();
            sp1.Children.Add(mainTuRaDe);
        }

        private void LoadData()
        {
            MainPhepTinh mainPhepTinh = new MainPhepTinh();
            sp.Children.Add(mainPhepTinh);
            MainTuRaDe mainTuRaDe = new MainTuRaDe();
            sp1.Children.Add(mainTuRaDe);
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            LoadData();
        }
    }
}
