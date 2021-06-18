import java.awt.*;

public class AdditionGUI extends Frame {
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
        add(btnadd);
    }
    public static void main(String[] args) {
        new AdditionGUI();
    }
}
