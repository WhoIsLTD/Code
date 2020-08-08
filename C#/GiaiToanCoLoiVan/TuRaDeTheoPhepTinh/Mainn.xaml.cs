using DataProvide;
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
using XacDinhLoiGiaiDung;

namespace TuRaDeTheoPhepTinh
{
    /// <summary>
    /// Interaction logic for Mainn.xaml
    /// </summary>
    public partial class Mainn : Window
    {
        PhepTinh phepTinh;
        public Mainn()
        {
            InitializeComponent();
            phepTinh = AddList();
        }
        private void LoadWindow()
        {

        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            LoadWindow();
        }

        private PhepTinh AddList()
        {
            PhepTinh phepTinh = new PhepTinh();
            phepTinh.DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 10 + 7. Sau đó giải bài toán đó.";
            phepTinh.BaiToan = @"";
            phepTinh.LoiGiai = @"";
            return phepTinh;
        }

        private void but_Click(object sender, RoutedEventArgs e)
        {
            sp4.Children.Clear();
            MainPhepTinh mainPhepTinh = new MainPhepTinh();
            sp4.Children.Add(mainPhepTinh);
            //EditTuRaDe editTuRaDe = new EditTuRaDe(phepTinh);
            //if(editTuRaDe.tab1.IsSelected == true)
            //{
            //    sp4.Children.Clear();
            //    sp4.Children.Add(mainPhepTinh);
            //}    
            //else if( editTuRaDe.tab2.IsSelected == true)
            //{
            //    sp4.Children.Clear();
            //    MainTuRaDe mainTuRaDe = new MainTuRaDe();
            //    sp4.Children.Add(mainTuRaDe);
        }

        private void ChonDapAn_Click(object sender, RoutedEventArgs e)
        {
            sp4.Children.Clear();
            MainWindow mainWindow = new MainWindow();
            sp4.Children.Add(mainWindow);
        }
    }
}