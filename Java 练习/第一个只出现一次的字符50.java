import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;

public class 第一个只出现一次的字符50 {
    public char firstUniqChar(String s) {
        HashMap<Character,Integer> map=new LinkedHashMap<>();
        for(int i=0;i<s.length();i++){
            int count=0;
            if(map.get(s.charAt(i))==null){
                count=count+1;
            }else{
                count=map.get(s.charAt(i))+1;
            }
            map.put(s.charAt(i),count);
        }
        for(Map.Entry<Character,Integer> e:map.entrySet()){
            int count=e.getValue();
            if(count==1){
                return e.getKey();
            }
        }
        String ss=String.valueOf(" ");
        return ss.charAt(0);
    }
}
