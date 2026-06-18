#include <stdio.h>
#include <math.h>
int max_profit(int* prices, int priceSize){
    int min_price= __INT_MAX__;
    int max_profit=0;
    for(int i=0; i<priceSize;  i++){
        if(prices[i]<min_price){
            min_price=prices[i];
        }
        if(prices[i]-min_price>max_profit){
            max_profit= prices[i]-min_price;
        }
    }
    return max_profit;
}