public class 打印从1到最大的n位数17 {
    public int[] printNumbers(int n) {
        int len=1;
        while(n!=0){
            len*=10;
            n--;
        }
        int[] arr=new int[len-1];
        for(int i=0;i<arr.length;i++){
            arr[i]=i+1;
        }
        return arr;
    }
}
