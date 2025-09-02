#include <iostream>
#include <climits>  
using namespace std;

int MAXSUMsubarrays(int *arr, int n) {
    int maxsum = INT_MIN;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int currsum = 0;
            for (int i = start; i <= end; i++) {
                currsum += arr[i];
            }
            cout << currsum << " ";   
            maxsum = max(maxsum, currsum);  
        }
        cout << endl;
    }
    return maxsum; 
}

int main() {
    int arr[] = {2, -3, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int result = MAXSUMsubarrays(arr, n);
    cout << "MAXSUM: " << result << endl;
}
