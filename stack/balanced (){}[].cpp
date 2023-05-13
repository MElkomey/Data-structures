#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool arePairs(char open, char close){
	if(open=='('&&close==')')
	return true;
	else if(open=='['&&close==']')
	return true;
	else if(open=='{'&&close=='}')
	return true;
	else
	return false;
}
bool areBalanced(string exp){
	stack<char> s;
	
	for(size_t i=0;i<exp.length();i++){
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
		 s.push(exp[i]);
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
		{
			if( s.empty() ||!arePairs(s.top(),exp[i]))
			
             return false;
			else
				s.pop();
			
		}
	}
	if(s.empty())
	return true;
	else 
	return false;

}
int main(){
	string expression;
	cin>>expression;
	if(areBalanced(expression)==true){
		cout<<"balanced";
	}else{
		cout<<"not balanced";
	}
	return 0;
}
