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

namespace bilel2
{
    /// <summary>
    /// Logique d'interaction pour MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {

            InitializeComponent();
            
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            int valeur1 = Int16.Parse(val1.Text);
            if (val2.Text != "")
            {
                int valeur2 = Int16.Parse(val2.Text);
                resultat.Text = (valeur1 + valeur2).ToString();
            }
        }

        private void bouton_exit(object sender, RoutedEventArgs e)
        {
            int valeur1 = Int16.Parse(val1.Text);
            if (val2.Text != "")
            {
                int valeur2 = Int16.Parse(val2.Text);
                resultat.Text = (valeur1 * valeur2).ToString();
            }
        }
    }
}
