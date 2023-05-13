#include<iostream>
using namespace std;
//const int max_size=100;
template <class t>
class arrayQueueType{
	private:
		int front;
		int rear;
	//	t arr[max_size];
		t *arr;
		int length;
		int max_size;
	public:
		arrayQueueType(int size){
			front=0;
			if(size<=0){
				max_size=100;
			}else{
				max_size=size;
			}
			arr=new t[max_size];
			rear=max_size-1;
			length=0;
		}
		 
		bool isEmpty(){
			return length==0;
		}
		
		bool isFull(){
			return length==max_size;
		}
		
		void enqueue(t element){
			if(isFull()){
				cout<<"queue is full...!";
			}else{
				rear=(rear+1)%max_size;
				arr[rear]=element;
				length++;
			}
		}
		
		void dequeue(){
			if(isEmpty()){
				cout<<"can\'t delete ,queue is empty";
			}else{
				front=(front+1)%max_size;
				length--;
			}
		}
		
		int getFront(){
			if(isEmpty()){
				cout<<"queue is empty";
			}else{
				return arr[front];
			}
		}
		
		int getRear(){
			if(isEmpty()){
				cout<<"queue is empty";
			}else{
				return arr[rear];
			}
		}
		
		void display(){
			if(isEmpty()){
				cout<<"the queue is empty";
			}else{
				//cout<<"[";
				for(size_t i=front ;i!=rear;i=(i+1)%max_size){
					cout<<arr[i]<<" ";
				}
				cout<<arr[rear];
			}
		}
		
		int search(t element){
		if(isEmpty()){
			cout<<"the queue is empty\n";
		}	
		else{
			
		    for	(size_t i=front; i!=rear; i=(i+1)%max_size){
			if(arr[i]==element){
				return i;
				break;
			}
				
		 }
		 if(arr[rear]==element)
		 	return rear;
		
		}
		
		}
		
		
		
};

int main(){
	arrayQueueType <int>q1(5);
	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);
    q1.enqueue(40);

	cout<<q1.search(10);
    
 
	
}
