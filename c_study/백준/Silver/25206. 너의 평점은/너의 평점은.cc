#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char a[55],b[2];
    double c,s1=0.0,s2=0.0;
    int i;
    for(i=0;i<20;i++){
    	scanf("%s %lf %s",a,&c,b);
    	if(b[0]=='A'){
    		if(b[1]=='+'){
    			s1+=c*4.5;
    			s2+=c;
    			continue;
			}
			else if(b[1]=='0'){
				s1+=c*4.0;
    			s2+=c;
    			continue;
			}
		}
		else if(b[0]=='B'){
    		if(b[1]=='+'){
    			s1+=c*3.5;
    			s2+=c;
    			continue;
			}
			else if(b[1]=='0'){
				s1+=c*3.0;
    			s2+=c;
    			continue;
			}
		}
		else if(b[0]=='C'){
    		if(b[1]=='+'){
    			s1+=c*2.5;
    			s2+=c;
    			continue;
			}
			else if(b[1]=='0'){
				s1+=c*2.0;
    			s2+=c;
    			continue;
			}
		}
		else if(b[0]=='D'){
    		if(b[1]=='+'){
    			s1+=c*1.5;
    			s2+=c;
    			continue;
			}
			else if(b[1]=='0'){
				s1+=c*1.0;
    			s2+=c;
    			continue;
			}
		}
		else if(b[0]=='F'){
    			s1+=c*0.0;
    			s2+=c;
    			continue;
		}
		else if(b[0]=='P'){
    		continue;
		}
	}
	printf("%f",s1/s2);
    return 0;
}
