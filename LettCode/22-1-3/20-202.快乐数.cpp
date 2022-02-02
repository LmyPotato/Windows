///*
//编写一个算法来判断一个数 n 是不是快乐数。
//
//「快乐数」定义为：
//
//对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
//然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
//如果 可以变为  1，那么这个数就是快乐数。
//如果 n 是快乐数就返回 true ；不是，则返回 false 。
//
// 
//
//示例 1：
//
//输入：n = 19
//输出：true
//解释：
//12 + 92 = 82
//82 + 22 = 68
//62 + 82 = 100
//12 + 02 + 02 = 1
//示例 2：
//
//输入：n = 2
//输出：false
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/happy-number
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    int getSum(int num) {
//        int sum = 0;
//        while (num != 0) {
//            sum = sum + (num % 10)*(num % 10);
//            num = num / 10;
//        }
//        return sum;
//    }
//    bool isHappy(int n) {
//        int tmp = 0;
//        unordered_set<int>result = {};
//
//        while (1) {
//            tmp = getSum(n);
//
//            if (tmp == 1) {
//                return true;
//            } else if (result.find(tmp) != result.end()) {
//                return false;
//            } else {
//                result.insert(tmp);
//            }
//            n = tmp;
//        }
//    return false;
//    }
//};
//
//template<class T>
//void printVector(T v)
//{
//    for (auto it=v.begin();it != v.end();it++) {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//
//int main()
//{
//    int taget = 19;
//    Solution s;
//    cout<<s.isHappy(taget)<<endl;
//
//
//    return 0;
//}
