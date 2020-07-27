public class 表示数值的字符串20 {
    public boolean isNumber(String s) {
        if(s == null || s.length() == 0){
            return false;
        }
        char[] str = s.trim().toCharArray();
        boolean numSeen = false;    //标记是否出现了0-9的数字
        boolean dotSeen = false;    //标记是否出现了 .
        boolean eSeen = false;      //标记是否出现了 e
        for(int i = 0;i < str.length; i++){
            if(str[i] >= '0' && str[i] <= '9'){
                numSeen = true;
            }else if(str[i] == '.'){
                // e 后边只能为整数
                if(dotSeen || eSeen){
                    return false;   //若 .之前出现  .或者  e ，那么就返回错误
                }
                dotSeen = true;
            }else if(str[i] == 'e' || str[i] == 'E'){
                if(eSeen || numSeen == false){   //若 e 之前出现 e 或者 e 之前不是数字  那么就返回错误
                    return false;
                }
                eSeen = true;
                numSeen = false;  //重置numSeen，排除123e或者123e+的情况,确保e之后也出现数
            }else if(str[i] == '-' || str[i] == '+'){
                //+-出现在0位置，或者e/E的后面第一个位置才是合法的
                if(i != 0 && str[i-1] != 'e' && str[i-1] != 'E'){
                    return false;
                }
            }else{
                //其他不合法字符
                return false;
            }
        }
        return numSeen;
    }
}
