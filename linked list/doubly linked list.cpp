#include<iostream>
using namespace std;

// except remove first ,last, at pos and destroy
class doublyLinkedList{
	private:
	struct node{
		int item;
		node *next, *prev;
	};
	node *head, *last;
	int length;
	public:
	doublyLinkedList(){
		head=last=NULL;
		length=0;
	}	
	
	bool isEmpty(){
		return (head==NULL);
	}
	
	void insertFirst(int element){
		node *newNode=new node;
		newNode->item=element;
		if(isEmpty()){
			head=last=newNode;
			newNode->next=newNode->prev=NULL;
		}else{
			newNode->prev=NULL;
			newNode->next=head;
			head->prev=newNode;
			head=newNode;	
		}
		length++;
	}
	
	
		void insertLast(int element){
		node *newNode=new node;
		newNode->item=element;
		if(isEmpty()){
			head=last=newNode;
			newNode->next=newNode->prev=NULL;
		}else{
		newNode->next=NULL;
		newNode->prev=last;
		last->next=newNode;
		last=newNode;	
		}
		length++;
	}
	
	void insertAtPosition(int pos,int element){
		if(pos<0||pos>length){
			cout<<"out of range...\n";
		}else if(pos==0){
			insertFirst(element);
			length++;
		}else if(pos==length){
        	insertLast(element);
        	length++;
		}else{
			node *newNode=new node;
	            node *cur = head;
				for (int i = 1; i < pos; i++)
				{
					cur = cur->next;
				}

				newNode->next = cur->next;
				newNode->prev = cur;
				cur->next->prev = newNode;
				cur->next = newNode;
				length++;
		}
	}
	
	void display(){
		node *cur=head;
		while(cur!=NULL){
			cout<<cur->item <<" ";
			cur=cur->next;
		}
		cout<<endl;
	}
	
	
		
	
};



int main(){
	doublyLinkedList l;
	l.insertFirst(2);
	l.insertFirst(1);
	l.insertLast(3);
	l.display();
	
	l.insertAtPosition(2,9);
	l.display();
}
