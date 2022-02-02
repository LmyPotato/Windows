///*
//1002. 查找共用字符
//给你一个字符串数组 words ，请你找出所有在 words 的每个字符串中都出现的共用字符（ 包括重复字符），并以数组形式返回。你可以按 任意顺序 返回答案。
//
//
//示例 1：
//
//输入：words = ["bella","label","roller"]
//输出：["e","l","l"]
//示例 2：
//
//输入：words = ["cool","lock","cook"]
//输出：["c","o"]
//*/
//#include <iostream>
//#include <vector>
//#include <cstring>
//
//
//using namespace std;
//
//class Solution {
//public:
//    vector<string> commonChars(vector<string>& words) {
//        int hash_[26] = {0};
//        vector<string>result;
//
//        for (int i = 0; i < words[0].size(); i++) {
//            hash_[words[0][i] - 'a']++;
//        }
//
//        int hash_other[26] = {0};
//        for (int i = 1; i < words.size(); i++) {
//            memset(hash_other, 0, 26 * sizeof(int));
//            for (int j = 0; j < words[i].size(); j++) {
//                hash_other[words[i][j] - 'a']++;
//            }
//
//            for (int k = 0; k < 26; k++) {
//                hash_[k] = min(hash_[k], hash_other[k]);
//            }
//        }
//
//        for (int k = 0; k < 26; k++) {
//            while (hash_[k] != 0) {
//                string s(1, k + 'a'); // char -> string
//                result.push_back(s);
//                hash_[k]--;
//            }
//        }
//        return result;
//    }
//};
//template<class T>
//void printVector(vector<T>v)
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
//    vector<string>v_string = {"bella","label","roller"};
//    Solution s;
//    vector<string>output = {""};
//
//    output = s.commonChars(v_string);
//    printVector(output);
//
//    return 0;
//}
//
