import java.util.Stack;

public class 包含min函数的栈30 {
    Stack<Integer> stack1;
    Stack<Integer> stack2;
    /** initialize your data structure here. */
    public 包含min函数的栈30() {
        stack1=new Stack<>();
        stack2=new Stack<>();
    }

    public void push(int x) {
        stack1.push(x);
        if(stack2.isEmpty()||stack2.peek()>=x){
            stack2.push(x);
        }
    }

    public void pop() {
        if(stack1.pop().equals(stack2.peek())){
            stack2.pop();    //只有栈顶元素才可以直接弹出
        }
    }

    public int top() {
        return stack1.peek();
    }

    public int min() {
        return stack2.peek();
    }
}
