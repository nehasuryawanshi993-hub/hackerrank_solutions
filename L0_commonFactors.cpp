class Solution {
public:
    int commonFactors(int a, int b) {
        int k=0;
        if(a>b){
            k=b;
        }
        else{
            k=a;
        }
        
        int count=0;
        for(int i=1;i<=k;i++){
            if(a%i==0 && b%i==0){
              count++;
            }
        }
        
    return count;
    } 
};
