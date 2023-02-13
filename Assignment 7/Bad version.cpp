// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long long int start=1,end=n;
       long int pos=1;
        while(start<=end){
        int mid=(start+end)/2;
        bool x = isBadVersion(mid);
        if(x==true){
         pos=mid;
         end=mid-1;
        }
        else{
            start=mid+1;
        }
        }
        return pos;
    }
   
};
