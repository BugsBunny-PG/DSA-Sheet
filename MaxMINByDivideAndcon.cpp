#include<bits/stdc++.h>
using namespace std;
struct maxmin{
	int min;
	int max;
};
maxmin find_max_min(int arr[],int low ,int high){
	maxmin m;
	if(low==high){
		m.min=arr[0];
		m.max=arr[0];
		return m;
	}
	else{
		if(arr[0]>arr[1]){
			m.max=arr[0];
			m.min=arr[1];
		}
		else{
			m.max=arr[1];
			m.min=arr[0];
		}
		for(int i=low;i<=high;i++){
			if(arr[i]>m.max){
				m.max=arr[i];
			}
			if(arr[i]<m.min){
				m.min=arr[i];
			}
		}
		return m;
	}

}
int main(){
	maxmin m1,m2;
	int n;
	cout<<"enter size eof array :";
	cin>>n;
	int arr[n];
	cout<<"enter elements in array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	n=n-1;
	int mid=(0+n)/2;
     m1=find_max_min(arr,0,mid);
     m2=find_max_min(arr,mid+1,n);
     if(m1.max>m2.max){
     	cout<<"Maximum element is :"<<m1.max<<endl;
     }
     else
     	cout<<"Maximum element is :"<<m2.max<<endl;
     if(m1.min<m2.min)
     	cout<<"Minimum element is : "<<m1.min<<endl;
     else
     	cout<<"Minimum element is : "<<m2.min<<endl;

}