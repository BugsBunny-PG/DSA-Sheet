#include<bits/stdc++.h>
using namespace std;
int Floor(vector<int> vec,int n,int key){
	int s=0,e=n-1;
	int mid,res;
	while(s<=e){
       mid=s+(e-s)/2;
       if(vec[mid]==key){
       	return vec[mid];
       }
       else if(vec[mid]<key){
       	   res=vec[mid];
       	   s=mid+1;
       }
       else{
       	  e=mid-1;
       }
	}
	return res;
}
int main(){
	int n,x;
	cout<<"Eneter size of an array ";
	cin>>n;
	cout<<"Enter array element :";
	vector<int> vec;
    for(int i=0;i<n;i++){
    	cin>>x;
    	vec.push_back(x);
    }
    int key;
    cout<<"Enter a number for finding floor :";
    cin>>key;
    cout<<"Floor of an element is :"<<Floor(vec,n,key)<<endl;
	
}