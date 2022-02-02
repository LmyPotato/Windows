///*
//给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
//
// 
//
//示例 1：
//
//
//输入：head = [1,2,3,4,5], n = 2
//输出：[1,2,3,5]
//示例 2：
//
//输入：head = [1], n = 1
//输出：[]
//示例 3：
//
//输入：head = [1,2], n = 1
//输出：[1]
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include<iostream>
//#include<vector>
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
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* dummyHead = new ListNode(0);
//        dummyHead->next = head;
//        ListNode* slow = dummyHead;
//        ListNode* fast = dummyHead;
//        ListNode *tmp = nullptr;
//        while(n-- && fast != NULL) {
//            fast = fast->next;
//        }
//        fast = fast->next; // fast再提前走一步，因为需要让slow指向删除节点的上一个节点
//        while (fast != NULL) {
//            fast = fast->next;
//            slow = slow->next;
//        }
//        tmp = slow->next;
//        slow->next = tmp->next;
//        delete tmp;
//        return dummyHead->next;
//    }
//};
//
//void listInit(ListNode *L)
//{
//    L=new ListNode(0);
//}
//
//void createList(ListNode *L,vector<int>v)//尾插
//{
//    ListNode *r=new ListNode(0);
//    r=L;
//    int len = v.size();
//    int i=0;
//
//    while(i < len){
//        ListNode *temp=new ListNode(v[i]);
//
//        r->next=temp;
//        r=temp;
//        i++;
//    }
//}
//
//void printList(ListNode *L)
//{
//    if(L==nullptr){
//        cout<<"list if null!"<<endl;
//        return;
//    }
//    else{
//        L = L->next;
//        while(L != nullptr){
//            cout<<L->val<<" ";
//            L = L->next;
//        }
//        cout<<endl;
//    }
//}
//
//int main()
//{
//    ListNode L;
//    ListNode *output = new ListNode();
//    Solution s;
//    vector<int>v_data={1,2,3,4};
//
//    listInit(&L);
//    createList(&L,v_data);
//    printList(&L);
//
//    output = s.removeNthFromEnd(&L, 2);
//    printList(output);
//
//
//    return 0;
//}
//
//
//
