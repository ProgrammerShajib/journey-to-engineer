import java.util.Scanner; 
class Pyramid {
    private int rows;

    public Pyramid(int rows) {
        this.rows = rows;
    }

    public void display() {
        for (int i = 1; i <= rows; i++) {
            
            for (int j = rows; j > i; j--) {
                System.out.print(" ");
            }
       
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int rows = input.nextInt();
        Pyramid myPyramid = new Pyramid(rows);
        myPyramid.display();
        
        input.close();
    }
}

 