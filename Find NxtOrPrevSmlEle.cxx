#include<iostream>
#include<stack>
#include<vector>
using namespace std;

/*
vector<int> fun(int a[], int n){
	vector<int> ans(n);
	stack<int> s;
	s.push(-1);
	for(int i=n-1;i>=0;i--){
		int curr=a[i];
		while(s.top()>=curr){
			s.pop();
		}
		ans[i]=s.top();
		s.push(curr);
	}
	return ans;
}



vector<int> fun(int a[], int n){
	vector<int> ans(n);
	stack<int> s;
	s.push(-1);
	for(int i=0;i<n;i++){
		int curr=a[i];
		while(s.top()>=curr){
			s.pop();
		}
		ans[i]=s.top();
		s.push(curr);
	}
	return ans;
}

*/



int  main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> sol=fun(a,n);
	for(int i=0;i<n;i++){
		cout<<sol[i]<<" ";
	}
}


