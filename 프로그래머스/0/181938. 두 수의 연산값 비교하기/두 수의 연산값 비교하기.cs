using System;

public class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        int ab = int.Parse(a.ToString() + b.ToString());
        if(ab > 2*a*b){
            answer = ab;
        }
        else{
            answer = 2*a*b;
        }
        return answer;
    }
}