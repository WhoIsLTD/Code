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
        //private PhepTinh phepTinh;
        private List<PhepTinh> phepTinhs = new List<PhepTinh>();
        int i = 0;
        public EditTuRaDe(PhepTinh phep)
        {
            InitializeComponent();
            //phepTinh = phep;
            phepTinhs = AddToList();
            phepTinhs[0] = phep;
            if (i != 0)
                Next();
        }
        private void setData()
        {
            phepTinhs[i].DeBai = tblQuestion.Text;
            phepTinhs[i].BaiToan = BaiToan.Text;
            phepTinhs[i].LoiGiai = LoiGiai.Text;
        }
        private void LoadData()
        {
            tblQuestion.Text = phepTinhs[i].DeBai;
            BaiToan.Text = phepTinhs[i].BaiToan;
            LoiGiai.Text = phepTinhs[i].LoiGiai;
        }
        private List<PhepTinh> AddToList()
        {
            List<PhepTinh> phepTinhs = new List<PhepTinh>();
            for (int i = 0; i < 6; i++)
            {
                PhepTinh phepTinh = new PhepTinh()
                {
                    DeBai = "debai" + i.ToString(),
                    BaiToan = @"",
                    LoiGiai = @"",
                    Check = true
                };
                phepTinhs.Add(phepTinh);
            }
            phepTinhs[0].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 10 + 7. Sau đó giải bài toán đó.";
            phepTinhs[0].BaiToan = @"";
            phepTinhs[0].LoiGiai = @"";
            phepTinhs[0].Check = true;
            phepTinhs[1].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 13 + 4. Sau đó giải bài toán đó.";
            phepTinhs[1].BaiToan = @"";
            phepTinhs[1].LoiGiai = @"";
            phepTinhs[1].Check = true;
            phepTinhs[2].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 11 + 5. Sau đó giải bài toán đó.";
            phepTinhs[2].BaiToan = @"";
            phepTinhs[2].LoiGiai = @"";
            phepTinhs[2].Check = true;
            phepTinhs[3].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 19 + 1. Sau đó giải bài toán đó.";
            phepTinhs[3].BaiToan = @"";
            phepTinhs[3].LoiGiai = @"";
            phepTinhs[3].Check = true;
            phepTinhs[4].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 22 + 17. Sau đó giải bài toán đó.";
            phepTinhs[4].BaiToan = @"";
            phepTinhs[4].LoiGiai = @"";
            phepTinhs[4].Check = true;
            phepTinhs[5].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 10 + 10. Sau đó giải bài toán đó.";
            phepTinhs[5].BaiToan = @"";
            phepTinhs[5].LoiGiai = @"";
            phepTinhs[5].Check = true;
            return phepTinhs;
        }

        public PhepTinh GetPhepTinh()
        {
            return phepTinhs[i];
        }
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            LoadData();
        }

        private void btnEdit_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
        private void btnCheckAnswer_Click(object sender, RoutedEventArgs e)
        {

            if (But1.IsChecked == true)
                phepTinhs[i].Check = true;
            else
                phepTinhs[i].Check = false;
            setData();
            this.DialogResult = true;
        }

        private void But2_Click(object sender, RoutedEventArgs e)
        {
            if (But2.IsChecked == true)
            {
                card2.Visibility = Visibility.Visible;
                lab2.Visibility = Visibility.Visible;
                card1.Visibility = Visibility.Hidden;
                lab1.Visibility = Visibility.Hidden;
            }
        }

        private void But1_Click(object sender, RoutedEventArgs e)
        {
            if (But1.IsChecked == true)
            {
                card1.Visibility = Visibility.Visible;
                lab1.Visibility = Visibility.Visible;
                card2.Visibility = Visibility.Hidden;
                lab2.Visibility = Visibility.Hidden;
            }
        }

        private void Next()
        {
            i++;
            LoadData();
        }

        private void btnNext_Click(object sender, RoutedEventArgs e)
        {
            this.Next();
        }
    }
}
