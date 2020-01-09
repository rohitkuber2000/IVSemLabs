using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace project1
{
    public partial class Form1 : Form
    {
        string input = string.Empty; //to read the input when clicked 
        string Op1 = string.Empty; //First operand
        string Op2 = string.Empty; //Second operand
        char Operator; //Operator
        double res = 0.0; //Final result

        public Form1()
        {
            InitializeComponent();
        }
     
        private void one_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty; 
            input += "1";
            this.textBox1.Text += input;

        }


        private void two_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty; 
            input += "2";
            this.textBox1.Text += input;

        }

        private void three_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty; 
            input += "3";
            this.textBox1.Text += input;
        }


        private void four_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input += "4";
            this.textBox1.Text += input;

        }

       

        private void five_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty; 
            input += "5";
            this.textBox1.Text += input;
        }

        private void six_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty; 
            input += "6";
            this.textBox1.Text += input;

        }

        private void seven_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input += "7";
            this.textBox1.Text += input;

        }

        private void eight_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty;
            input += "8";
            this.textBox1.Text += input;
        }

       

        private void nine_Click(object sender, EventArgs e)
        {
            this.textBox1.Text = string.Empty; 
            input += "9";
            this.textBox1.Text += input;

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void plus_Click(object sender, EventArgs e)
        {
            Op1 = input;
            Operator = '+';
          input = string.Empty;


        }

        private void minus_Click(object sender, EventArgs e)
        {
            Op1 = input;
            Operator = '-';
          input = string.Empty;

        }

        private void sin_Click(object sender, EventArgs e)
        {
            Op1 = input;
            Operator = '/';
          input = string.Empty;

        }
        private void cos_Click(object sender, EventArgs e)
        {   Op1 = input;
            Operator = '*';
          input = string.Empty;
        
        }

        private void label1_Click(object sender, EventArgs e)
        {
           label1.Text =  res.ToString();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void equals_Click(object sender, EventArgs e)
        {
            Op2 = input;
            double num1, num2; 
            double.TryParse(Op1, out num1); 
            double.TryParse(Op2, out num2);
            
       if (Operator == '+')
       {
       res = num1 + num2; 
         this.textBox1.Text = res.ToString();
}
else if (Operator == '-')
{
res = num1 - num2; textBox1.Text = res.ToString();
}
else if (Operator == '*')
{
res = num1 * num2;
    textBox1.Text = res.ToString();
}
  else if (Operator == '/')
{
if (num2 != 0)
{
res = num1 / num2; 
    textBox1.Text = res.ToString();
}
else
{
textBox1.Text = "DIV/Zero!";
}
}
input = string.Empty;
}

    }       
    }
   
     