public class 变态青蛙跳台阶2 {
    /*
        public int JumpFloorII(int target) {
            if(target==1){
                return 1;
            }else{
                return 2*JumpFloorII(target-1);
            }
        }
    */
    public int JumpFloorII(int target) {
        if(target==1){
            return 1;
        }else{
            return 1<<(target-1);
        }
    }
}
