namespace Practica3
{
    public partial class Form1 : Form
    {
        // Declaraci�n de variables a nivel de clase
        private float Total = 0f;
        private float f_num = 0f;

        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            //Bot�n SumarNumeros
            textBox2.Text = Total.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //Bot�n A�adir
            // Validar y convertir el texto a n�mero
            if (float.TryParse(textBox1.Text, out f_num))
            {
                listBox1.Items.Add(textBox1.Text);
                Total += f_num;
            }
            else
            {
                MessageBox.Show("Introduce un n�mero v�lido.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            textBox1.Text = "";
            textBox1.Focus();
        }
    }
}
