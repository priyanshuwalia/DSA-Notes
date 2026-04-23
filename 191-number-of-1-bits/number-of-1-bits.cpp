class Solution {
    
public:
// brian kernighan's algorithm
    int countSetBits(int n){
        int count =0;
        while(n){
            n= n&(n-1);
            count++;
        }
        return count;
    }
    int hammingWeight(int n) { 
        return countSetBits(n);
    }
};