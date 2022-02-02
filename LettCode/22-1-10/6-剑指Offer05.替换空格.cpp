///*
//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
//
// 
//
//示例 1：
//
//输入：s = "We are happy."
//输出："We%20are%20happy."
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string replaceSpace(string s) {
//        int count = 0;
//        int old_size = s.size();
//
//        for (int i = 0; i < old_size; i++)
//        {
//            if (s[i] == ' ')
//            {
//                count++;
//            }
//        }
//        s.resize(old_size + 2 * count);
//        int new_size = s.size();
//
//        for (int i = new_size - 1, j = old_size - 1; j < i; i--, j--)
//        {
//            if (s[j] == ' ')
//            {
//                s[i] = '0';
//                s[i - 1] = '2';
//                s[i - 2] = '%';
//
//                i = i - 2;
//            }
//            else
//            {
//                s[i] = s[j];
//            }
//        }
//
//        return s;
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
//    string data = "We are happy.";
//    string output = "";
//
//    output = s.replaceSpace(data);
//    cout<<output<<endl;
//
//    return 0;
//}
