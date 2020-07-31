import java.util.Stack;

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
    }
}
public class 从头到尾打印链表06 {
    public int[] reversePrint(ListNode head) {
        Stack<Integer> stack=new Stack<>();
        int k=0;
        while(head!=null){
            stack.push(head.val);
            k++;
            head=head.next;
        }
        int[] arr=new int[k];
        for(int i=0;i<k;i++){
            arr[i]=stack.pop();
        }
        return arr;
    }
}
