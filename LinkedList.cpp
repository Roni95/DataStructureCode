/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/
//LinkedList Operation in C++
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
	int data ;
	struct node *next;
};
node *head=NULL;
void print(){
	node *temp=head;
	if(temp==NULL)
		cout<<"List is Empty"<<endl;
	else {
		cout <<"Current LinkedList Element : ";
		while (temp!=NULL){
			cout<<temp->data<<" ";
			temp = temp-> next ;
		}
		cout<<endl;
	}
}
void deletenode(int p){
	int count=0;
	node *del=head,*temp;
	while(del!=NULL){
		count++;
		if(count==p)
			break;
		temp=del;
		del=del->next;
	}
	node *temp2=del;
	del=del->next;
	temp->next=del;
	free(temp2);
	print();
}
void insert(int n){
	if(head==NULL){
		head=new node;
		head->data=n;
		head->next=NULL;
	}
	else {
		node *point= head ;
		while (point->next!=NULL)
			point = point ->next;
		node *temp = new node ;
		temp->data=n;
		temp->next=NULL;
		point->next = temp;
	}
	print();
}
node *getNode(int data) 
{ 
    node *newNode = new node; 
    newNode->data = data; 
    newNode->next = NULL; 
    return newNode; 
} 
void insertpos(int p,int n){
	node **ins = &head;
	if(p<1)
		cout<<"Invalid position"<<endl;
	else {
		while(p--){
			if(p==0){
				node *temp=getNode(n);
				temp->next=*ins;
				*ins=temp;
			}
			ins = &(*ins)->next;
		}
	}
	print();
}

void LinkedList(){
	cout<<"\nSelect Option :\n1.Insert at the end\n2.Insert in possition\n3.Delete position\nPress 0 to exit"<<endl;
	int op;
	cin>>op;
	if(op==1){
		int value;
		cout<<"\nEnter insert value : ";
		cin>>value;
		insert(value);
		LinkedList();
	}
	else if(op==2){
		int pos,value ;
		cout<<"\nENter insert position and value : ";
		cin>>pos>>value;
		insertpos(pos,value);
		LinkedList();
	}
	else if (op==3){
		int pos;
		cout<<"\nEnter delete position :";
		cin>>pos;
		deletenode(pos);
		LinkedList();
	}
	else if(op==0){
		cout<<"\n...Exit Succesful...\n...Thank you ..."<<endl;
	}
	else {
		cout<<".... Choice a valid option ....."<<endl;
		LinkedList();
	}
}
int main(){
	LinkedList();
	return 0;
}