#include <iostream>
using namespace std;
template <class t>
class linkedQueue{
	private:
		struct node{
			t item;
			node * next;
		};
		node *frontptr;
		node *rearptr;
		int length;
	public:
	linkedQueue(){
		rearptr=frontptr=NULL;
		length=0;
	}	
	bool isEmpty(){
		if(length==0)
		return true;
		else
		return false;
	}
	
	void enqueue(t element){
		if(isEmpty()){
			frontptr= new node;
			frontptr->item=element;
			frontptr->next=NULL;
			rearptr=frontptr;
			length++;
		}else{
			node * newptr=new node;
			newptr->item=element;
			newptr->next=NULL;
			rearptr->next=newptr;
			rearptr=newptr;
			newptr=NULL;
			length++;
		}
	} 
	
	void dequeue(){
		if(isEmpty()){
			cout<<"the queue is already empty...!\n";
		}else if(frontptr==rearptr){
			frontptr=rearptr=NULL;
			length=0;
		}else{
			node *temp=frontptr;
			frontptr=frontptr->next;
			temp->next=NULL;
			delete temp;
			length--;
		}
		
	}
	
	t getFront(){
		if(isEmpty())
		cout<<"queue is empty";
		else
		return frontptr->item;
	}
		t getRear(){
		if(isEmpty())
		cout<<"queue is empty";
		else
		return rearptr->item;
	}
	
	void clearQueue(){
		if(isEmpty()){
			cout<<"the queue is already empty";
		}else{
			node * cur=frontptr;
			while(frontptr!=NULL){
			frontptr=frontptr->next;
			cur->next=NULL;
			cur=frontptr;
			length--;
			}
			rearptr=frontptr=NULL;
			length=0;
		}
	}
	
	void display(){
		if(isEmpty())
			cout<<"the queue is empty";
		else{
		node *cur=frontptr;
		cout<<" the queue elements :[";
		while(cur!=NULL){
		cout<<cur->item<<" ";
		cur=cur->next;
	}
	cout<<"]\n";
	}
		
	}
	
	int getSize(){
		return length;
	}
	
	
};











int main(){
	linkedQueue<int> q1;
	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);

cout<<q1.getRear()<<"\n";
	q1.display();
	

	
	
	return 0;
	
}
