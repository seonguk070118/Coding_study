#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct Item {
    char name[100];
    int price;
    bool limited;
}Item;

int main()
{
    struct Item item1 = { "������ ���ϸ�� ���亥 ����� ����", 100000, false };
    Item* ptr=&item1;
    ptr->limited = true;

    if (ptr->limited == true)
        printf("������\n");
    else
        printf("�Ϲ���\n");

    return 0;
}
