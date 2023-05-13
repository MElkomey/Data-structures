#include <iostream>
using namespace std;
class linkedList{
	private:
		struct node{
			int item;
			node * next;
		};
		node *head, *tail;
		int length;
		
	public:
	linkedList(){
		head=tail=NULL;
		length=0;
	}	
	
	bool isEmpty(){
		return length==0; //head==null 
	}
	
	void insertFirst(int element){
		node *newNode= new node;
		newNode->item=element;
		if(isEmpty()){
			head= tail=newNode;
			newNode->next=NULL;
		}else{
		newNode->next=head;
		head=newNode;	
		}
		length++;
	}
	
	void insertLast(int element){
		node *newNode= new node;
		newNode->item=element;
		if(isEmpty()){
			head= tail=newNode;
			newNode->next=NULL;
		}else{	
		tail->next=newNode;
		newNode->next=NULL;
		tail=newNode;
		}
		length++;
	}
	
	
	void insertAtPosition(int pos,int element){
	if(pos<0||pos>length)
	  cout<<"out of range...!\n";
	else if(pos==0)
	    insertFirst(element);
	else if(pos==length)
	    insertLast(element);
	else{
		node *newNode =new node;
		newNode->item=element;
		node *cur=head;
        for (int i=1;i<pos;i++)
           cur=cur->next;
        newNode->next=cur->next;
        cur->next=newNode;
	}
	length++;	
	}
	
	void print(){
		if(isEmpty())
			cout<<"the linked list is already empty...!\n";
		else if(length==1)//  head==null
			cout<<head->item<<"\n";
		else{
			node *cur=head;
			while(cur!=NULL){
				cout<<cur->item<<" ";
				cur=cur->next;
			}
			}	
		
	}

};

int main()
{
	
	linkedList l;
	l.insertFirst(0);
	l.insertFirst(6);
	l.insertLast(10);
	l.insertAtPosition(2,20);
	l.print();
	
}
