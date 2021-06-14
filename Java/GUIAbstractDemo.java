import java.awt.*;
public class GUIAbstractDemo {
	public static void main(String[] args) {
		Frame f = new Frame();
		f.setSize(500,500);
		f.setVisible(true);

		Label l = new Label("Hello World!");
		f.add(l);
		l.setBounds(20,20,100,100);
	}
}
