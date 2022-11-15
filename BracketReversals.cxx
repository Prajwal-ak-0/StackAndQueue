#include<iostream>
#include<stack>
using namespace std;

int fun(string str){
	stack<int> s;
	if(str.length()%2 ==1){
		return -1;
	}
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		if(ch=='{'){
			s.push(ch);
		}
		else{
			if(!s.empty() && s.top()=='{'){
				s.pop();
			}
			else{
				s.push(ch);
			}
		}
	}
	int a=0;
	int b=0;
	while(!s.empty()){
		if(s.top()=='{'){
			a++;
		}
		else{
			b++;
		}
		s.pop();
	}
	int ans=(a+1)/2 +	(b+1)/2;
	return ans;
}
int main(){
	string str="{}{}}}{";
	cout<<fun(str);
}