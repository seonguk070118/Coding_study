using System;

public class Solution {
    public string solution(string my_string, string overwrite_string, int s) {
        string answer = "";
        int a = my_string.Length;
        int j=0;
        for(int i=0;i<s;i++){
            answer=answer + my_string[i];
            j++;
        }
        for(int i=0;i<overwrite_string.Length;i++){
            answer = answer + overwrite_string[i];
            j++;
        }
        for(int i=j;i<a;i++){
            answer = answer + my_string[i];
        }
        return answer;
    }
}