using System;

public class Solution {
    public int solution(int num, int n) {
        int answer = 0;
        if(num%n!=0){
            answer=0;
        }
        else{
            answer=1;
        }
        return answer;
    }
}