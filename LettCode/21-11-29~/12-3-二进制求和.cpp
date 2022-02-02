///*
//给你两个二进制字符串，返回它们的和（用二进制表示）。
//
//输入为 非空 字符串且只包含数字 1 和 0。
//
//示例 1:
//输入: a = "11", b = "1"
//输出: "100"
//
//示例 2:
//输入: a = "1010", b = "1011"
//输出: "10101"
//
//提示：
//
//每个字符串仅由字符 '0' 或 '1' 组成。
//1 <= a.length, b.length <= 10^4
//字符串如果不是 "0" ，就都不含前导零。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/add-binary
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
//    string addBinary(string a, string b);
//};
//
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//string Solution::addBinary(string a,string b)
//{
//    string str="";
//    int al = a.size();
//    int bl = b.size();
//    while(al < bl) //让两个字符串等长，若不等长，在短的字符串前补零，否则之后的操作会超出索引
//    {
//        a = '0' + a;
//        ++ al;
//    }
//    while(al > bl)
//    {
//        b = '0' + b;
//        ++ bl;
//    }
//    int ret=-1;
//    int i=a.length()-1;
//    int j=b.length()-1;
//    int k=0;
//
//    while(i>0&&j>0){
//
//        ret=(int)(a[i]-'0')+(int)(b[j]-'0');
//        if(ret<=1){
//            str+=to_string(ret);
//        }
//        else{
//            ret=ret/3;
//            str+=to_string(ret);
//            a[i-1]=char((int)a[i-1]+1);
//        }
//        i--;
//        j--;
//        k++;
//    }
//    ret=(int)(a[0]-'0')+(int)(b[0]-'0');
//    if(ret<=1){
//        str+=to_string(ret);
//    }
//    else{
//        ret=ret/3;
//        str+=to_string(ret);
//        str+=to_string(1);
//    }
//    reverse(str.begin(),str.end());
//
//    return str;
//}
////class Solution {
////public:
////    string addBinary(string a, string b) {
////        int al = a.size();
////        int bl = b.size();
////        while(al < bl) //让两个字符串等长，若不等长，在短的字符串前补零，否则之后的操作会超出索引
////        {
////            a = '0' + a;
////            ++ al;
////        }
////        while(al > bl)
////        {
////            b = '0' + b;
////            ++ bl;
////        }
////        for(int j = a.size() - 1; j > 0; -- j) //从后到前遍历所有的位数，同位相加
////        {
////            a[j] = a[j] - '0' + b[j];
////            if(a[j] >=  '2') //若大于等于字符‘2’，需要进一
////            {
////                a[j] = (a[j] - '0') % 2 + '0';
////                a[j-1] = a[j-1] + 1;
////            }
////        }
////        a[0] = a[0] - '0' + b[0]; //将ab的第0位相加
////        if(a[0] >= '2') //若大于等于2，需要进一
////        {
////            a[0] = (a[0] - '0') % 2 + '0';
////            a = '1' + a;
////        }
////        return a;
////    }
////};
//
//int main()
//{
//    string temp;
//
//    Solution s;
////    string a="1010";
////    string b="1011";
//
//    string a="11";
//    string b="1";
//
//    temp=s.addBinary(a,b);
//
//    cout<<"temp="<<temp<<endl;
//
//
//    return 0;
//}
//
