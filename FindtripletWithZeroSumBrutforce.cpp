#include<bits/stdc++.h>
using namespace std;
bool find_sum(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;j<n;j++){
				int sum=0;
				sum=arr[i]+arr[j]+arr[k];
				if(sum==0){
					return true;
					break;
				}
			}
		}
	}
	return false;
}
int main(){
	int n;
	cout<<"Enter size of n ";
	cin>>n;
	int arr[n];
	cout<<"Enter Array Element :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==3){

	}
	bool res=find_sum(arr,n);
	if(res==0)
		cout<<"No Triplet Found\n";
	else
		cout<<"Triplet found\n";
}