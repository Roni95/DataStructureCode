/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/


// Stack Push and PoP , Queue Insert Delete 
#include <stdio.h>

int Travers(int top,int stack[],int size)
{
    int i;
    if(top<0)
        printf("\nThe Stack is Empty\n");
    else
    {
        printf("Travers is : \n");
        for(i=0; i<=top; i++)
            printf("%d  ",stack[i]);
    }
    return Stack(top,stack,size);
}

int Push(int top,int stack[],int size)
{
    int value;
    if(top==size-1)
        printf("\nThe stack is full\n");
    else 
    {
        printf("\nEnter push value or element :");
        scanf("%d",&value); 
        top=top+1;
        stack[top]=value;
    }
    return Stack(top,stack,size);
}

int PoP(int top,int stack[],int size)
{
    if(top<0)
        printf("\nThe Stack is Empty\n");
    else 
        top=top-1;
    return Stack(top,stack,size);
}

int Stack(int top,int stack[],int size)
{
    int option;
    printf("\nPlease Choose an option :\n1.Travers Stack \n2.PUSH\n3.POP\nPress 0 to Main Menu \n");
    scanf("%d",&option);
    if(option==1)
        Travers(top,stack,size);
    else if(option==2)
        Push(top,stack,size);
    else if(option==3)
        PoP(top,stack,size);
    else 
        return Lab4();
}

int TraversQ(int L,int H,int que[],int size)
{
    int i;
    if(L==-1){
        printf("Empty");
        return Que(L,H,que,size);
    }
        
        printf("Travers is : \n");
        for(i=L; i<H; i++)
            printf("%d  ",que[i]);
    return Que(L,H,que,size);
}

int Insert(int L,int H,int que[],int size)
{
    int value;
    if(L==-1){
        L=0;
        H=0;
    }
    if(H==size-1)
        printf("\nOverflow\n");
    else {

        printf("Enter Insert value : \n");
        scanf("%d",&value);
        que[H]=value;
        H=H+1;
    }
    return Que(L,H,que,size);
}

int Delete(int L,int H,int que[],int size)
{ 
        if(L==H)
            printf("\nQueue is Underflow\n");
        else
            L=L+1;
    return Que(L,H,que,size);
}

int Que(int L,int H,int que[],int size)
{
    int option;
    printf("\nPlease Choose an option :\n1.Travers Que \n2.Insert\n3.Delete\nPress 0 to Main Menu \n");
    scanf("%d",&option);
    if(option==1)
        TraversQ(L,H,que,size);
    else if(option==2)
        Insert(L,H,que,size);
    else if(option==3)
        Delete(L,H,que,size);
    else 
        return Lab4();
}

int Lab4()
{   
    int op;
    printf("choose an option :\n1.Stack operation\n2.Quaue Operation\nPress 0 to exit \n");
    scanf("%d",&op);
    if(op==1)
    {
        int top=-1;
        int size;
        printf("Enter The size of stack :\n");
        scanf("%d",&size);
        int stack[size];
        Stack(top,stack,size);
    }
    else if(op==2)
    {
        int L=-1,H=-1;
        int size;
        printf("Enter The size of Queue :\n");
        scanf("%d",&size);
        int que[size];
        Que(L,H,que,size);        
    }
    else 
        return 0;
}

int main()
{
    Lab4();
    return 0;
}