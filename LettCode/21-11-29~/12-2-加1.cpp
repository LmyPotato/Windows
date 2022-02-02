///*
//给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
//
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//
//你可以假设除了整数 0 之外，这个整数不会以零开头。
//
// 
//示例 1：
//
//输入：digits = [1,2,3]
//输出：[1,2,4]
//解释：输入数组表示数字 123。
//
//示例 2：
//输入：digits = [4,3,2,1]
//输出：[4,3,2,2]
//解释：输入数组表示数字 4321。
//
//示例 3：
//输入：digits = [0]
//输出：[1]
// 
//提示：
//
//1 <= digits.length <= 100
//0 <= digits[i] <= 9
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/plus-one
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//void printVector(vector<int>v)
//{
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//class Solution {
//public:
//    vector<int> plusOne(vector<int>& digits);
//};
//
//vector<int>Solution::plusOne(vector<int>&digits)
//{
//    vector<int>data={0};
//    int temp;
//
//    data.insert(data.begin()+1,digits.begin(),digits.end());
//
//    int len=data.size()-1;
//    temp=data[len]+1;
////    printVector(data);
//    if(temp<10){
//        data[len]=data[len]+1;
//    }
//    else{
//        for(int i=len;i>=0;i--){
//            data[i]=data[i]+temp/10;
//            temp=data[i];
//            data[i]=data[i]%10;
//        }
//    }
//    if(data[0]==0){
//        data.erase(data.begin(),data.begin()+1);
//    }
//    digits=data;
//    return digits;
//}
//
//int main()
//{
//    Solution s;
//    vector<int>v={9,9,9,9};
////    vector<int>v={1,2,3,4,6,7,8,9};
//
//    s.plusOne(v);
//
//    printVector(v);
//
//
//    return 0;
//}

