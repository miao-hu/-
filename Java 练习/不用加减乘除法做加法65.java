public class 不用加减乘除做加法65 {
    public int add(int a, int b) {
        if(a>0){
            while (a--!=0){
                b++;
            }
        }else{
            while (a++!=0){
                b--;
            }
        }
        return b;
    }
}
