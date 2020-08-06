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
using DataProvide;

namespace TuRaDeTheoPhepTinh
{
    /// <summary>
    /// Interaction logic for EditTuRaDe.xaml
    /// </summary>
    public partial class EditTuRaDe : Window
    {
        public bool buttonclick = false;
        private PhepTinh phepTinh;
        public EditTuRaDe(PhepTinh phep)
        {
            InitializeComponent();
            phepTinh = phep;
        }
        private void setData()
        {
            phepTinh.DeBai = txtQuestion.Text;
            phepTinh.BaiToan = BaiToan.Text;
            phepTinh.LoiGiai = LoiGiai.Text;
        }
        private void LoadData()
        {
            txtQuestion.Text = phepTinh.DeBai;
            BaiToan.Text = phepTinh.BaiToan;
            LoiGiai.Text = phepTinh.LoiGiai;
        }
        public PhepTinh GetPhepTinh()
        {
            return phepTinh;
        }
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            LoadData();
        }
        private void btnRefresh_Click(object sender, RoutedEventArgs e)
        {
            buttonclick = true;
        }
        private void btnAccept_Click(object sender, RoutedEventArgs e)
        {
            setData();
            this.DialogResult = true;
        }
        private void btnCancel_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
        private void btEdit_Click(object sender, RoutedEventArgs e)
        {
            
        }

        private void btCheckAnswer_Click(object sender, RoutedEventArgs e)
        {
            //Mainn mainn = new Mainn();
            //MainTuRaDe mainTuRaDe = new MainTuRaDe();
            //mainn.sp4.Children.Clear();
            //mainn.sp4.Children.Add(mainTuRaDe);
            //mainn.ShowDialog();
        }
    }
}
