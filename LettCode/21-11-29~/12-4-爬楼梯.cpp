///*
//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
//
//注意：给定 n 是一个正整数。
//
//示例 1：
//
//输入： 2
//输出： 2
//解释： 有两种方法可以爬到楼顶。
//1.  1 阶 + 1 阶
//2.  2 阶
//示例 2：
//
//输入： 3
//输出： 3
//解释： 有三种方法可以爬到楼顶。
//1.  1 阶 + 1 阶 + 1 阶
//2.  1 阶 + 2 阶
//3.  2 阶 + 1 阶
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/climbing-stairs
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    int climbStairs(int n);
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
////int Solution::climbStairs(int n)
////{
////    int ret=0;
////    vector<int>v;
////    v.push_back(1);
////    v.push_back(2);
////
////    if(n<=0){
////        return 0;
////    }
////
////    for(int i=2;i<n;i++){
////        ret=v[i-1]+v[i-2];
////        v.push_back(ret);
////    }
////
////    printVector(v);
////    return v.at(n-1);
////}
//
//
////int Solution::climbStairs(int n)
////{
////    int p=0,q=0,r=1;
////    for(int i=1;i<=n;i++){
////        p=q;
////        q=r;
////        r=p+q;
////    }
////    return r;
////}
///*
//map：
//优点：
//有序性，这是map结构最大的优点，其元素的有序性在很多应用中都会简化很多的操作
//红黑树，内部实现一个红黑书使得map的很多操作在lgn的时间复杂度下就可以实现，因此效率非常的高
//缺点： 空间占用率高，因为map内部实现了红黑树，虽然提高了运行效率，
//但是因为每一个节点都需要额外保存父节点、孩子节点和红/黑性质，使得每一个节点都占用大量的空间
//适用处：对于那些有顺序要求的问题，用map会更高效一些
//
//
//unordered_map：
//优点： 因为内部实现了哈希表，因此其查找速度非常的快
//缺点： 哈希表的建立比较耗费时间
//适用处：对于查找问题，unordered_map会更加高效一些，因此遇到查找问题，常会考虑一下用unordered_map
//*/
////超出时间限制
//int Solution::climbStairs(int n)
//{
////    if(n<=1){
////        return 1;
////    }
////    else if(n==2){
////        return 2;
////    }
////    else{
////        return climbStairs(n-1)+climbStairs(n-2);
////    }
//    unordered_map<int,int> mp;
//    if(n == 1) return 1;
//    if(n == 2) return 2;
//
//    auto it = mp.find(n);
//    if( it != mp.end() )
//        return it->second;
//
//    int sum = climbStairs(n-1) + climbStairs(n-2);
//    mp.insert(pair<int, int> (n, sum));
//    return sum;
//}
//
//int main()
//{
//    int ret=-1;
//    Solution s;
//    int n;
//
//    cin>>n;
//
//    ret=s.climbStairs(n);
//
//    cout<<"ret= "<<ret<<endl;
//    return 0;
//}
