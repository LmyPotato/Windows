///*
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//
//有效字符串需满足：
//
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
// 
//
//示例 1：
//
//输入：s = "()"
//输出：true
//示例 2：
//
//输入：s = "()[]{}"
//输出：true
//示例 3：
//
//输入：s = "(]"
//输出：false
//示例 4：
//
//输入：s = "([)]"
//输出：false
//示例 5：
//
//输入：s = "{[]}"
//输出：true
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/valid-parentheses
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isValid(string s) {
//        int len = s.size();
//        stack<char> st;
//
//        for (int i = 0; i < len; i++) {
//            if (s[i] == '(') {
//                st.push(')');
//            }
//            else if (s[i] == '[') {
//                st.push(']');
//            }
//            else if (s[i] == '{') {
//                st.push('}');
//            }
//// 第三种情况：遍历字符串匹配的过程中，栈已经为空了，没有匹配的字符了，说明右括号没有找到对应的左括号 return false
//// 第二种情况：遍历字符串匹配的过程中，发现栈里没有我们要匹配的字符。所以return false
//            else if (st.empty() == 1 || st.top() != s[i]) {
//                return false;
//            }
//            else {
//                st.pop();
//            }
//        }
//// 第一种情况：此时我们已经遍历完了字符串，但是栈不为空，说明有相应的左括号没有右括号来匹配，
////所以return false，否则就return true
//        return st.empty();
//    }
//};
//
//template <class T>
//void printVector(T v)
//{
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//template <class T>
//void printVectorDouble(T v)
//{
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        for (auto it1 = it->begin(); it1 != it->end(); it1++)
//        {
//            cout << *it1 <<" ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//int main()
//{
//    Solution s;
//    string data = "(";
//
//    cout << s.isValid(data)<< endl;
//
//    return 0;
//}
//
