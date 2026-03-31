class Solution {
public:
int countBit(int n){
    int res = 0;
    while (n>0) {
        res += n%2;
        n = n>>1;
    }
    return res;
}
public: 
void swap(vector<int>& arr, int i, int j) {
 
   int temp= arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
}
public:
    vector<int> sortByBits(vector<int>& arr) {
      for(int i=0 ; i<arr.size(); i++) {
        for(int j=i+1; j<arr.size(); j++){
            if(countBit(arr[i])>countBit(arr[j])){
                swap(arr, j, i );
            }
            else if(countBit(arr[i])==countBit(arr[j])){
             if(arr[i]>arr[j]){
                swap(arr, j, i);
             }
            }
        }
      } 
      return arr;
    }
    
};