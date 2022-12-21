#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<char> st;
	string str;
	cout<<"Enter a String :";
	cin>>str;
	for(int i=0;i<str.length();i++){
		st.push(str[i]);
	}
	while(!st.empty()){
		 cout<<st.top();
		 st.pop();
		}

		cout<<endl;
}