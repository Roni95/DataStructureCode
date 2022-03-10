//Binary Search 
import java.util.*;

public class BinarySearch{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter the Size of Array : ");
        int n=in.nextInt();
        int[] A=new int[n];
        int i;
        for(i=0;i<n;i++){
            A[i]=in.nextInt();
        }
        System.out.println("Enter Searching Value : ");
        int value= in.nextInt();
        int first=0,last =n-1, mid ;
        mid = (first+last)/2;
        while(first<=last){
            if(A[mid]<value)
                first = mid+1;
            else if(A[mid]==value){
                System.out.println("Found in Location : "+(mid+1));
                break;
            }
            else 
                last = mid-1;
            mid=(first+last)/2;
        }
        if(first>last)
            System.out.print("Searching value not Found ");
    }
}