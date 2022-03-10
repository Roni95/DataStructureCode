/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//Binary search
#include <stdio.h>
#include <math.h>
int main()
{
    int n ,value;
    printf("ENter array size :");
    scanf("%d",&n);
    int A[n],first=0,last=n-1,i,mid;
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("Enter Searching value : ");
    scanf("%d",&value);
    mid=(first+last)/2;
    while(first<=last){
        if(A[mid]<value)
            first=mid+1;
        else if(A[mid]==value){
            printf("Searching value found at Location %d\n",mid+1);
            break;
        }
        else 
            last=mid-1;
        mid=(first+last)/2;
    }
    if(first>last)
        printf("Searching Value Not Found\n");
    return 0;
}