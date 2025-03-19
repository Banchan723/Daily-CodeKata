#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int allbottle = 0;
    while (n >= a)
{
	int newbottle = (n / a) * b;
        allbottle += newbottle;
        n = (n % a) + newbottle;
}
    return allbottle;
}