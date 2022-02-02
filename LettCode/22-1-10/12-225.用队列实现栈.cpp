///*
//请你仅使用两个队列实现一个后入先出（LIFO）的栈，并支持普通栈的全部四种操作（push、top、pop 和 empty）。
//
//实现 MyStack 类：
//
//void push(int x) 将元素 x 压入栈顶。
//int pop() 移除并返回栈顶元素。
//int top() 返回栈顶元素。
//boolean empty() 如果栈是空的，返回 true ；否则，返回 false 。
// 
//
//注意：
//
//你只能使用队列的基本操作 —— 也就是 push to back、peek/pop from front、size 和 is empty 这些操作。
//你所使用的语言也许不支持队列。 你可以使用 list （列表）或者 deque（双端队列）来模拟一个队列 , 只要是标准的队列操作即可。
// 
//
//示例：
//
//输入：
//["MyStack", "push", "push", "top", "pop", "empty"]
//[[], [1], [2], [], [], []]
//输出：
//[null, null, null, 2, 2, false]
//
//解释：
//MyStack myStack = new MyStack();
//myStack.push(1);
//myStack.push(2);
//myStack.top(); // 返回 2
//myStack.pop(); // 返回 2
//myStack.empty(); // 返回 False
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/implement-stack-using-queues
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////class MyStack {
////public:
////    queue<int> queue1;
////    queue<int> queue2;
////
////    MyStack() {
////
////    }
////
////    void push(int x) {
////        queue1.push(x);
////    }
////
////    int pop() {
////        int size = queue1.size();
////        size--;
////
////        while(size--) {
////            int tmp = queue1.front();
////            queue2.push(tmp);
////            queue1.pop();
////        }
////        int ret = queue1.front();
////        queue1.pop();
////        queue1 = queue2;
////
////        while (!queue2.empty()) {
////            //queue1.push(queue2.front());
////            queue2.pop();
////        }
////
////        return ret;
////    }
////
////    int top() {
////
////        return queue1.back();
////    }
////
////    bool empty() {
////        return queue1.empty();
////    }
////};
//
//class MyStack {
//public:
//    queue<int>myQueue;
//
//    MyStack() {
//
//    }
//
//    void push(int x) {
//        myQueue.push(x);
//    }
//
//    int pop() {
//        int size = myQueue.size();
//
//        size--;
//        while (size--) {
//            myQueue.push(myQueue.front());
//            myQueue.pop();
//        }
//
//        int ret = myQueue.front();
//        myQueue.pop();
//        return ret;
//    }
//
//    int top() {
//        return myQueue.back();
//    }
//
//    bool empty() {
//        return myQueue.empty();
//    }
//};
//
//int main ()
//{
//    MyStack myStack;
//
//    myStack.push(1);
//    myStack.push(2);
//
//    cout<<myStack.top()<<endl;
//    cout<<myStack.pop()<<endl;
//
//
//    return 0;
//}
