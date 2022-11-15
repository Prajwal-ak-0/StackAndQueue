#include<iostream>
using namespace std;

class stack{
	public:
	int size;
	int *arr;
	int top1;
	int top2;
	
	stack(int size){
		this->size=size;
		arr=new int[size];
		top1=-1;
		top2=size;
	}
	
	void push1(int d){
		if(top2-top1>1){
			top1++;
			arr[top1]=d;
		}
		else{
			cout<<"stack overflow.."<<endl;
		}
	}
	
	void push2(int d){
		if(top2-top1>1){
			top2--;
			arr[top2]=d;
		}
		else{
			cout<<"stack overflow.."<<endl;
		}
	}
	
	void pop1(){
		if(top1==-1){
			cout<<"stack underflow.."<<endl;
		}
		else{
			top1--;
		}
	}
	
	void pop2(){
		if(top2==size){
			cout<<"stack underfloe"<<endl;
		}
		else{
			top2++;
		}
	}
	
	int peek1(){
		if(top1!=-1){
			return arr[top1];
		}
		else{
			return -1;
		}
	}
	
	int peek2(){
		if(top2!=-1){
			return arr[top2];
		}
		else{
			return -1;
		}
	}
	
	void display1(){
		if(top1!=-1){
			for(int i=0;i<=top1;i++){
				cout<<arr[i]<<"  ";
			}
			cout<<endl;
		}
		else{
			cout<<"underflow"<<endl;
		}
	}
};

int main(){
	stack s(6);
	s.push1(3);
	s.push2(4);
	s.push1(5);
	s.push2(6);
	s.pop1();
	s.pop2();
	s.push1(7);
	s.push1(8);
	s.display1();
	cout<<s.peek1()<<endl;
	cout<<s.peek2();
}