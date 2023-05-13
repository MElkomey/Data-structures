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
	
	void removeFirst(){
		if(isEmpty())
			cout<<"Linked list is already empty...!\n";
		else if(length==1){
		delete head;
		head=tail=NULL;
		length--;
		}else{
			node *temp=head;
			head=temp->next;
			delete temp;
			length--;
		}	
	}
	
	void removeLast(){
		if(isEmpty())
			cout<<"Linked list is already empty...!\n";
		else if(length==1){
		delete head;
		head=tail=NULL;
		length--;
		}else{
		node *cur,*prev;
		cur=head->next;
		prev=head;
		while(cur->next !=NULL){
			cur=cur->next;
			prev=prev->next;
		}
		tail=prev;
		prev->next=NULL;
		delete cur;
			length--;
		}	
	}
	
	void removeElement(int element){
		if(isEmpty())
		  cout<<"list is empty\n";
		 else if(length==1)
		       {
		     	 if(element==head->item)
		     	  {
		     	    delete tail;
				    head=tail=NULL;
				    length=0;
				  }
		     	  else
		     	   cout<<"not found";
			    }
			    else if(element==head->item){
			    	removeFirst();
			    	length--;
				}
			 else{
			 	node *cur,*prev;
			 	cur=head->next;
			 	prev=head;
			 	for(int i=1;i<length;i++)
				    {
				 	  if(cur->item==element){
				 	  	break;
					   }
				 	  cur= cur->next;
				 	  prev=prev->next;
				 	  
				    }
				prev->next=cur->next;
				cur->next=NULL;
				delete cur;	
				length--;
			 }	 
	}
	
	void reverse(){
		node *next1,*prev,*cur;
		prev=NULL;
		cur=head;
		next1=cur->next;

		while(next1!=NULL){
			next1=cur->next;
			cur->next=prev;
			prev=cur;
			cur=next1;
		}
		head=prev;
	}
	
	int search(int element){
		node*cur=head;
		int pos=0;
		while(cur!=NULL){
			if(cur->item==element)
			 return pos;
			 else{
				pos++;
				cur=cur->next;
		        }
		}
		return -1;
	}
	
	
	

};

int main()
{
	
	linkedList l;
	l.insertFirst(0);
	l.insertLast(1);
	l.insertLast(2);
	l.insertLast(3);
	l.insertLast(4);
	l.insertLast(5);
	l.print();
	cout<<"\n";
cout<<l.search(1);
	
}
