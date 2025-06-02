namespace Practica9
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear(); // Limpia la lista antes de agregar nuevos valores

            if (!ulong.TryParse(textBox1.Text, out ulong numero))
            {
                MessageBox.Show("Por favor, introduce un n�mero entero v�lido.", "Error de entrada", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            // El factorial de n�meros grandes puede exceder el l�mite de ulong
            if (numero > 20)
            {
                MessageBox.Show("El n�mero es demasiado grande. Por favor, introduce un n�mero menor o igual a 20.", "L�mite superado", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }

            ulong factorial = 1;
            for (ulong i = 1; i <= numero; i++)
            {
                listBox1.Items.Add(i);
                factorial *= i;
            }
            textBox2.Text = numero.ToString();
            textBox3.Text = factorial.ToString();
        }



    }
}
