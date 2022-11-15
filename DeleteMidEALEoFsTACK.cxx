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
	int *arr;
	int size;
	
	stack(int size){
		this->size=size;
		arr=new int[size];
		 top=-1;
	}
	
	void push(int d){
		if(top==size){
			cout<<"stacl overfloe"<<endl;
		}
		else{
			top++;
			arr[top]=d;
		}
	}
	
	int peek(){
		if(top==-1){
			cout<<"stavk underflow"<<endl;
			return -1;
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

void fun(stack &s,int count ,int n){
	
	if(count == n/2){
		s.pop();
		return;
	}
	
	int num=s.peek();
	s.pop();
	fun(s,count+1,n);
	s.push(num);
}
	

int main(){
	stack s(6);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.pop();
	s.display();
	cout<<s.length()<<endl;
	int n=s.length();
	fun(s,0,n);
	s.display();
	
	
}