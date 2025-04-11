#include <stdio.h>
#include <stdlib.h>

#include "LinearList.h"

void intPoly(char* input, listType* poly) {
    int i = 0;
    int sign = 1;
    while (input[i]) {
        elementType term = { 0, 0 };
        int coef = 0, expo = 0;
        int coef_set = 0;

        while (isspace(input[i])) i++;

        if (input[i] == '+') {
            sign = 1;
            i++;
        }
        else if (input[i] == '-') {
            sign = -1;
            i++;
        }

        while (isdigit(input[i])) {
            coef = coef * 10 + (input[i] - '0');
            coef_set = 1;
            i++;
        }

        if (!coef_set) coef = 1;
        coef *= sign;

        if (input[i] == 'X' || input[i] == 'x') {
            i++;
            if (input[i] == '^') {
                i++;
                while (isdigit(input[i])) {
                    expo = expo * 10 + (input[i] - '0');
                    i++;
                }
            }
            else {
                expo = 1;
            }
        }
        else {
            expo = 0;
        }

        term.coef = coef;
        term.expo = expo;
        ordered_insertItem(poly, term);

        sign = 1;
    }
}

listType* polymul(listType* f, listType* s) {
    listType* temp;
    listType* result;
    int i, j;
    elementType f_item, s_item, mul_item;

    temp = createList((f->last + 1) * (s->last + 1));

    for (i = 0; i <= f->last; i++) {
        f_item = readItem(f, i);
        for (j = 0; j <= s->last; j++) {
            s_item = readItem(s, j);
            mul_item.coef = f_item.coef * s_item.coef;
            mul_item.expo = f_item.expo + s_item.expo;
            insertItem(temp, temp->last + 1, mul_item);
        }
    }

    result = createList(temp->last + 1);

    for (i = 0; i <= temp->last; i++) {
        elementType current = readItem(temp, i);
        int k;
        int found = 0;

        for (k = 0; k <= result->last; k++) {
            elementType exist = readItem(result, k);
            if (exist.expo == current.expo) {
                exist.coef += current.coef;
                deleteItem(result, k);
                ordered_insertItem(result, exist);
                found = 1;
                break;
            }
        }

        if (!found) {
            ordered_insertItem(result, current);
        }
    }

    return result;
}

main() {
    listType* poly1, * poly2, * poly3;
    poly1 = createList(100);
    poly2 = createList(100);

    char input1[100];
    printf("첫 번째 다항식 입력하세요(띄어쓰기 x)\n");
    gets_s(input1, sizeof(input1));
    intPoly(input1, poly1);

    char input2[100];
    printf("두 번째 다항식 입력하세요(띄어쓰기 x)\n");
    gets_s(input2, sizeof(input2));
    intPoly(input2, poly2);

    poly3 = polymul(poly1, poly2);
    printf("[곱셈 결과]\n");
    printList(poly3);

    destroyList(poly1);
    destroyList(poly2);
    destroyList(poly3);

    return 0;
}