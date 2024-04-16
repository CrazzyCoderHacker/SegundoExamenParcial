import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import java.util.Random;

public class GeneradorNumeros extends JFrame 
{
    private JLabel lblCantidad, lblPares, lblImpares, lblPrimos;
    private JTextField txtCantidad;
    private JButton btnGenerar;
    private int num, resultado, deci, j, i;

    public GeneradorNumeros() 
    {
        setTitle("Generador");
        setSize(600, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(5, 2));

        lblCantidad = new JLabel("Ingrese cantidad");
        txtCantidad = new JTextField();
        lblPares = new JLabel("Pares:");
        lblImpares = new JLabel("Impares:");
        lblPrimos = new JLabel("Primos:");
        btnGenerar = new JButton("Generar");

        add(lblCantidad);
        add(txtCantidad);
        add(lblPares);
        add(new JLabel());
        add(lblImpares);
        add(new JLabel());
        add(lblPrimos);
        add(new JLabel());
        add(btnGenerar);

        btnGenerar.addActionListener(new ActionListener() 
        {
            public void actionPerformed(ActionEvent e) 
            {
                generarNumeros();
            }
        });

        setVisible(true);
    }

    private void generarNumeros() 
    {
        int cantidad = Integer.parseInt(txtCantidad.getText());
        ArrayList<Integer> pares = new ArrayList<>();
        ArrayList<Integer> impares = new ArrayList<>();
        ArrayList<Integer> primos = new ArrayList<>();

        Random random = new Random();

        for (i = 0; i < cantidad; i++) 
        {
            num = random.nextInt(50); 
            
            if (num % 2 == 0) 
            {
                pares.add(num);
            } 
              else 
              {
                impares.add(num);
              }
            if (esPrimo(num)) 
            {
                primos.add(num);
            }
        }

        lblPares.setText("Números pares: " + pares.toString());
        lblImpares.setText("Números impares: " + impares.toString());
        lblPrimos.setText("Números primos: " + primos.toString());
    }

    private boolean esPrimo(int num) 
    {
        if (num <= 1)
         {
            return false;
        }
        for (i = 2; i <= Math.sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) 
    {
        SwingUtilities.invokeLater(new Runnable() 
        {
            public void run() 
            {
                new GeneradorNumeros();
            }
        });
    }
}
