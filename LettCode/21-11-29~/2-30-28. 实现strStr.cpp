///*
//实现 strStr() 函数。
//
//给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串出现的第一个位置（下标从 0 开始）。如果不存在，则返回  -1 。
//
// 
//说明：
//
//当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。
//
//对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与 C 语言的 strstr() 以及 Java 的 indexOf() 定义相符。
//
// 
//示例 1：
//
//输入：haystack = "hello", needle = "ll"
//输出：2
//示例 2：
//
//输入：haystack = "aaaaa", needle = "bba"
//输出：-1
//示例 3：
//
//输入：haystack = "", needle = ""
//输出：0
// 
//
//提示：
//
//0 <= haystack.length, needle.length <= 5 * 104
//haystack 和 needle 仅由小写英文字符组成
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/implement-strstr
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
////class Solution {
////public:
////    int strStr(string haystack, string needle) {
////        int i=0,j=0;
////        if(haystack.length()==0&&needle.length()==0){
////            return 0;
////        }
////        while(i<haystack.length()&&j<needle.length()){
////            if(haystack[i]==needle[j]){
////                i++;
////                j++;
////            }
////            else{
////                i=i-j+1;
////                j=0;
////            }
////        }
////        if(j>=needle.length()){
////            return i-needle.length();
////        }
////        else{
////            return -1;
////        }
////    }
////};
////简单粗暴
///*
//1.查找成功返回所在位置pos
//2.查找失败返回-1
//3.【如果有字符串为空，返回0】
//*/
//
//class Solution {
//public:
//    int strStr(string haystack, string needle) {
//        return haystack.find(needle);
//    }
//};
//
//int main()
//{
//    int ret=-2;
//    Solution s;
//
////    string S="hello";
////    string T="ll";
//
////    string S=" ";
////    string T=" ";
//
//    string S="aaaaa";
//    string T="bba";
//
////    string S="a";
////    string T="";
//
//    ret=s.strStr(S,T);
//
//    cout<<"ret= "<<ret<<endl;
//
//    return 0;
//}
