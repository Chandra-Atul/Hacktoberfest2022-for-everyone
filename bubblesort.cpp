/*#include<iostream>
using namespace std;
int main(){
	int arr[5] = {10,8,11,6,1};
	int n = 5;
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}*/


#include<iostream>
using namespace std;
int main(){
	int arr[5] = {10,2,0,1,34};
	int n = 5;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
