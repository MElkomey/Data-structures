#include<iostream>
using namespace std;
class listArray{
	private:
		int *arr;
		int max_size;
		int length;
	
	public:
	listArray(int s=10){
		if(s<=0){
			max_size=10;
		}else{
			max_size=s;
		}
		length=0;
		arr=new int[max_size];
	} 
	 
	bool isEmpty(){
		return length==0;
	}	
	
	bool isFull(){
		return length==max_size;
	}
	
	int getSize(){
		return length;
	}
	
	void print(){
		if(isEmpty()){
			cout<<"the list is empty";
		}else{
		     for(int i=0;i<length;i++)
		       cout<<arr[i]<<" ";
			   
			   cout<<endl;	
		    }
		
	}
	void addAtPosition(int pos,int element){
		if(isFull()){
			cout<<"list is already empty....!";
		}else if(pos<0||pos>max_size-1){
			cout<<"out of range";
		}else{
			for(int i=length;i>pos;i--){
				arr[i]=arr[i-1];
			}
			arr[pos]=element;
			length++;
		}
	}
	
    void addAtEnd(int element){
    	if(isFull()){
    		cout<<"the list is already full...!";
		}else{
			arr[length]=element;
			length++;
		}
	}
	
	int search(int element){
		if(isEmpty()){
			cout<<"the list is empty...!";
		}else{
			for(int i=0;i<length;i++){
				if(arr[i]==element)
					return i;
				
			}
			return -1;
		}
	}
	
	void insertNoDublicate(int element){
		if(isFull())
		{
			cout<<"the list is already full...!\n";
		}else{
			if(search(element)!=-1)
			 cout<<"the element is already exists...!";
			else
			  addAtEnd(element);	
			 
		}
	}
	
	void updateAt(int pos ,int value){
		if(isEmpty())
			cout<<"the list is already empty...!";
		else if(pos<0||pos>=length)
		    cout<<"pos not exist...!";
		else
			arr[pos]=value;
	}
	
	int getElement(int pos){
				if(isEmpty())
			cout<<"the list is already empty...!";
		else if(pos<0||pos>=length)
		    cout<<"pos not exist...!";
		else
			return arr[pos];
	}
	
	void removeAtPosition(int pos){
		if(isEmpty()){
			cout<<"the list is already empty\n";
		}else if(pos<0||pos>max_size){
			cout<<"out of range...!\n";
		}else{
			for(int i=pos+1;i<length;i++)
				arr[i-1]=arr[i];
			
			length--;
		}
	}
	
	~listArray(){
		delete[]arr;
		length=0;
	}
	
	
};
int main(){
	listArray a;
	a.addAtPosition(0 ,1);
	a.addAtEnd(2);
	a.addAtEnd(3);
	a.addAtEnd(4);
	a.addAtEnd(5);
    a.updateAt(3,1000);
    a.print();
   

	
	
	
	return 0;
}
