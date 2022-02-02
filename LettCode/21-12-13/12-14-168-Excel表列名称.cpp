///*
//给你一个整数 columnNumber ，返回它在 Excel 表中相对应的列名称。
//
//例如：
//
//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28
//...
// 
//
//示例 1：
//
//输入：columnNumber = 1
//输出："A"
//示例 2：
//
//输入：columnNumber = 28
//输出："AB"
//示例 3：
//
//输入：columnNumber = 701
//输出："ZY"
//示例 4：
//
//输入：columnNumber = 2147483647
//输出："FXSHRXW"
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/excel-sheet-column-title
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
////    string convertToTitle(int columnNumber) {
////        string ans;
////        while (columnNumber > 0) {
////            int a0 = (columnNumber - 1) % 26 + 1;
////            ans += a0 - 1 + 'A';
////            columnNumber = (columnNumber - a0) / 26;
////        }
////        reverse(ans.begin(), ans.end());
////        return ans;
////    }
//    string convertToTitle(int columnNumber)
//    {
//        string row;
//        while (columnNumber)
//        {
//            int remainder = columnNumber % 26;
//            if(remainder==0)//如果余数是0，就像上一位借个1（26）出来，让余数强行等于26
//            {
//                remainder = 26;
//                columnNumber -= 26;
//            }
//            row.push_back(remainder+ 64);
//            columnNumber /= 26;
//        }
//        reverse(row.begin(), row.end());
//        return row;
//    }
//};
//
//
//
//
//int main()
//{
//    Solution s;
//
//    cout<<s.convertToTitle(701)<<endl;
//
//
//    return 0;
//}
//
