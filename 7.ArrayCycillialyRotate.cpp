//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
#include<bits/stdc++.h>
using namespace std;
//bruteforce technique

/*void rotate(int arr[], int n)
{
  int temp=arr[n-1];
  for(int i=n-1;i>0;i--){
  	arr[i]=arr[i-1];
  }  
  arr[0]=temp;
}*/

//two pointer method 
void rotate(int arr[],int n){
	int i=0,j=n-1;
	while(i!=j){
		swap(arr[i],arr[j]);
		 i++;
	}
	
}
int main(){
	int n;
	cout<<"Enter Array size";
	cin>>n;
	int arr[n];
	cout<<"Enter array element"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	 rotate(arr,n);
	 for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}
