#include<iostream>
#include<algorithm>
using namespace std;
void show(int n[],int size){
	   for(int i=0;i<size;i++){
	   	cout<<n[i]<<" ";
	   }
}


int bina(int a[] , int b, int e,int v){
	int mid;
	if(e>=b){
		mid=b+(e-b)/2;
		
		if(a[mid]==v){
			return mid+1;
		}else if(a[mid]<v){
			return bina(a,mid+1,e,v);
		}else{
			return bina(a,b,mid-1,v);
		}
	}
	
	return -1;
}


int main(){
//	int n[]={1,22,3,4,23,6,8,98};
	int n[]={1,3,5,6};
	//size finding 
	int size=sizeof(n)/sizeof(n[0]);
	
	cout<<"size of an array"<<size<<endl;
	
	cout<<"previous unsorted array"<<endl;
	show(n,size);
	cout<<"\n"<<endl;
	sort(n,n+size);
	cout<<"sorted array"<<endl;
	show(n,size);
	
	//values to be search
	
	int v=5;
	
	int res=bina(n,0,size-1,v);
	printf("\n");
	if(res==-1){
		printf("index is not found....\n");
	}else{
		cout<<"find index value is"<<res<<endl;
	}
	
	
	return 0;
	
}


