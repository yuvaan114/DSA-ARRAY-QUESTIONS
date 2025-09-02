#include <iostream>
#include <climits>  
using namespace std;

int MAXSUMsubarrays(int *arr, int n) {
    int maxsum = INT_MIN;
    int currsum = 0;
    for(int i = 0; i<n; i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum < 0){
            currsum = 0;
        }

    } 
        cout << "MAXSUM: " << maxsum << endl;
}

int main() {
    int arr[] = {2, -3, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int result = MAXSUMsubarrays(arr, n);
}