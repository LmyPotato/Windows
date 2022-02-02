///*
//给你一个链表的头节点 head ，判断链表中是否有环。
//
//如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。如果 pos 是 -1，则在该链表中没有环。注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
//
//如果链表中存在环，则返回 true 。 否则，返回 false 。
//
// 
//
//示例 1：
//
//
//
//输入：head = [3,2,0,-4], pos = 1
//输出：true
//解释：链表中有一个环，其尾部连接到第二个节点。
//示例 2：
//
//
//
//输入：head = [1,2], pos = 0
//输出：true
//解释：链表中有一个环，其尾部连接到第一个节点。
//示例 3：
//
//
//
//输入：head = [1], pos = -1
//输出：false
//解释：链表中没有环。
// 
//
//提示：
//
//链表中节点的数目范围是 [0, 104]
//-105 <= Node.val <= 105
//pos 为 -1 或者链表中的一个 有效索引 。
// 
//
//进阶：你能用 O(1)（即，常量）内存解决此问题吗？
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/linked-list-cycle
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
//#include<iostream>
//#include<vector>
//#include<unordered_set>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(){}
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
////Definition for singly-linked list.
////typedef struct ListNode{
////    int val;
////    struct ListNode *next;
////}ListNode;
///*
//a.find("eeee")：查找元素"eeee"，返回结果为a.end()则表明没有找到，否则返回所对应元素
//a.count("eeee")：查找元素"eeee"在a中有几个（由于unordered_set中没有相同的元素，所以结果通常为0或1）
//*/
////class Solution {
////public:
////    bool hasCycle(ListNode *head) {
////        unordered_set<ListNode*>seen;
////        while(head!=nullptr){
////            if(seen.count(head)==1){
////                return true;
////            }
////            seen.insert(head);
////            head=head->next;
////        }
////        return false;
////    }
////};
//
//class Solution {
//public:
//    bool hasCycle(ListNode *head) {
//        if(head==nullptr||head->next==nullptr){
//            return false;
//        }
//        ListNode *slow=head;
//        ListNode *fast=head->next;
//
//        while(slow!=fast){
//            if(fast==nullptr||fast->next==nullptr){
//                return false;
//            }
//            slow=slow->next;
//            fast=fast->next->next;
//        }
//        return true;
//    }
//};
//
//
//void listInit(ListNode *L)
//{
//    L=new ListNode(-1);
//}
//
//void createList(ListNode *L,vector<int>v)//尾插
//{
//    ListNode *r=new ListNode(0);
//    r=L;
//    int i=0;
//
//    while(i<v.size()){
//        ListNode *temp=new ListNode(v[i]);
//
//        r->next=temp;
//        r=temp;
//        i++;
//    }
//
//}
//
//void printList(ListNode *L)
//{
//    if(L==nullptr){
//        cout<<"list if null!"<<endl;
//    }
//    else{
//        L=L->next;
//        while(L!=nullptr){
//            cout<<L->val<<" ";
//            L=L->next;
//        }
//        cout<<endl;
//    }
//}
//
//int main()
//{
//    ListNode L;
//    Solution s;
//    vector<int>v_data={3,2,0,-4};
//
//    listInit(&L);
//    createList(&L,v_data);
//    printList(&L);
//
//    cout<<s.hasCycle(&L)<<endl;;
//
//
//
//    return 0;
//}
//
