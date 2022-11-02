#include<iostream>
#include<algorithm>
using namespace std;
void show(int n[],int size){
	   for(int i=0;i<size;i++){
	   	cout<<n[i]<<" ";
	   }
}

int bina(int a[] , int b, int e,int v){
	int mid,n=1;
	if(e>=b){
		mid=(b+e)/2;
		
		if(a[mid]==v){
			return mid;
		}else if(a[mid]<v){	
			return bina(a,mid+1,e,v);
		}else{
			return bina(a,b,mid-1,v);
		}
	
	}

	for(int i=0;i<e;i++){
		if(a[i]!=v){
			if(v>=a[i]){
				
				 //cout<<"value should be insert at =>"<<i+1<<endl;
				n+=1;
				
        	}
	    }
	}
	return n;
		
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
	  cout<<"not found..."<<endl;
		
	}else{
		cout<<"find index value is"<<res<<endl;
	}
	
	
	return 0;
	
}



// another one logic for o(log n)


int mid;
    int low = 0;
    int high = numsSize-1;
    
    while( low <= high) {
        
        mid = (low + high) / 2;
        
        if(nums[mid] == target)
            return mid;
        
        if( target > nums[mid]) 
            low = mid+1;
        else
            high = mid-1;
        
    }
    if(low > (numsSize-1))
        return mid+1;
    else {
        if(target > nums[mid])
                return mid+1;
        else 
                return mid;
 
    }

