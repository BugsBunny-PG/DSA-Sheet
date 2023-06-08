#include <bits/stdc++.h>
using namespace std;
	int findKRotation(int arr[], int n) {
	    int s=0;
	    int e=n-1;
	    int mid,prev,next;
	    while(s<=e){
	    	 if(arr[s]<=arr[e]){
	             return s;
	            }
	        mid=s+(e-s)/2;
	        prev=(mid+n-1)%n;
	        next=(mid+1)%n;
	        cout<<"mid="<<mid<<"prev="<<prev<<"next="<<next<<endl;
	        if(arr[mid]<=arr[next]&&arr[mid]<=arr[prev]){
	            return mid;
	        }
	        else if(arr[mid]>=arr[s]){
	            s=mid+1;
	        }
	        else {
	            e=mid-1;
	        }
	    }
	    return s;
        	}
 
 
int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
      	cin>>arr[i];
      }
      int res=findKRotation(arr,n);
      cout<<res<<endl;
}