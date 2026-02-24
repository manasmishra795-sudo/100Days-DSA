#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>

int Profit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;  //empty array check

    int minPrice = prices[0]; //start with first element
    int maxProfit = 0;

    for (int i=1;i<pricesSize;i++) {
        if (prices[i]<minPrice) {
            minPrice=prices[i];  //updating minimum price
        }
        int profit=prices[i]-minPrice;
        if (profit>maxProfit) {
            maxProfit=profit;    //updating max profit
        }
    }

    return maxProfit;
}
