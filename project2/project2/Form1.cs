using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace project2
{
    public partial class Form1 : Form
    {   String name = " ";
    string regno;
    String email = " ";
    String gender = "  ";


        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
           
        }

        private void submit_Click(object sender, EventArgs e)
        {
            name = textBox1.Text;
            regno =textBox2.Text;
            email = textBox3.Text;
            if (Male.Checked == true)
            {
                gender = "Male";
            }
            else
            {
                gender = "Female";
            }

            MessageBox.Show(name + gender);

        }

        private void Female_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void Male_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
           
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            

        }

       // Console.WriteLine("This is C#");

      //  WriteLine( name + registration );

     


       
    }
}
