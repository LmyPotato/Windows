///*
//给定两个字符串 s 和 p，找到 s 中所有 p 的 异位词 的子串，返回这些子串的起始索引。不考虑答案输出的顺序。
//
//异位词 指由相同字母重排列形成的字符串（包括相同的字符串）。
//
// 
//
//示例 1:
//
//输入: s = "cbaebabacd", p = "abc"
//输出: [0,6]
//解释:
//起始索引等于 0 的子串是 "cba", 它是 "abc" 的异位词。
//起始索引等于 6 的子串是 "bac", 它是 "abc" 的异位词。
// 示例 2:
//
//输入: s = "abab", p = "ab"
//输出: [0,1,2]
//解释:
//起始索引等于 0 的子串是 "ab", 它是 "ab" 的异位词。
//起始索引等于 1 的子串是 "ba", 它是 "ab" 的异位词。
//起始索引等于 2 的子串是 "ab", 它是 "ab" 的异位词。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/find-all-anagrams-in-a-string
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
///*
//    滑动窗口
//    1. 窗口长度小于p长度，就可以移动右边界
//    2. 窗口长度等于p长度，进行判断
//    3. 窗口长度等于p长度，左边界右移
//    4. 判断：记录字符频次，26长度的vector
//*/
//
////class Solution {
////    // 比较窗口和字符频次，频次相等，是易位词，返回true
////    bool helper(vector<int>& pvec, vector<int>& svec){
////        for(int i=0;i<26;++i){
////            if(pvec[i]!=svec[i]){
////                return false;
////            }
////        }
////        return true;
////    }
////public:
////    vector<int> findAnagrams(string s, string p) {
////        int left=0, right=0;
////        // 两个vec用来记录频次
////        vector<int> ans, svec(26, 0), pvec(26, 0);
////        for(auto &c: p){
////            ++pvec[c-'a'];  // 注意'a'-'z'映射到0-25
////        }
////
////        while(right<s.size()){
////            ++svec[s[right]-'a'];           // 记录右边界
////            if(right-left+1==p.size()){     // 尝试滑动左边界
////                if(helper(svec, pvec)){
////                    ans.push_back(left);
////                }
////                --svec[s[left]-'a'];
////                ++left;
////            }
////            ++right;                        // 移动右边界
////        }
////
////        return ans;
////
////    }
////};
//
//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p) {
//        int lenP = p.length();
//        int lenS = s.length();
//
//        if (lenS < lenP) {
//            return {};
//        }
//
//        vector<int>ans = {};
//        vector<int>s_count(26);
//        vector<int>p_count(26);
//
//        for (int i = 0; i < lenP; i++) {
//            s_count[s[i] - 'a']++;
//            p_count[p[i] - 'a']++;
//        }
//        if (s_count == p_count) {
//            ans.emplace_back(0);
//        }
//        for (int i = 0; i < lenS - lenP; i++) {
//            s_count[s[i] - 'a']--;//把上一次保存的数值清除掉，要一直维护这一个滑动窗口
//            s_count[s[i + lenP] - 'a']++;
//
//            if (s_count == p_count) {
//                ans.emplace_back(i+1);
//            }
//        }
//        return ans;
//    }
//};
//
//void printVector(vector<int>v)
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
//    Solution solution;
////    string s = "cbaebabacd";
////    string p = "abc";
//    string s = "abab";
//    string p = "ab";
//    vector<int>output = {};
//
////    string str = s.substr(0,3);
////
////    cout<<str<<endl;
//
//    output = solution.findAnagrams(s, p);
//
//    printVector(output);
//
//    return 0;
//}
//
