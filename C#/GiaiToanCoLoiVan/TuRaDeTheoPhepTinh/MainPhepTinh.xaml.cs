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
        //private ListPhepTinh phepTinhs = new ListPhepTinh();
        private List<PhepTinh> phepTinhs = new List<PhepTinh>();
        //private int i = 0, j = 0;


        public MainPhepTinh()
        {
            InitializeComponent();
            phepTinh = AddList();
            //if (j == 1)
            //    Next();

        }
        private void SetData()
        {
            tblQuestion.Text = phepTinh.DeBai;
            //BaiToan.Inlines.Add(phepTinh.BaiToan);
            //LoiGiai.Inlines.Add(phepTinh.LoiGiai);
            if (phepTinh.Check == true)
            {
                card0.Visibility = Visibility.Visible;
                lab0.Visibility = Visibility.Visible;
                title0.Visibility = Visibility.Visible;
                card.Visibility = Visibility.Hidden;
                lab.Visibility = Visibility.Hidden;
                title.Visibility = Visibility.Hidden;
            }
            else
            {
                title.Visibility = Visibility.Visible;
                card.Visibility = Visibility.Visible;
                lab.Visibility = Visibility.Visible;
                title0.Visibility = Visibility.Hidden;
                card0.Visibility = Visibility.Hidden;
                lab0.Visibility = Visibility.Hidden;
            }
        }
        private PhepTinh AddList()
        {
            PhepTinh phepTinh = new PhepTinh();
            phepTinh.DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 10 + 7. Sau đó giải bài toán đó.";
            phepTinh.BaiToan = @"";
            phepTinh.LoiGiai = @"";
            phepTinh.Check = true;
            return phepTinh;
        }
        //public void Next()
        //{
        //    i++;
        //    tblQuestion.Text = phepTinh.DeBai;
        //}
        //private List<PhepTinh> AddToList()
        //{
        //    List<PhepTinh> phepTinhs = new List<PhepTinh>();
        //    for (int i = 0; i < 6; i++)
        //    {
        //        PhepTinh phepTinh = new PhepTinh()
        //        {
        //            DeBai = "debai" + i.ToString(),
        //            BaiToan = @"",
        //            LoiGiai = @"",
        //            Check = true
        //        };
        //        phepTinhs.Add(phepTinh);
        //    }
        //    phepTinhs[0].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 10 + 7. Sau đó giải bài toán đó.";
        //    phepTinhs[0].BaiToan = @"";
        //    phepTinhs[0].LoiGiai = @"";
        //    phepTinhs[0].Check = true;
        //    phepTinhs[1].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 13 + 4. Sau đó giải bài toán đó.";
        //    phepTinhs[1].BaiToan = @"";
        //    phepTinhs[1].LoiGiai = @"";
        //    phepTinhs[1].Check = true;
        //    phepTinhs[2].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 11 + 5. Sau đó giải bài toán đó.";
        //    phepTinhs[2].BaiToan = @"";
        //    phepTinhs[2].LoiGiai = @"";
        //    phepTinhs[2].Check = true;
        //    phepTinhs[3].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 19 + 1. Sau đó giải bài toán đó.";
        //    phepTinhs[3].BaiToan = @"";
        //    phepTinhs[3].LoiGiai = @"";
        //    phepTinhs[3].Check = true;
        //    phepTinhs[4].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 22 + 17. Sau đó giải bài toán đó.";
        //    phepTinhs[4].BaiToan = @"";
        //    phepTinhs[4].LoiGiai = @"";
        //    phepTinhs[4].Check = true;
        //    phepTinhs[5].DeBai = "Em hãy tự tạo ra một bài toán có phép tính sau: 10 + 10. Sau đó giải bài toán đó.";
        //    phepTinhs[5].BaiToan = @"";
        //    phepTinhs[5].LoiGiai = @"";
        //    phepTinhs[5].Check = true;
        //    return phepTinhs;
        //}
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
                //phepTinh = editTuRaDe.GetPhepTinh();
                phepTinh = editTuRaDe.GetPhepTinh();
                //i += 1;
                SetData();

            }
        }

        private void btnCheckAnswer_Click(object sender, RoutedEventArgs e)
        {

        }

        private void btnNext_Click(object sender, RoutedEventArgs e)
        {
            //j = 1;
            //this.Next();
        }

        //private void Window_Loaded()
        //{
        //    throw new NotImplementedException();
        //}
    }
}
