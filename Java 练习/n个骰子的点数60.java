public class n个骰子的点数60 {
    public double[] twoSum(int n) {
        double pre[]={1/6d,1/6d,1/6d,1/6d,1/6d,1/6d};     //初始化一个骰子的几率
        for(int i=2;i<=n;i++){    //求第n个骰子每个和出现的几率
            double tmp[]=new double[5*i+1];    //和的个数为 5*i+1
            for(int j=0;j<pre.length;j++)      //遍历有 n-1 骰子的数组
                for(int x=0;x<6;x++)           //遍历 1 骰子的数组
                    tmp[j+x]+=pre[j]/6;
            pre=tmp;    //把 n 个骰子各个点数出现的和赋值给 pre
        }
        return pre;
    }
}
