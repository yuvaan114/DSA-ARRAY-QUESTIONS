#include <iostream>
using namespace std;
int trappingwater(int *arr , int n){
    int leftmax[10000];
    int rightmax[10000];
    leftmax[0] = arr[0];
    rightmax[n-1] = arr[n-1];

    for(int i = 1 ; i < n;i++){
        leftmax[i] = max(leftmax[i-1],arr[i-1]);
    }
    for(int i = n-2 ; i>=0;i--){
        rightmax[i] = max(rightmax[i+1],arr[i+1]);
    }
    int totaltrapped=0;
    for(int i = 0; i<n;i++){
        int currtrapped = min(leftmax[i],rightmax[i])-arr[i];
       if(currtrapped > 0){
         totaltrapped += currtrapped;
       }
    }
    return totaltrapped;
}
int main(){
    int heights[] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
    int result = trappingwater(heights,n);
    cout<<"Trapped water: " << result<<endl;

}