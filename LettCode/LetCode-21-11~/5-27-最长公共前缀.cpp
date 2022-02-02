///*编写一个函数来查找字符串数组中的最长公共前缀。
//
//如果不存在公共前缀，返回空字符串 ""。
//
// 示例 1：
//
//输入：strs = ["flower","flow","flight"]
//输出："fl"
//示例 2：
//
//输入：strs = ["dog","racecar","car"]
//输出：""
//解释：输入不存在公共前缀。
// 
//
//提示：
//
//1 <= strs.length <= 200
//0 <= strs[i].length <= 200
//strs[i] 仅由小写英文字母组成
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/longest-common-prefix
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs);
//};
//
////-------------------输出vector--------------------
//void printVector(vector<string>&v)
//{
//	for (vector<string>::iterator it = v.begin(); it != v.end(); it++){
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//string Solution::longestCommonPrefix(vector<string>&strs)
//{
//    int Min=999;
//    int len=0;
//    string str=strs[0];
//
//    for(int i=0;i<strs.size();i++){
//        int temp=strs[i].size();
//        Min=min(Min,temp);
//    }
//    for(int i=0;i<=Min;i++){
//        for(int j=1;j<strs.size();j++){
//            if(strs[j][len]!=str[len]){
//                return str.substr(0,len);
//            }
//        }
//        len++;
//    }
//    return str;
//}
//
////string Solution::longestCommonPrefix(vector<string>& strs)
////{
////    int len=0,i=1;
////    string s=strs[0];
////    while(len<=s.size()){
////        for(i=1;i<strs.size();i++){
////            if(s[len]!=strs[i][len])
////                return s.substr(0,len);
////        }
////        len++;
////    }
////    return s;
////}
//
//
//int main()
//{
//
//    Solution s;
//    string strData="";
//
////    vector<string>strs={"flower","flow","flight"};
////    vector<string>strs={"dog","racecar","car"};
//    vector<string>strs={"a"};
////    vector<string>strs={"ab","a"};
//
//    strData=s.longestCommonPrefix(strs);
//
//    cout<<"strData= "<<strData<<endl;
//    return 0;
//}
