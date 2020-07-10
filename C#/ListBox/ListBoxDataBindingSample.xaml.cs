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

namespace ListBox
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class ListBoxDataBindingSample : Window
    {
        public ListBoxDataBindingSample()
        {
            InitializeComponent();
            List<TodoItem> items = new List<TodoItem>();
            items.Add(new TodoItem() { Title = "Completion Wpf tutorial", Completion = 45 });
            items.Add(new TodoItem() { Title = "C#", Completion = 100 });
            items.Add(new TodoItem() { Title = "Learn", Completion = 0 });

            lbToDoList.ItemsSource = items;
        }
    }

    public class TodoItem
    {
        public string Title { get; set; }
        public int Completion { get; set; }
        
    }
}
