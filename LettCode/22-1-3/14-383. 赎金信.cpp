///*
//给你两个字符串：ransomNote 和 magazine ，判断 ransomNote 能不能由 magazine 里面的字符构成。
//
//如果可以，返回 true ；否则返回 false 。
//
//magazine 中的每个字符只能在 ransomNote 中使用一次。
//
// 
//
//示例 1：
//
//输入：ransomNote = "a", magazine = "b"
//输出：false
//示例 2：
//
//输入：ransomNote = "aa", magazine = "ab"
//输出：false
//示例 3：
//
//输入：ransomNote = "aa", magazine = "aab"
//输出：true
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/ransom-note
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    bool canConstruct(string ransomNote, string magazine) {
//        int lenA = ransomNote.length();
//        int lenB = magazine.length();
//        int record[26] = {0};
//
//        for (int i = 0 ; i < lenB; i++) {
//            record[magazine[i] - 'a']++;
//        }
//
//        for (int i = 0; i < lenA; i++) {
//            record[ransomNote[i] - 'a']--;
//        }
//
//        for (int i = 0; i < 26; i++) {
//            if (record[i] <= -1) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main()
//{
//    Solution s;
//    string S = "ba";
//    string T = "aab";
//
//    cout<<s.canConstruct(S,T)<<endl;
//
//
//    return 0;
//}
//
