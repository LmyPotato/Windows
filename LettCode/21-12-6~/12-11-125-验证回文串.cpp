///*
//给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
//
//说明：本题中，我们将空字符串定义为有效的回文串。
//
// 
//
//示例 1:
//
//输入: "A man, a plan, a canal: Panama"
//输出: true
//解释："amanaplanacanalpanama" 是回文串
//示例 2:
//
//输入: "race a car"
//输出: false
//解释："raceacar" 不是回文串
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/valid-palindrome
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
////class Solution {
////public:
////    bool isPalindrome(string s) {
////        string temp;
////        string str;
////        for(int i=0;i<s.size();i++){
////            if(s[i]>='a'&&s[i]<='z'){
////            }
////            else if(s[i]>='A'&&s[i]<='Z'){
////                s[i]=s[i]+32;
////            }
////            else if(s[i]>='0'&&s[i]<='9'){
////
////            }
////            else{
////                continue;
////            }
////            str+=s[i];
////        }
////        temp=str;
//////        cout<<str<<endl;
////        reverse(str.begin(),str.end());
////        return temp==str;
////    }
////};
///*
//isalpha()用来判断一个字符是否为字母，如果是字符则返回非零，否则返回零。
//isalnum()用来判断一个字符是否为数字或者字母，也就是说判断一个字符是否属于a~z||A~Z||0~9。
//
//rbegin
//方法：rbegin();
//解释：rbegin()返回一个逆向迭代器，指向字符串的最后一个字符。
//
//rend
//方法：rend();
//解释：rend()函数返回一个逆向迭代器，指向字符串的开头（第一个字符的前一个位置）。
//*/
//class Solution {
//public:
//    bool isPalindrome(string s) {
//        string sgood;
//        for (char ch: s) {
//            if (isalnum(ch)) {
//                sgood += tolower(ch);
//            }
//        }
//        string sgood_rev(sgood.rbegin(), sgood.rend());//让sood反转
//        return sgood == sgood_rev;
//    }
//};
//
////class Solution {
////public:
////    bool isPalindrome(string s) {
////        string sgood;
////        for (char ch: s) {
////            if (isalnum(ch)) {
////                sgood += tolower(ch);
////            }
////        }
////        int n = sgood.size();
////        int left = 0, right = n - 1;
////        while (left < right) {
////           if (sgood[left] != sgood[right]) {
////                return false;
////            }
////            ++left;
////            --right;
////        }
////        return true;
////    }
////};
//
//
//int main()
//{
////    string str="A man, a plan, a canal: Panama";
////    string str="race a car";
//    string str="121";
//    Solution s;
//
//    cout<<s.isPalindrome(str)<<endl;;
//
//    return 0;
//}
//
//
