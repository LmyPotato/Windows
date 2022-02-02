///*
//设计链表的实现。您可以选择使用单链表或双链表。单链表中的节点应该具有两个属性：val 和 next。val 是当前节点的值，next 是指向下一个节点的指针/引用。如果要使用双向链表，则还需要一个属性 prev 以指示链表中的上一个节点。假设链表中的所有节点都是 0-index 的。
//
//在链表类中实现这些功能：
//
//get(index)：获取链表中第 index 个节点的值。如果索引无效，则返回-1。
//addAtHead(val)：在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
//addAtTail(val)：将值为 val 的节点追加到链表的最后一个元素。
//addAtIndex(index,val)：在链表中的第 index 个节点之前添加值为 val  的节点。如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。如果index小于0，则在头部插入节点。
//deleteAtIndex(index)：如果索引 index 有效，则删除链表中的第 index 个节点。
// 
//
//示例：
//
//MyLinkedList linkedList = new MyLinkedList();
//linkedList.addAtHead(1);
//linkedList.addAtTail(3);
//linkedList.addAtIndex(1,2);   //链表变为1-> 2-> 3
//linkedList.get(1);            //返回2
//linkedList.deleteAtIndex(1);  //现在链表是1-> 3
//linkedList.get(1);            //返回3
// 
//
//提示：
//
//所有val值都在 [1, 1000] 之内。
//操作次数将在  [1, 1000] 之内。
//请不要使用内置的 LinkedList 库。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/design-linked-list
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
/////*
////给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
//// 
////
////示例 1：
////
////
////输入：head = [1,2,6,3,4,5,6], val = 6
////输出：[1,2,3,4,5]
////示例 2：
////
////输入：head = [], val = 1
////输出：[]
////示例 3：
////
////输入：head = [7,7,7,7], val = 7
////输出：[]
////
////来源：力扣（LeetCode）
////链接：https://leetcode-cn.com/problems/remove-linked-list-elements
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
////*/
////
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
//class MyLinkedList {
//public:
//    MyLinkedList() {
//        this->_size = 0;
//        this->_dummyHead = new ListNode(0);
//    }
//
//    int get(int index) {
//        index++;
//        if (index >= _size+1 || index <= 0) {
//            return -1;
//        }
//
//        ListNode *cur = _dummyHead;
//        while (index--) {
//            cur = cur->next;
//        }
//        return cur->val;
//    }
//
//    void addAtHead(int val) {
//        ListNode *cur = _dummyHead;
//        ListNode *headNode = new ListNode(val);
//
//        headNode->next = cur->next;
//        cur->next = headNode;
//        _size++;
//    }
//
//    void addAtTail(int val) {
//        ListNode *cur = _dummyHead;
//        ListNode *tailNode = new ListNode(val);
//
//        while (cur != nullptr && cur->next != nullptr) {
//            cur = cur->next;
//        }
//
//        tailNode->next = cur->next;
//        cur->next = tailNode;
//        _size++;
//    }
//
//    void addAtIndex(int index, int val) {
//
//        if (index > _size || index < 0) {
//            return;
//        }
//
//        ListNode *cur = this->_dummyHead;
//        ListNode *newNode = new ListNode(val);
//        while (index--) {
//            cur = cur->next;
//        }
//
//        newNode->next = cur->next;
//        cur->next = newNode;
//        _size++;
//    }
//
//    void deleteAtIndex(int index) {
//
//        if (index >= _size || index < 0) {
//            return;
//        }
//
//        ListNode *cur = _dummyHead;
//        ListNode * delNode = new ListNode(0);
//        while (index--) {
//            cur = cur->next;
//        }
//
//        delNode = cur->next;
//        cur->next = cur->next->next;
//        delete delNode;
//        _size--;
//    }
//
//public:
//    int _size;
//    ListNode *_dummyHead;
//};
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
//    MyLinkedList my_list;
//
//    my_list.addAtIndex(0,1);
//    my_list.addAtIndex(1,2);
//    my_list.addAtIndex(2,3);
//    my_list.addAtIndex(3,4);
//    my_list.addAtIndex(4,5);
//    my_list.addAtIndex(5,6);
//
//    my_list.addAtHead(0);
//    my_list.addAtTail(7);
//
//    printList(my_list._dummyHead);
//
//    cout<<my_list.get(6)<<endl;
//
//    return 0;
//}
//
//
//
