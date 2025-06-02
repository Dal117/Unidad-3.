using System;
using System.Windows.Forms;

namespace Practica11
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            // Asignación de eventos Click para los botones
            this.button1.Click += new System.EventHandler(this.button1_Click);
            this.button2.Click += new System.EventHandler(this.button2_Click);
            this.button3.Click += new System.EventHandler(this.button3_Click);
            this.button4.Click += new System.EventHandler(this.button4_Click);

            this.ResumeLayout(false);
            this.PerformLayout();

        }

        // Evento: Calcula y muestra los valores usando un bucle for
        private void button1_Click(object sender, EventArgs e)
        {
            LimpiarListas();
            for (int x = 0; x <= 10; x++)
            {
                AgregarValores(x);
            }
        }

        // Evento: Calcula y muestra los valores usando un bucle while
        private void button2_Click(object sender, EventArgs e)
        {
            LimpiarListas();
            int x = 1;
            while (x <= 10)
            {
                AgregarValores(x);
                x++;
            }
        }

        // Evento: Calcula y muestra los valores usando un bucle do-while
        private void button3_Click(object sender, EventArgs e)
        {
            LimpiarListas();
            int x = 1;
            do
            {
                AgregarValores(x);
                x++;
            }
            while (x <= 10);
        }

        // Evento: Cierra la aplicación
        private void button4_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        // Limpia ambos ListBox antes de agregar nuevos valores
        private void LimpiarListas()
        {
            listBox1.Items.Clear();
            listBox2.Items.Clear();
        }

        // Agrega el valor de x y su función correspondiente a los ListBox
        private void AgregarValores(int x)
        {
            listBox1.Items.Add(x);
            double fx = x / (1.0 + x * x);
            listBox2.Items.Add(fx);
        }
    }
}
