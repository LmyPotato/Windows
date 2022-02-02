///*
//请你仅使用两个栈实现先入先出队列。队列应当支持一般队列支持的所有操作（push、pop、peek、empty）：
//
//实现 MyQueue 类：
//
//void push(int x) 将元素 x 推到队列的末尾
//int pop() 从队列的开头移除并返回元素
//int peek() 返回队列开头的元素
//boolean empty() 如果队列为空，返回 true ；否则，返回 false
// 
//
//说明：
//
//你只能使用标准的栈操作 —— 也就是只有 push to top, peek/pop from top, size, 和 is empty 操作是合法的。
//你所使用的语言也许不支持栈。你可以使用 list 或者 deque（双端队列）来模拟一个栈，只要是标准的栈操作即可。
// 
//
//进阶：
//
//你能否实现每个操作均摊时间复杂度为 O(1) 的队列？换句话说，执行 n 个操作的总时间复杂度为 O(n) ，即使其中一个操作可能花费较长时间。
// 
//
//示例：
//
//输入：
//["MyQueue", "push", "push", "peek", "pop", "empty"]
//[[], [1], [2], [], [], []]
//输出：
//[null, null, null, 1, 1, false]
//
//解释：
//MyQueue myQueue = new MyQueue();
//myQueue.push(1); // queue is: [1]
//myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
//myQueue.peek(); // return 1
//myQueue.pop(); // return 1, queue is [2]
//myQueue.empty(); // return false
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/implement-queue-using-stacks
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//class MyQueue {
//public:
//    stack<int>stInt;
//    stack<int>stOut;
//
//    MyQueue() {
//
//    }
//
//    void push(int x) {
//        stInt.push(x);
//    }
//
//    int pop() {
//        if (stOut.empty()) {
//            while (!stInt.empty()) {
//                stOut.push(stInt.top());
//                stInt.pop();
//            }
//        }
//        int result = stOut.top();
//        stOut.pop();
//
//        return result;
//    }
//
//    int peek() {
//        int res = this->pop();
//        stOut.push(res);
//
//        return res;
//
//    }
//
//    bool empty() {
//        return (stOut.empty() && stInt.empty());
//    }
//};
//
//
//template <class T>
//void printVector(T v)
//{
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//template <class T>
//void printVectorDouble(T v)
//{
//    for (auto it = v.begin(); it != v.end(); it++)
//    {
//        for (auto it1 = it->begin(); it1 != it->end(); it1++)
//        {
//            cout << *it1 <<" ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//int main()
//{
//    MyQueue myQueue;
//
//    myQueue.push(1);
//    myQueue.push(2);
//    cout<<myQueue.peek()<<endl;
//    cout<<myQueue.pop()<<endl;
//    cout<<myQueue.empty()<<endl;
//
//    return 0;
//}
//
