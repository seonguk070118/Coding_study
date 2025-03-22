using System;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0,a=1,b=0;
        int len = num_list.Length;
        for(int i=0;i<len;i++){
            a*=num_list[i];
            b+=num_list[i];
        }
        b*=b;
        if(a<b){
            answer=1;
        }
        return answer;
    }
}