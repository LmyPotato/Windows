///*
//编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。
//
//不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。
//
// 
//
//示例 1：
//
//输入：s = ["h","e","l","l","o"]
//输出：["o","l","l","e","h"]
//示例 2：
//
//输入：s = ["H","a","n","n","a","h"]
//输出：["h","a","n","n","a","H"]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/reverse-string
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//template <class T>
//void mySwap(T &a, T &b)
//{
//    T tmp;
//    tmp = a;
//    a = b;
//    b = tmp;
//}
//
////class Solution {
////public:
////    void reverseString(vector<char>& s) {
////        int len = s.size();
////        int left = 0, right = len - 1;
////
////        while (left <= right) {
////            swap(s[left], s[right]);
////            left++;
////            right--;
////        }
////    }
////};
//
//class Solution {
//public:
//    void reverseString(vector<char>& s) {
//        reverse(s.begin(), s.end());
//    }
//};
//
//void reverseString(vector<char>& s) {
//    for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
//        swap(s[i],s[j]);
//    }
//}
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
//    vector<char> data = {'h', 'e', 'l', 'l', 'o'};
//
//    s.reverseString(data);
//    printVector(data);
//
//    return 0;
//}
//
