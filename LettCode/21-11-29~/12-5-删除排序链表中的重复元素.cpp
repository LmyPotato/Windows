///*
//存在一个按升序排列的链表，给你这个链表的头节点 head ，请你删除所有重复的元素，使每个元素 只出现一次 。
//
//返回同样按升序排列的结果链表。
//
//示例 1：
//
//
//输入：head = [1,1,2]
//输出：[1,2]
//示例 2：
//
//
//输入：head = [1,1,2,3,3]
//输出：[1,2,3]
// 
//提示：
//
//链表中节点数目在范围 [0, 300] 内
//-100 <= Node.val <= 100
//题目数据保证链表已经按升序排列
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include<iostream>
//#include<list>
//#include<vector>
//
//using namespace std;
//
//
////Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//ListNode* listInsert(vector<int>v)
//{
//    ListNode *L=new ListNode();
//    ListNode *head=new ListNode;
//    L->next=NULL;
//    head=L;
//    for(int i=0;i<v.size();i++){
//        ListNode *s=new ListNode;
//        s->val=v.at(i);
//        s->next=NULL;
//        head->next=s;
//        head=s;
//    }
//    return L;
//}
//
//void printList(ListNode *L)
//{
//    L=L->next;
//    while(L->next!=NULL){
//        cout<<L->val<<" ";
//        L=L->next;
//    }
//    cout<<endl;
//}
//
//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head);
//};
//
//ListNode* Solution::deleteDuplicates(ListNode* head)
//{
////    if (!head) {
////        return head;
////    }
////
////    ListNode* cur = head;
////    while (cur->next) {
////        if (cur->val == cur->next->val) {
////            cur->next = cur->next->next;
////        }
////        else {
////            cur = cur->next;
////        }
////    }
////
////    return head;
//   ListNode* h= head;
//    while(head!=NULL&&head->next!=NULL){
//        if(head->val==head->next->val){
//            ListNode *p;
//            p=head->next;
//            head->next=p->next;
//            delete p;
//        }
//        else{
//            head=head->next;
//        }
//    }
//    return h;
//}
//
//
//int main()
//{
//    Solution s;
//    vector<int>v={1,1,2,3,3};
//    ListNode* L,*out;
//    L=listInsert(v);
//
////    printList(L);
//
//    out=s.deleteDuplicates(L);
//
//    printList(out);
//
//    return 0;
//}
