///*
//给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中最后一个单词的长度。
//
//单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。
//
// 
//
//示例 1：
//
//输入：s = "Hello World"
//输出：5
//
//示例 2：
//输入：s = "   fly me   to   the moon  "
//输出：4
//
//示例 3：
//输入：s = "luffy is still joyboy"
//输出：6
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/length-of-last-word
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include<iostream>
//#include<string>
//
//
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLastWord(string s);
//};
//
//int Solution::lengthOfLastWord(string s)
//{
//    int temp=0;
//    int len=s.size();
//    int strlen;
//    for(int i=len-1;i>=0;i--){
////        cout<<"s[i]= "<<s[i]<<endl;
//        if(s[i]==' '){
//            temp++;
////            cout<<"input"<<endl;
//            s.erase(i,i+1);
//        }
//        else{
//            break;
//        }
//    }
//
//    strlen=s.rfind(" ");
//
////    cout<<"temp= "<<temp<<endl;
////    cout<<"s= "<<s<<endl;
////    cout<<"len= "<<len<<endl;
////    cout<<"strlen= "<<strlen<<endl;
//
//    return len-strlen-1-temp;
//}
//
//int Solution::lengthOfLastWord(string s) {
//    int ans = 0;
//    for (int i = s.size() - 1; i >= 0; i--) {
//        if (s[i] == ' ') continue;
//        while(i >= 0 && s[i] != ' ') {
//            ans++;
//            i--;
//        }
//        break;
//    }
//    return ans;
//}
//
///*
//luffy is still joyboy
//Hello World
//fly me   to   the moon
//*/
//int main()
//{
//    int ret=-1;
//    Solution s;
//    string str="Hello World";
////    string str="luffy is still joyboy";
////    string str="   fly me   to   the moon  ";
//
////    cin>>str;
//
//    ret=s.lengthOfLastWord(str);
//
//    cout<<"ret= "<<ret<<endl;
//
//
//    return 0;
//}

