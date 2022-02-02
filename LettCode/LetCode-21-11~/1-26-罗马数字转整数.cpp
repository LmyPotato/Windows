///*罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
//
//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
//
//通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
//
//I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
//X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
//C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
//给定一个罗马数字，将其转换成整数。
//
// 
//
//示例 1:
//
//输入: s = "III"
//输出: 3
//示例 2:
//
//输入: s = "IV"
//输出: 4
//示例 3:
//
//输入: s = "IX"
//输出: 9
//示例 4:
//
//输入: s = "LVIII"
//输出: 58
//解释: L = 50, V= 5, III = 3.
//示例 5:
//
//输入: s = "MCMXCIV"
//输出: 1994
//解释: M = 1000, CM = 900, XC = 90, IV = 4.
// 
//
//提示：
//
//1 <= s.length <= 15
//s 仅含字符 ('I', 'V', 'X', 'L', 'C', 'D', 'M')
//题目数据保证 s 是一个有效的罗马数字，且表示整数在范围 [1, 3999] 内
//题目所给测试用例皆符合罗马数字书写规则，不会出现跨位等情况。
//IL 和 IM 这样的例子并不符合题目要求，49 应该写作 XLIX，999 应该写作 CMXCIX 。
//关于罗马数字的详尽书写规则，可以参考 罗马数字 - Mathematics 。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/roman-to-integer
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int romanToInt(string s);
//};
////-------------------输出vector------------------
//void printVector(vector<string>&v)
//{
//	for (vector<string>::iterator it = v.begin(); it != v.end(); it++){
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////-------------------输出map--------------------
//void printMap(map<string, int>&m)
//{
//	for (auto it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key= " << it->first << "\tvalue= " << it->second << endl;
//	}
//	cout << endl;
//}
////别人的解题思路
///*
//这个题目本来是很简单的，但是如果先做了前面一道题“12. 整数转罗马数字” 则很容易思路受限，看不到转换的技巧。
//　　（1）仔细观察罗马数字的组合规律，可以发现除了4/9、40/90、400/900之外都是累加的逻辑，
//        从左往右，无论数字是相等还是递减，都是直接累加所代表的值就好了，不需要考虑所谓的“位权”。
//
//　　（2）再来看上面的三组特殊情况，实际上都是一个规律，左边的数字比右边更小。
//        比如IV（4）、IX（9）等等，那么在这种情况下，直接减去该数字就好了，也不需要考虑所谓的“位权”。
//
//　　（3）整趟下来，无非就是一个数字映射的过程。如果用std::map可能占用内存比较大，
//        那么可以直接用数组吧，解决有限空间内的问题更有效率。
//*/
////int Solution::romanToInt(string s) {
////
////    int n[20];
////    int ret=0;
////    n[s.size()]=0;//一定要这句
////
////    for (int i = 0; i < s.length(); i++)
////    {
////            switch (s[i]) {
////            case 'I':  n[i] = 1; break;
////            case 'V':  n[i] = 5; break;
////            case 'X':  n[i] = 10; break;
////            case 'L':  n[i] = 50; break;
////            case 'C':  n[i] = 100; break;
////            case 'D':  n[i] = 500; break;
////            case 'M':  n[i] = 1000; break;
////            default:break;
////        }
////    }
////    for(int i=0;i<s.length();i++)
////    {
////        if(n[i]<n[i+1]){
////            ret=ret+n[i+1]-n[i];
////            i++;
////        }
////        else{
////            ret=ret+n[i];
////        }
////    }
//////    cout<<"ret= "<<ret<<endl;
////    return ret;
////}
////        {("I",1)},{("V",5)},{("X",10)},{("L",50)},{("C",100)},
////        {("D",500)},{("M",1000)},{("IV",4)},{("IX",9)},
////        {("XL",40)},{("XC",90)},{("CD",400)},{("CM",900)}
////我的解题思路
//int Solution::romanToInt(string s)
//{
//    int ret=0;
//    map<string,int>m=
//    {
//        {"I",1},{"V",5},{"X",10},{"L",50},{"C",100},
//        {"D",500},{"M",1000},{"IV",4},{"IX",9},
//        {"XL",40},{"XC",90},{"CD",400},{"CM",900}
//    };
//    string str;
//    vector<string>v_string;
////    m.insert(make_pair("I",1));
////    m.insert(make_pair("V",5));
////    m.insert(make_pair("X",10));
////    m.insert(make_pair("L",50));
////    m.insert(make_pair("C",100));
////    m.insert(make_pair("D",500));
////    m.insert(make_pair("M",1000));
////    m.insert(make_pair("IV",4));
////    m.insert(make_pair("IX",9));
////    m.insert(make_pair("XL",40));
////    m.insert(make_pair("XC",90));
////    m.insert(make_pair("CD",400));
////    m.insert(make_pair("CM",900));
//    /*
//    这里是为了找到两种字母组合成的罗马数字
//    例如CDI
//    1、先截取两个字母，然后和map表比对，如果存在则推入到v_string中
//    如果不匹配则继续
//    2、一共要运行n-1次，因为CDI情况有 CD DI
//    */
//    for(int i=0;i<s.size()-1;i++){
//        str=s.substr(i,2);
//        //map.find()用法查找map中的key值返回所在位置的迭代器
//        if(m.find(str)!=m.end()){
//            v_string.push_back(str);
//        }
//    }
//    /*
//    这里是用来分离字母：将罗马字母分成两份，一份是只有一个字母的（保存到输入的s中），
//        一份是两个字母的（v_string）
//    */
//    for(int i=0;i<v_string.size();i++){
//        int pos=-1;
//        pos=s.find(v_string.at(i));
//        if(pos!=-1){
//            s.erase(pos,2);//用法截取两个字母erase(开始的位置，截取多少个字母)
//        }
//    }
//    /*
//    将分好的组每个元素都和map表比对，然后相加
//    */
//    for(int i=0;i<s.size();i++){
//        string temp;
//        temp=s.at(i);
//        auto iter=m.find(temp);
//        ret=ret+iter->second;
//    }
//    for(int i=0;i<v_string.size();i++){
//        string temp;
//        temp=v_string.at(i);
//        auto iter=m.find(temp);
//        ret=ret+iter->second;
//    }
//
//    return ret;
//}
//
//int main()
//{
//    Solution s;
//    int ret=-1;
//    string str="";
//
//    cin>>str;
//
//    ret=s.romanToInt(str);
//    cout<<"ret=s.romanToInt(str) "<<ret<<endl;
//
//    return 0;
//}
