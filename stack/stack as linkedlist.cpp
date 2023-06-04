#include <iostream>
using namespace std;
template<class t>
class stack{
	private:
		struct node{
			t item;
			node * next;
		};
		node* top,*cur;
		
	public:
		stack(){
			top=NULL;
		}
		
		void push(t newItem){
			node* newItemptr= new node;
			if(newItemptr==NULL){
				cout<<"cannot allocate new item";
			}else{
				newItemptr->item=newItem;
			newItemptr->next=top;
			top=newItemptr;	
			}
		}
		bool isEmpty(){
			return top==NULL;
		}
		void pop(){
			if(isEmpty()){
				cout<<"stack is already empty\n";
			}else{
			node* temp=top;
			top=top->next;
			temp= temp->next =NULL;	
			delete temp;
			}
		}
			void pop(t &topElement){
			if(isEmpty()){
				cout<<"stack is already empty\n";
			}else{
			topElement= top->item;
			node* temp=top;
			top=top->next;
			temp= temp->next =NULL;	
			delete temp;
			}
		}
			void getTop(t &topElement){
			if(isEmpty()){
				cout<<"stack is  empty\n";
			}else{
			topElement= top->item;
			}
		}
		void display(){
			cur=top;
			cout<<"[ ";
			while(cur!=NULL){
				cout<<cur->item<<" ";
				cur=cur->next;				
			}
			
			cout<<" ]\n";
		}
		
};
int main()
{
	stack <int> s;
	s.push(100);
	s.push(200);
	s.push(300);
	s.pop();
	int x=0;
	s.getTop(x);
	s.display();
	cout<<x;
	return 0;
}
