import java.util.ArrayList;

public class ThisWillBreak {
	ArrayList<String> s;
	
	public static void method2() {
		s.add("test");
	}
	
	public static void method1() {
		method2();
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		method1();
	}

}
