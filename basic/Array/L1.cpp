/**
 * Author : Min Chen
 * date : 2020/11/20 
 */

#include <iostream>
#include <vector>
using namespace std;
/**
 * 利用最大化收益的原则，比较前后两天的大小，如果后面比前面大，则可以直接累加收益
 * @param prices
 * @return 投资的收获
 */
int maxProfit(vector<int>& prices) {
    int res=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]>prices[i-1]){
            res+=prices[i]-prices[i-1];
        }
    }
    return res;
}

int main() {
    vector<int> prices{7,1,5,3,6,4};
    cout<<maxProfit(prices)<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
