#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> fun1(vector<int> hieghts, int n){
	stack<int> s;
	vector<int>ans(n);
	s.push(-1);
	for(int i=n-1;i>=0;i--){
		int curr=hieghts[i];
		while(s.top()!=-1 && hieghts[s.top()]>=curr){
			s.pop();
		}
		ans[i]=s.top();
		s.push(i);
	}
	return ans;
}

vector<int> fun2(vector<int> hieghts, int n){
	stack<int> s;
	vector<int>ans(n);
	s.push(-1);
	for(int i=0;i<n;i++){
		int curr=hieghts[i];
		while(s.top()!=-1 && hieghts[s.top()]>=curr){
			s.pop();
		}
		ans[i]=s.top();
		s.push(i);
	}
	return ans;
}
	
	

	

int area(vector<int> hieghts){
	int n=hieghts.size();
	vector<int> next;
	vector<int> prev;
	next=fun1(hieghts,n);
	prev=fun2(hieghts,n);
	int area=INT_MIN;
	for(int i=0;i<n;i++){
		int l=hieghts[i];
		int b=next[i]-prev[i]-1;
		if(next[i]== -1){
			next[i]=n;
		}
		int newArea=l*b;
		area=max(newArea,area);
	}
	return area;
}

int main(){
	vector<int> hieghts={2,1,5,6,2,3};
	cout<<area(hieghts);
}
	
	