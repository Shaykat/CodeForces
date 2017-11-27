using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlServerCe;

namespace bal
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            SqlCeConnection con = new SqlCeConnection(@"Data Source=C:\Users\Shaykat\Google Drive\code blocks\CodeForce\bal\bal\Database1.sdf");
            string na,id;
            na = textBox1.Text;
            id = textBox2.Text;
            string sn = "INSERT INTO student(name,id) VALUES(@na,@id)";
            SqlCeCommand cmd = new SqlCeCommand(sn, con);
            cmd.Parameters.AddWithValue("@na",na);
            cmd.Parameters.AddWithValue("@id", id);
            con.Open();
            cmd.ExecuteNonQuery();
            con.Close();
        }
    }
}
