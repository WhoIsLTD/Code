using System;
using System.Collections.Generic;
using System.IO;
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

namespace Math
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            TextRange textRange;
            System.IO.FileStream fileStream;

            if (System.IO.File.Exists("E:/Code/C#/Math/Math/Resources/Math.rtf"))
            {
                textRange = new TextRange(rich.Document.ContentStart, rich.Document.ContentEnd);
                using (fileStream = new System.IO.FileStream("E:/Code/C#/Math/Math/Resources/Math.rtf", System.IO.FileMode.OpenOrCreate))
                {
                    textRange.Load(fileStream, System.Windows.DataFormats.Rtf);
                }
            }
        }
    }
}
