import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class 从上到下打印二叉树{
    public int[] levelOrder(TreeNode root){
        if(root==null){
            return new int[0];
        }
        List<Integer> res=new ArrayList<>();
        Queue<TreeNode> q=new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()){
            TreeNode node=q.poll();
            res.add(node.val);
            if(node.left!=null){
                q.offer(node.left);
            }
            if(node.right!=null){
                q.offer(node.right);
            }
        }
        int[] arr=new int[res.size()];
        for(int i=0;i<arr.length;i++){
            arr[i]=res.get(i);
        }
        return arr;
    }
}
