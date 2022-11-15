/*

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

class stack{
	public:
	node* top;
	stack(){
		top=NULL;
	}
	
	void push(int d){
		node* temp=new node(d);
		
			temp->next=top;
			top=temp;
	}
	
	bool isEmpty(){
		if(top==NULL){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	void display(){
		node* temp=top;
		if(temp==NULL){
			cout<<"stack is underflow.."<<endl;
		}
		else{
			while(temp!=NULL){
				cout<<temp->data<<"  ";
				temp=temp->next;
			}
		}
	}
	
	void pop(){
		node* temp=top;
		if(temp==NULL){
			cout<<"stack underflow.."<<endl;
		}
		else{
			top=top->next;
			temp->next=NULL;
			delete temp;
		}
	}
	
	int peek(){
		if(top!=NULL){
			return top->data;
		}
		else{
			cout<<"underflow";
		}
	}
	
};

int main(){
	stack s;
	s.push(10);
	s.push(20);
	s.pop();
	cout<<s.peek()<<endl;
	s.display();
}


*/

#include<iostream>
using namespace std;

class stack{
	public:
	int top;
	char *arr;
	int size;
	
	stack(int size){
		this->size=size;
		arr=new char[size];
		 top=-1;
	}
	
	void push(char d){
		if(top==size){
			cout<<"stacl overfloe"<<endl;
		}
		else{
			top++;
			arr[top]=d;
		}
	}
	
	char peek(){
		if(top==-1){
			cout<<"stavk underflow"<<endl;
			return 'z';
		}
		else{
			return arr[top];
		}
	}
	
	void pop(){
		if(top==-1){
			cout<<"stack is underfloe"<<endl;
		}
		else{
			top--;
		}
	}
	
	bool isEmpty(){
		if(top==-1){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	void display(){
		for(int i=0;i<=top;i++){
			cout<<arr[i]<<"  ";
		}
	cout<<endl;
	}
	
	int length(){
		if(top==-1){
			return -1;
		}
		int ans=top+1;
		return ans;
	}	
};
	
bool valid(string str){
	stack s(10);
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		if( ch=='(' || ch=='{' || ch=='['){
			s.push(ch);
		}
		else{
			if(!s.isEmpty()){
				if( (ch=='}' && s.peek()=='{')  ||  (ch==']' && s.peek()=='[')  || (ch==')' && s.peek()=='(')  ){
					s.pop();
				}
				else{
					return false;
				}
			}else{
				return false;
			}
		}
		
	}
	if(s.isEmpty()){
		return 1;
	}
	
}
					
		
	

int main(){
	
	string str="()()";
	bool n=valid(str);
	if(n==1){
		cout<<"valid";
	}
	else{
		cout<<"not valid";
	}
	
	
	
}