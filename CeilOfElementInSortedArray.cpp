#include<bits/stdc++.h>
using namespace std;
int Ceil_of_num(vector<int> vec,int n,int key){
	int s=0,e=n-1;
	int mid,res;
	while(s<=e){
		mid=s+(e-s)/2;
	if(vec[mid]==key){
		return vec[mid];
	}
	else if(vec[mid]>key){
		res=vec[mid];
		e=mid-1;
	}
	else{
		s=mid+1;
	}
   }
   return res;
}
using namespace std;
int main(){
	int n,x;
	cout<<"Enter Size of array: ";
	cin>>n;
	cout<<"Enter array Element : ";
	vector<int> vec;
	for(int i=0;i<n;i++){
		cin>>x;
		vec.push_back(x);
	}
	int key;
	cout<<"Enter Element For finding Ceil : ";
	cin>>key;
	cout<<"Ceil Of a Number : "<<Ceil_of_num(vec,n,key)<<endl;
}