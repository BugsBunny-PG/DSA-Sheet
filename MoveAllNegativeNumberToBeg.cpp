//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include<bits/stdc++.h>
using namespace std;
void sort_arr(int arr[],int n){
	int flag=1;
	while(flag==1){
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
				flag=0;
			}
		}
		if(flag==0){
			flag=1;
		}
		else 
			break;
	}
}
int main(){
	int n;
	cout<<"enter size of array :";
	cin>>n;
	int arr[n];
	cout<<"Enter element of Array :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    sort_arr(arr,n);
    for(int i=0;i<n;i++)
    	 cout<<arr[i]<<" ";
    cout<<endl;
}