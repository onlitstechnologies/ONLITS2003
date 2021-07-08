import java.awt.*;
import java.awt.event.*;
import java.lang.Integer;

public class AdditionGUI extends Frame implements ActionListener{
    Label lblaugend, lbladdend, lblsum;
    TextField txtaugend, txtaddend, txtsum;
    Button btnadd;
    AdditionGUI()
    {
        setSize(400, 300);
        setVisible(true);
        setLayout(null);
        setTitle("Addition App");        

        lblaugend = new Label("Augend");
        lblaugend.setBounds(30, 50, 100, 30);
        add(lblaugend);

        txtaugend = new TextField();
        txtaugend.setBounds(130, 50, 100, 30);
        add(txtaugend);

        lbladdend = new Label("Addend");
        lbladdend.setBounds(30, 100, 100, 30);
        add(lbladdend);

        txtaddend = new TextField();
        txtaddend.setBounds(130, 100, 100, 30);
        add(txtaddend);

        lblsum = new Label("Sum");
        lblsum.setBounds(30, 150, 100, 30);
        add(lblsum);

        txtsum = new TextField();
        txtsum.setBounds(130, 150, 100, 30);
        add(txtsum);

        btnadd = new Button("Add");
        btnadd.setBounds(30, 200, 100, 30);
        btnadd.addActionListener(this);
        add(btnadd);
    }

    public void actionPerformed(ActionEvent e) {
        int a = Integer.parseInt(txtaugend.getText());
        int b = Integer.parseInt(txtaddend.getText());
        int c = a + b;
        txtsum.setText(Integer.toString(c));
    }

    public static void main(String[] args) {
        // new AdditionGUI();
        new AdditionGUIChild();
    }
}

class AdditionGUIChild extends AdditionGUI {
    AdditionGUIChild()
    {
        Label lblMessage = new Label("AdditionGUIChild");
        lblMessage.setBounds(150, 200, 150, 30);
        add(lblMessage);
    }

}
