//Array Operation
import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Array Size : ");
        int i,n=in.nextInt();
        int[] A=new int[100]; 
        System.out.println("Enter Your Array Element : ");
        for(i=0;i<n;i++)
            A[i]=in.nextInt();
        System.out.println("The Array Elements is : ");
        for(i=0;i<n;i++)
            System.out.print(A[i]+" ");
        Array obj=new Array();
        obj.A(A,n);
    }
}
class Array{
    Scanner in=new Scanner(System.in);
    int A(int[] A,int n){
        System.out.println("\nPlease select an option : \n1.Insert\n2.Delete\n3.Search \nPress 0 to Exit");
        int i, option=in.nextInt();
        if(option==1){
            n=n+1;
            System.out.println("Enter Insert Possition & value :");
            int p=in.nextInt();
            int value=in.nextInt();
            for(i=n-1;i>=p-1;i--)
                A[i]=A[i-1];
            A[p-1]=value;
            System.out.flush();
            System.out.println("The Array Elements is : ");
            for(i=0;i<n;i++)
                System.out.print(" "+A[i]+" ");
            return A(A,n);
        }
        else if(option==2){
            n=n-1;
            System.out.println("Enter Delete Position : ");
            int p=in.nextInt();
            for(i=p-1;i<n;i++)
                A[i]=A[i+1];
            System.out.println("The Array Elements is : ");
            for(i=0;i<n;i++)
                System.out.print(" "+A[i]+" ");
            return A(A,n);
        }
        else if(option==3){
            System.out.println("Enter The search Element : ");
            int value=in.nextInt();
            int found=0;
            for(i=0;i<n;i++){
                if(A[i]==value){
                    found =1;
                    break;
                }
            }
            if(found==1)
                System.out.println("Data found in Location : "+i);
            else 
                System.out.println("Data not Found ");
            return A(A,n);
        }
        return 0;
    }
}