//bruteforce approach 
//returning multiple values using structure

#include<bits/stdc++.h>
using namespace std;
struct maxmin{
	int max;
	int min;
};
maxmin find_max_min(int arr[],int size){
	 maxmin p;

	 //if array has only one element
	if(size==1){
         p.min=arr[0];
         p.max=arr[0];
         return p;
	}
	else {
		if(arr[0]>arr[1]){
			p.max=arr[0];         //initialise max ,min, value with starting two values of array
			p.min=arr[1];
		}
		else{
			p.max=arr[1];
			p.min=arr[0];
		}
		for(int i=2;i<size;i++){
			if(arr[i]>p.max){
				p.max=arr[i];
			}
			if(arr[i]<p.min){
				p.min=arr[i];
			}
		}
		return p;
	}

}
int main(){
     maxmin p1;
    int n;
    cout<<"Enter Size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter Array element :";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    p1=find_max_min(arr,n);
    cout<<"Maximum element is : "<<p1.max<<endl;
    cout<<"Minimum element is : "<<p1.min<<endl;
}