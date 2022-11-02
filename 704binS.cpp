#include<iostream>
#include<algorithm>
using namespace std;

int search(int a[],int s,int v){
	 int mid=s/2;
	 if(a[mid]==v){
	 	return mid+1;
	 }else if(a[mid]<v){
	 	return search(a,mid+1,v);
	 }else{
	 	return search(a,mid-1,v);
	 }
	 return -1;
}

int main(){
	int n;
	cin>>n;
	cout<<"enter the array element\n"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//sorting
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	int tar;
	cout<<"give target value"<<endl;
	cin>>tar;
	int res=search(arr,n,tar);
	cout<<"index value is:"<<res<<endl;
		if(res==-1){
		printf("index is not found....\n");
	}else{
		cout<<"find index value is"<<res<<endl;
	}
	
	
}
