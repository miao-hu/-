import java.util.*;

class zidingyi implements Comparator<Integer>{

    @Override
    public int compare(Integer o1, Integer o2) {
        String s1=o1+""+o2;
        String s2=o2+""+o1;
        return  s1.compareTo(s2);
    }
}

public class 把数组排成最小的数45 {
    public String minNumber(int[] nums) {
        if(nums.length==0){
            return "";
        }
        List<Integer> list=new ArrayList<>();
        for(int e:nums){
            list.add(e);
        }
        StringBuilder s=new StringBuilder();
        Collections.sort(list,new zidingyi());
        for(int i=0;i<list.size();i++){
            s.append(list.get(i));
        }
        return s.toString();
    }
}
