#include<bits/stdc++.h>
using namespace std;
char getCeil(vector<char> vec,int n, char key){
	int s=0,e=n-1;
	int mid;
	char res;
	while(s<=e){
		mid=s+(e-s)/2;
		if(vec[mid]>key){
			res=vec[mid];
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return res;
}
int main(){
	int n;
	cout<<"Enter length of array :";
	cin>>n;
	char x;
	vector<char> vec;
	cout<<"Enter array element : ";
	for(int i=0;i<n;i++){
		cin>>x;
		vec.push_back(x);
	}
	cout<<"Enter key:";
	char key;
	cin>>key;
	cout<<"Ceil Of Alphabet : "<<getCeil(vec,n,key)<<endl;
}