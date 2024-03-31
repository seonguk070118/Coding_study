#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

typedef struct student {
    int num;
    char name[20];
    int mic, lin, pro;
    int tot;
    double avg;
    char grade;
} Student;

void input_data(Student *pary) {
	int i;
    for (i = 0; i < 1; i++) {
        scanf("%d", &pary[i].num);
        scanf("%s", pary[i].name);
        scanf("%d", &pary[i].mic);
        scanf("%d", &pary[i].lin);
        scanf("%d", &pary[i].pro);
    }
}

void calc_data(Student *pary) {
	int i;
    for (i = 0; i < 1; i++) {
        pary[i].tot = pary[i].mic + pary[i].lin + pary[i].pro;
        pary[i].avg = pary[i].tot / 3.0;
        
        if (pary[i].avg >= 90) pary[i].grade = 'A';
        else if (pary[i].avg >= 80) pary[i].grade = 'B';
        else if (pary[i].avg >= 70) pary[i].grade = 'C';
        else pary[i].grade = 'F';
    }
}

void print_data(Student *pary) {
	int i;
    for (i = 0; i < 1; i++) {
        printf("%d, %s, %d, %d, %d, %d, %.0f, %c\n", pary[i].num, pary[i].name, pary[i].mic, pary[i].lin, pary[i].pro, pary[i].tot, pary[i].avg, pary[i].grade);
    }
}

int main(void) {
    Student ary[5];
    input_data(ary);
    calc_data(ary);
    print_data(ary);
    return 0;
}

