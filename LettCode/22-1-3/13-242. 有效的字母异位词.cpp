///*
//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
//
//注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。
//
// 
//
//示例 1:
//
//输入: s = "anagram", t = "nagaram"
//输出: true
//示例 2:
//
//输入: s = "rat", t = "car"
//输出: false
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/valid-anagram
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
//    bool isAnagram(string s, string t) {
//        int record[26] = {0};
//        int lenS = s.length();
//        int lenT = t.length();
//
//        for (int i = 0; i < lenS; i++) {
//            record[s[i] - 'a']++;
//        }
//
//        for (int i = 0;i < lenT; i++) {
//            record[t[i] - 'a']--;
//        }
//
//        for (int j = 0; j < 26; j++) {
//            if (record[j] != 0) {
//                return false;
//            }
//        }
//        return true;
//    }
//};
//
//int main()
//{
//    Solution s;
//    string S = "nagaram";
//    string T = "anagram";
//
//    cout<<s.isAnagram(S,T)<<endl;;
//
//
//    return 0;
//}
//
