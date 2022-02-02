///*给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
//
//回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。
//
//示例 1：
//输入：x = 121
//输出：true
//
//示例 2：
//输入：x = -121
//输出：false
//解释：从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
//
//示例 3：
//输入：x = 10
//输出：false
//解释：从右向左读, 为 01 。因此它不是一个回文数。
//
//示例 4：
//输入：x = -101
//输出：false
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/palindrome-number
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(int x);
//};
////第一种方法
//
////bool Solution::isPalindrome(int x)
////{
////    int ret=0;
////    int temp=x;
////    if(x<0){
////        return false;
////    }
////    else{
////        while(x!=0){
////            if (ret >214748364|| ret < -214748364)
////            {
////                return false;
////            }
////            ret=ret*10+x%10;
////            x=x/10;
////        }
////        if(temp==ret){
////            return true;
////        }
////    }
////    return false;
////}
//
////第二种方法
//bool Solution::isPalindrome(int x)
//{
//
//    string temp;
//    temp = to_string(x);//c++11版本库才会有#include<string>
//    string str = temp;
//    reverse(str.begin(), str.end());//包括头文件#include<algorithm>
//    return str == temp;
//}
//
//int main()
//{
//    int data;
//    int ret=-1;
//    Solution s;
//    cin>>data;
//
//
//    ret=s.isPalindrome(data);
//
//    cout<<"ret="<<ret<<endl;
//
//    return 0;
//}
