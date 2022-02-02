///*
//给你一个字符串数组，请你将 字母异位词 组合在一起。可以按任意顺序返回结果列表。
//
//字母异位词 是由重新排列源单词的字母得到的一个新单词，所有源单词中的字母通常恰好只用一次。
//
// 
//示例 1:
//输入: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
//输出: [["bat"],["nat","tan"],["ate","eat","tea"]]
//
//示例 2:
//输入: strs = [""]
//输出: [[""]]
//
//示例 3:
//输入: strs = ["a"]
//输出: [["a"]]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/group-anagrams
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
//void printVector(vector<vector<string>>v)
//{
//    for (auto it1 = v.begin(); it1 != v.end(); it1++) {
//        for (auto it2 = (*it1).begin(); it2 != (*it1).end(); it2++) {
//            cout<<*it2<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//}
//
////class Solution {
////public:
////    vector<vector<string>> groupAnagrams(vector<string>& strs) {
////        unordered_map<string, vector<string>> mp;
////        for (string& str: strs) {
////            string key = str;
////            sort(key.begin(), key.end());
////            mp[key].emplace_back(str);
////        }
////        vector<vector<string>> ans;
////        for (auto it = mp.begin(); it != mp.end(); ++it) {
////            ans.emplace_back(it->second);
////        }
////        return ans;
////    }
////};
//
//
//
//
//
//
//
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        unordered_map<string,vector<string>> mp;
//        vector<vector<string>>ans;
//
//        for (string str:strs) {
//            string tmp = str;
//            sort(tmp.begin(), tmp.end());
//            mp[tmp].emplace_back(str);
//        }
//
//        for (unordered_map<string,vector<string>>::iterator it = mp.begin(); it != mp.end(); it++) {
//            ans.emplace_back(it->second);
//        }
//        return ans;
//    }
//};
//
//
//int main()
//{
//    Solution s;
//    vector<vector<string>>output = {{""}};
//    vector<string>input_data = {"eat", "tea", "tan", "ate", "nat", "bat"};
//
//    output = s.groupAnagrams(input_data);
//
//    printVector(output);
//
//    return 0;
//}
//
