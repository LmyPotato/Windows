///*
//设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
//
//push(x) —— 将元素 x 推入栈中。
//pop() —— 删除栈顶的元素。
//top() —— 获取栈顶元素。
//getMin() —— 检索栈中的最小元素。
// 
//
//示例:
//
//输入：
//["MinStack","push","push","push","getMin","pop","top","getMin"]
//[[],[-2],[0],[-3],[],[],[],[]]
//
//输出：
//[null,null,null,null,-3,null,0,-2]
//
//解释：
//MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.getMin();   --> 返回 -3.
//minStack.pop();
//minStack.top();      --> 返回 0.
//minStack.getMin();   --> 返回 -2.
// 
//
//提示：
//
//pop、top 和 getMin 操作总是在 非空栈 上调用。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/min-stack
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
///**
// * Your MinStack object will be instantiated and called as such:
// * MinStack* obj = new MinStack();
// * obj->push(val);
// * obj->pop();
// * int param_3 = obj->top();
// * int param_4 = obj->getMin();
// */
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
////class MinStack {
////public:
////    int MAX_SIZE;
////    int arr[65535];
////    int high;
////public:
////    MinStack() {
////        this->high=-1;
////        this->MAX_SIZE=65535;
////        for(int i=0;i<MAX_SIZE;i++){
////            arr[i]=-1;
////        }
////    }
////
////    void push(int val) {
////        if(high>=MAX_SIZE){
////            return;
////        }
////        else{
////            this->high++;
////            this->arr[high]=val;
////        }
////    }
////
////    void pop() {
////        if(high<=-1){
////            return;
////        }
////        else{
////            arr[high]=-1;
////            high--;
////        }
////    }
////
////    int top() {
////        return arr[high];
////    }
////
////    int getMin() {
////        int min_num=INT_MAX;
////        for(int i=0;i<=high;i++){
////            if(arr[i]<min_num){
////                min_num=arr[i];
////            }
////        }
////        return min_num;
////    }
////};
//
//class MinStack {
//    stack<int> x_stack;
//    stack<int> min_stack;
//public:
//    MinStack() {
//        min_stack.push(INT_MAX);
//    }
//
//    void push(int x) {
//        x_stack.push(x);
//        min_stack.push(min(min_stack.top(), x));
//    }
//
//    void pop() {
//        x_stack.pop();
//        min_stack.pop();
//    }
//
//    int top() {
//        return x_stack.top();
//    }
//
//    int getMin() {
//        return min_stack.top();
//    }
//};
//
//
////void printStack(MinStack ms)
////{
////    for(int i=0;i<=ms.high;i++){
////        cout<<ms.arr[i]<<" ";
////    }
////    cout<<endl;
////}
//
//int main()
//{
//    MinStack ms;
//
//    ms.push(-2);
//    ms.push(0);
//    ms.push(-3);
//
////    printStack(ms);
//
//    cout<<ms.getMin()<<endl;
//
//    ms.pop();
//    ms.pop();
//
//    cout<<ms.getMin()<<endl;
//
//    return 0;
//}
