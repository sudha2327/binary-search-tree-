#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	  long l=0, h=n-1;
        long m;
        while(l<=h)
        {
            m=(l+h)/2;
            
            if(isBadVersion(m))
                h=m-1;
            else l=m+1;
        }
        return l;   
}



// java code


/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
          int s=0,end=n,mid,bd=-1;
         
        while(s<=end){
             mid=end+s/2;
            if(isBadVersion(mid)){
                bd=mid;
                end=mid-1;
                
            }else{
                s=mid+1;
            }
        }
        
        return bd;
    
    }
}
