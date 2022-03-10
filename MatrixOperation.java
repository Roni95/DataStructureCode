//Matrix Operation
import java.util.*;

public class Mat{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int i,j;
        System.out.println("Enter the order of first Matrix : ");
        int r1=in.nextInt();
        int c1=in.nextInt();
        int[][] Mat1=new int[r1][c1];
        System.out.println("Enter All elements of First Matrix : ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
                Mat1[i][j]=in.nextInt();
        }
        System.out.println("Enter the order of Second Matrix : ");
        int r2=in.nextInt();
        int c2=in.nextInt();
        int[][] Mat2=new int[r2][c2];
        System.out.println("Enter All elements of Second Matrix : ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
                Mat2[i][j]=in.nextInt();
        }
        Matrix obj=new Matrix();
        obj.mat(Mat1,Mat2,r1,r2,c1,c2);
    }
}

public class Matrix{
    Scanner in=new Scanner(System.in);
    int mat(int[][] M1,int[][] M2,int r1,int r2,int c1,int c2){
        System.out.println("\nPlease select an option : \n1.Summation\n2.Multiplication\n3.Transpose Mat A\n4.Transpose Mat B \nPress 0 to Exit");
        int i,j,k, option=in.nextInt();
        if(option==1){
            if(r1==r2 && c1==c2){
                System.out.println("Summation is :");
                for(i=0;i<r1;i++){
                    for(j=0;j<c1;j++){
                        System.out.print((M1[i][j]+M2[i][j])+"   ");
                    }
                    System.out.println();
                }
            }
            else    
                System.out.println("Summation is not possible ");
            mat(M1, M2, r1, r2, c1, c2);
        }
        else if(option==2){
            int sum=0;
            if(c1==r2){
                System.out.println("Multiplication is : ");
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<r2  ;j++)
                    {
                        sum=0;
                        for(k=0; k<c1 ;k++)
                            sum=sum+M1[i][k]*M2[k][j];
                        System.out.printf("%d  ",sum);
                    }
                    System.out.println();
                }
            }
            else 
                System.out.println("Multiplication is not possible ");
            mat(M1, M2, r1, r2, c1, c2);
        }
        else if(option==3){
            System.out.println("Transpose of Mat A :");
            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++){
                    System.out.print(M1[j][i]+"   ");
                }
                System.out.println();
            }
            mat(M1, M2, r1, r2, c1, c2);
        }
        else if(option==4){
            System.out.println("Transpose of Mat B :");
            for(i=0;i<r2;i++){
                for(j=0;j<c2;j++){
                    System.out.print(M2[j][i]+"   ");
                }
                System.out.println();
            }
            mat(M1, M2, r1, r2, c1, c2);
        }
        return 0;
    }
}