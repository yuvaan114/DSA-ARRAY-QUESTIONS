#include <iostream>
#include <climits>  
using namespace std;
void buysell(int *arr, int n){
    int bestbuy[100000];
    bestbuy[0] = INT_MAX;
    for(int i = 1; i < n; i++){
        bestbuy[i] = min(bestbuy[i-1], arr[i-1]);
    }
    int maxprofit = 0;
    for(int i = 0; i < n; i++){
        int currprofit = arr[i] - bestbuy[i];
         maxprofit = max(currprofit, maxprofit);
        
    }
    cout<< "MAXPROFIT: " << maxprofit;


}

int main() {
    int prices[] = {7, 1, 5, 6, 2};
    int n = sizeof(prices) / sizeof(int);
    buysell(prices,n);
   
}
