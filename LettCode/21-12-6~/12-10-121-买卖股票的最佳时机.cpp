///*
//121. 买卖股票的最佳时机
//给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
//
//你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。
//
//返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。
//
//
//
//示例 1：
//
//输入：[7,1,5,3,6,4]
//输出：5
//解释：在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
//     注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格；同时，你不能在买入前卖出股票。
//示例 2：
//
//输入：prices = [7,6,4,3,1]
//输出：0
//解释：在这种情况下, 没有交易完成, 所以最大利润为 0。
//
//
//提示：
//
//1 <= prices.length <= 105
//0 <= prices[i] <= 104
//*/
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void printVector(vector<int>v){
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
////class Solution {
////public:
//////    int maxProfit(vector<int>& prices) {
//////        int minvalue=0;
//////        for(int i=0;i<prices.size()-1;i++){
//////            for(int j=i+1;j<prices.size()-1;j++){
//////                    minvalue=max(minvalue,prices[j]-prices[i]);
//////
//////            }
//////        }
//////        cout<<minvalue<<endl;
//////        return minvalue;
//////    }
////
////    int maxProfit(vector<int>& prices) {
////        int minP=INT_MAX;
////        int maxP=0;
////
////        for(int i=0;i<prices.size();i++){
////            int temp=prices[i]-minP;
////
////            maxP=max(maxP,temp);
////            minP=min(minP,prices[i]);
////        }
////        cout<<maxP<<endl;
////        return maxP;
////    }
////};
//
////class Solution {
////public:
////    int maxProfit(vector<int>& prices) {
////        int minprice = INT_MAX, maxprofit = 0;
////        for (int price: prices) {
////            maxprofit = max(maxprofit, price - minprice);
////            minprice = min(price, minprice);
////        }
////        cout<<maxprofit<<endl;
////        return maxprofit;
////    }
////};
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int ans = 0;
//        vector<int> St;
//        prices.emplace_back(-1); //哨兵👨‍✈️
//        for (int i = 0; i < prices.size(); ++ i){
//            while (!St.empty() && St.back() > prices[i]){ //维护单调栈📈
//                ans = std::max(ans, St.back() - St.front()); //维护最大值
//                St.pop_back();
//            }
//            St.emplace_back(prices[i]);
//        }
//
//        return ans;
//    }
//};
//
//
//int main()
//{
//    Solution s;
//    vector<int>nums={7,1,5,3,6,4};
////    vector<int>nums={7,6,4,3,1};
//
//    cout<<s.maxProfit(nums)<<endl;
//
//
//
//    return 0;
//}
//
//
