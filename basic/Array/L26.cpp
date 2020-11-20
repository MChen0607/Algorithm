/**
 * Author : Min Chen
 * date : 2020/11/20 
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * 利用双指针的方法来进行一次遍历，快指针遍历所有，慢指针指向非重复数字的位置。
 * 如果找到不同，慢指针加一后进行存储
 * @param nums
 * @return 不重复数字的长度
 */
int removeDuplicates(vector<int>& nums) {
    if(nums.empty()){
        return 0;
    }
    int len=nums.size();
    int index=0;
    for(int i=1;i<len;i++){
        if(nums[i]!=nums[index]){
            index++;
            nums[index]=nums[i];
        }
    }
    return index+1;
}


int main() {
    vector<int> data{0,0,1,1,1,2,2,3,3,4};
    int len=removeDuplicates(data);
    for(int i=0;i<len;i++){
        cout<<data[i]<<endl;
    }
    return 0;
}
