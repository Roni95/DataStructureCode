/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//Array Travers , Insert , Delete and Searching 
#include <stdio.h>

//Traversing Function
int Travers(int N[],int s) 
{
    int i;
    printf("Traversing is : ");
    for(i=0;i<s; i++)
        printf("%d   ",N[i]);
    printf("\n");
    return Lab1(N,s);
}

//Insertion Function
int Insert(int L[],int s) 
{
    int p,j=s,v; // p=position , v = value
    printf("Enter The Insert position : ");
    scanf("%d",&p);
    printf("Enter the insert Value :");
    scanf("%d",&v);
    while (j>=p-1)
    {
        L[j+1]=L[j];
        j=j-1;
    }
    L[p-1]=v;
    s=s+1;
    return Lab1(L,s);
}

//Deleting Function
int Delete(int N[],int s) 
{
    int i,j,v;//v = deleting value
    printf("Enter Delete value : ");
    scanf("%d",&v);
    for(i=0;i<s;i++)
    {
        if(N[i]==v)
        {
            for(j=i;j<s;j++)
                N[j]=N[j+1];
        }
    }
    s=s-1;
    return Lab1(N,s);
}

//Searching Function
int Search(int N[],int s) 
{
    int v ,i, found=0; //v= searching value p=found position
    printf("Enter Searching value : ");
    scanf("%d",&v);
    for(i=0;i<s;i++)
    {
        if(N[i]==v)
        {
            printf("Found in position : %d\n",i+1);
            found++;
        }
    }   
    if(found>0)
        printf("Total Found : %d\n",found);
    else 
        printf("Search value not found \n");
    return Lab1(N,s);
}

//Working Function
int Lab1(int N[],int s) 
{
    int option;
    printf("\t\tPlease Choise an option : \n\t1.Travers Array \n\t2.Intert an Element \n");
    printf("\t3.Delete an element \n\t4.Seach an element \n\t\t Press 0 to Exit\n");
    scanf("%d",&option);
    if(option==1)
        Travers(N,s);
    else if(option==2)
        Insert(N,s);
    else if(option==3)
        Delete(N,s);
    else if(option==4)
        Search(N,s);
    else if(option==0)
        return 0;
    else 
        printf("Please Choise a Valid option \n");
}

// This is The main Function
int main() 
{
    int size;
    printf("Enter The Array Size : ");
    scanf("%d", &size);\
    int A[size],i;
    printf("Enter The Element of the Array :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    Lab1(A,size);
    return 0;
}