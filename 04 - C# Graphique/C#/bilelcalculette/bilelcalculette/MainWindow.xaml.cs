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

namespace bilelcalculette
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

        string operateur;
        private void bouton1(object sender, RoutedEventArgs e)
        {

            resultat.Text += "1";
        }

        private void bouton2(object sender, RoutedEventArgs e)
        {
            resultat.Text += "2";
        }

        private void boutton3(object sender, RoutedEventArgs e)
        {
            resultat.Text += "3";
        }

        private void boutton4(object sender, RoutedEventArgs e)
        {
            resultat.Text += "4";
        }

        private void boutton5(object sender, RoutedEventArgs e)
        {
            resultat.Text += "5";
        }

        private void boutton6(object sender, RoutedEventArgs e)
        {
            resultat.Text += "6";
        }

        private void boutton7(object sender, RoutedEventArgs e)
        {
            resultat.Text += "7";
        }

        private void boutton8(object sender, RoutedEventArgs e)
        {
            resultat.Text += "8";
        }

        private void boutton9(object sender, RoutedEventArgs e)
        {
            resultat.Text += "9";
        }

        private void boutton0(object sender, RoutedEventArgs e)
        {
            resultat.Text += "0";
        }

        private void bouttonv(object sender, RoutedEventArgs e)
        {
            resultat.Text += ",";
        }

        private void boutonplus(object sender, RoutedEventArgs e)
        {
            resultat.Text += "+";
            operateur = "+";
        }

        private void bouttonmoins(object sender, RoutedEventArgs e)
        {
            resultat.Text += "-";
            operateur = "-";
        }

        private void bouttondivision(object sender, RoutedEventArgs e)
        {
            resultat.Text += "/";
            operateur = "/";
        }

        private void bouttonmulti(object sender, RoutedEventArgs e)
        {
            resultat.Text += "*";
            operateur = "*";
        }

        private void bouttoneffacer(object sender, RoutedEventArgs e)
        {
            resultat.Text = "";
        }


                
        private void bouton_egale(object sender, RoutedEventArgs e)

        {
            
            
                if (operateur == "+")
                {
                    string[] chaine = resultat.Text.Split('+');
                    resultat.Text +=  Environment.NewLine + ((double.Parse(chaine[0]) |  valeur1) + double.Parse(chaine[1])).ToString();
                    double valeur1 = (double.Parse(chaine[0]) + double.Parse(chaine[1]));
                    
                }
                if (operateur == "-")
                {
                    string[] chaine = resultat.Text.Split('-');
                    resultat.Text += Environment.NewLine + "=" + Environment.NewLine + (double.Parse(chaine[0]) - double.Parse(chaine[1])).ToString();

                }
                if (operateur == "/")
                {
                    string[] chaine = resultat.Text.Split('/');
                    resultat.Text += Environment.NewLine + "=" + Environment.NewLine + (double.Parse(chaine[0]) / double.Parse(chaine[1])).ToString();

                }
                if (operateur == "*")
                {
                    string[] chaine = resultat.Text.Split('*');
                    resultat.Text += Environment.NewLine + "=" + Environment.NewLine + (double.Parse(chaine[0]) * double.Parse(chaine[1])).ToString();

                }

            
            

        }


    }
}
