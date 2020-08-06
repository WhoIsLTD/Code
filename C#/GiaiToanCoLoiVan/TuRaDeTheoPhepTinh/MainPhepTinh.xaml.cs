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
using XacDinhLoiGiaiDung;

namespace TuRaDeTheoPhepTinh
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainPhepTinh : UserControl
    {
        private PhepTinh phepTinh;
        private List<PhepTinh> phepTinhs = new List<PhepTinh>();

        public MainPhepTinh()
        {
            InitializeComponent();
            phepTinh = AddList();
        }
        private void SetData()
        {
            tblQuestion.Text = phepTinh.DeBai;
            //BaiToan.Inlines.Add(phepTinh.BaiToan);
            //LoiGiai.Inlines.Add(phepTinh.LoiGiai);
        }
        private PhepTinh AddList()
        {
            PhepTinh phepTinh = new PhepTinh();
            phepTinh.DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 10 + 7. Sau đó giải bài toán đó.";
            phepTinh.BaiToan = @"";
            phepTinh.LoiGiai = @"";
            return phepTinh;
        }
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            SetData();
        }

        private void btnEdit_Click(object sender, RoutedEventArgs e)
        {
            EditTuRaDe editTuRaDe = new EditTuRaDe(phepTinh);
            bool? result = editTuRaDe.ShowDialog();
            if (result == true)

            {
                phepTinh = editTuRaDe.GetPhepTinh();
                SetData();
            }
        }

        private void btnRefresh_Click(object sender, RoutedEventArgs e)
        {

        }

        private void btnCheckAnswer_Click(object sender, RoutedEventArgs e)
        {

        }
    }
}
