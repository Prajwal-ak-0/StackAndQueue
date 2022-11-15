#include<iostream>
#include<stack>
using namespace std;

bool fun(string str){
	stack<char> s;
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
			s.push(ch);
		}
		else{
			if(ch==')'){
				bool ans=true;
				while(s.top()!='('){
					char top=s.top();
					if(top=='+' || top=='-' || top=='*' || top=='/'){
						ans=false;
						s.pop();
					}
				}
				if(ans==true){
					return true;
				}
				s.pop();
			}
		}
	}
	return false;
}
int main(){
	string str="(a+b)";
	cout<<fun(str);
}