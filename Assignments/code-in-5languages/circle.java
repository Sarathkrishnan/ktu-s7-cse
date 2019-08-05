import java.util.Scanner; 
public class circle {
	
	public static void main (String[] args) {
		double ar;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the radius =");
		float r=sc.nextFloat();
		ar=Math.PI * Math.pow(r,2);
		System.out.println("Area of circle is ="+ar);
		
		
		
	}
}

