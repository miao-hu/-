import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class 从上到下打印二叉树变形32 {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> res=new ArrayList<>();
        if(root==null){
            return res;
        }
        Queue<TreeNode> q=new LinkedList<>();
        q.offer(root);
        int k=1;
        while(!q.isEmpty()){
            int size=q.size();
            List<Integer> list=new ArrayList<>();
            if(k%2==1) {
                for (int i = 0; i < size; i++) {
                    TreeNode node = q.poll();
                    list.add(node.val);
                    if (node.left != null) {
                        q.offer(node.left);
                    }
                    if (node.right != null) {
                        q.offer(node.right);
                    }
                }
            }else{
                List<Integer> t=new ArrayList<>();
                for (int i = 0; i < size; i++) {
                    TreeNode node = q.poll();
                    t.add(node.val);
                    if (node.left != null) {
                        q.offer(node.left);
                    }
                    if (node.right != null) {
                        q.offer(node.right);
                    }
                }
                for(int i=t.size()-1;i>=0;i--){
                    list.add(t.get(i));
                }
            }
            res.add(list);
            k++;
        }
        return res;
    }
}
