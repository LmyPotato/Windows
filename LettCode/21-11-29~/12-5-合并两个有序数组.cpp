/*
给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。

请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。

注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。


示例 1：

输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
输出：[1,2,2,3,5,6]
解释：需要合并 [1,2,3] 和 [2,5,6] 。
合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
示例 2：

输入：nums1 = [1], m = 1, nums2 = [], n = 0
输出：[1]
解释：需要合并 [1] 和 [] 。
合并结果是 [1] 。
示例 3：

输入：nums1 = [0], m = 0, nums2 = [1], n = 1
输出：[1]
解释：需要合并的数组是 [] 和 [1] 。
合并结果是 [1] 。
注意，因为 m = 0 ，所以 nums1 中没有元素。nums1 中仅存的 0 仅仅是为了确保合并结果可以顺利存放到 nums1 中。
 

提示：

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109
 

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printVector(vector<int>v)
{
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
};

//void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
//{
//    for(int i=0;i<n;i++){
//        nums1[i+m]=nums2[i];
//    }
//    sort(nums1.begin(),nums1.end());
//    printVector(nums1);
//}


void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int i=0,j=0;
    int cur=-1;
    vector<int>temp;

    while(i<m||j<n){
        if(i==m){
            cur=nums2[j];
            j++;
        }
        else if(j==n){
            cur=nums1[i];
            i++;
        }
        else if(nums1[i]<nums2[j]){
            cur=nums1[i];
            i++;
        }
        else if(nums1[i]>nums2[j]){
            cur=nums2[j];
            j++;
        }
        cout<<"cur= "<<cur<<endl;
        temp.push_back(cur);
    }
    nums1=temp;
    printVector(nums1);
}

int main()
{
	Solution s;
    vector<int>v1={1,2,3,0,0,0};
    vector<int>v2={4,5,6};

    cout<<"num= "<<v1.size()-v2.size()<<endl;

    s.merge(v1,v1.size()-v2.size(),v2,v2.size());



	return 0;
}
