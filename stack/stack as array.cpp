#include <iostream>
using namespace std;
const int max_size=100;
template <class t>
class Stack{
	private:
		int top;
		t item[max_size];
	public:
	Stack():top(-1){}
    void push(t element){
    	if(top>=max_size-1){
    		cout<<"the stack is full";
		}else{
				top++;
		item[top]=element;
		}
	}
	bool isEmpty(){
		return top<0;
	}
	
	void pop(){
		if(isEmpty()){
			cout<<"the stack is empty";
		}else{
		top--;	
		}	
	}
	
		void pop(t &element){
		if(isEmpty()){
			cout<<"the stack is empty";
		}else{
			element=item[top];
		top--;	
		}	
	}
	void get_top(t &element){
		if(isEmpty())
		{
			cout<<"the stack is empty";
		}else{
			element=item[top];
			cout<<element<<endl;;
			}
		
	}
	
	void print()
	{
		cout<<"[";
		for(int i=top;i>=0;i--)
		{
			cout<<item[i]<<" ";
		}
		cout<<"]";
	}
};


int main(){
	Stack<char> s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	char z='s';
	s.pop(z);
	cout<<z<<endl;
	/*	int y=0;
	s.get_top(y);
*/
	s.print();
	return 0;
}
