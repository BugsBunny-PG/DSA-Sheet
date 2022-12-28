#include<bits/stdc++.h>
using namespace std;

//Kadanes Algorithm 

int MaxSumSubarray(int arr[],int n){
	int max_sum=arr[0];
	int current_sum=0;
	for(int i=0;i<n;i++){
          current_sum+=arr[i];
          max_sum=max(max_sum,current_sum);
          if(current_sum<0)
          	  current_sum=0;
	}
	return max_sum;
}//TC-->O(n)
/*
//Prefix Sum Approach
int MaxSumSubarray(int arr[],int n){
	int maxsum=INT_MIN;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			maxsum=max(sum,maxsum);
		}
	}
	return maxsum;
} //TC(n^2)
*/
  

/*   TC(n^3)
//Bruteforce

int MaxSumSubarray(int arr[],int n){
	int maxno=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
                 sum+=arr[k];
			}
			maxno=max(sum,maxno);
		}
	}
	return maxno;
}// TC(n^3)  */
int main(){
	int n,flag=0;
	cout<<"Enter size of array :";
	cin>>n;
	int arr[n];
	cout<<"Enter array element :";
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int res;
	 res=MaxSumSubarray(arr,n);
	 cout<<res<<endl;
   
	
}