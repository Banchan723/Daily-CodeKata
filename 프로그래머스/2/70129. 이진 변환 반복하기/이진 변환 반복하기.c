#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* s) {
    int* answer = malloc(sizeof(int) * 2);
    int transformations = 0;
    int total_zeros = 0;
    
    char* curr = malloc(strlen(s) + 1);
    strcpy(curr, s);
    
    while (!(strlen(curr) == 1 && curr[0] == '1')) {
        transformations++;
        int zeros = 0, ones = 0;
        int len = strlen(curr);
        for (int i = 0; i < len; i++) {
            if (curr[i] == '0') zeros++;
            else ones++;
        }
        total_zeros += zeros;
        
        int c = ones;
        int bits = 0;
        for (int tmp = c; tmp > 0; tmp >>= 1) bits++;
        
        char* next = malloc(bits + 1);
        next[bits] = '\0';
        for (int i = bits - 1; i >= 0; i--) {
            next[i] = (c & 1) ? '1' : '0';
            c >>= 1;
        }
        
        free(curr);
        curr = next;
    }
    
    free(curr);
    answer[0] = transformations;
    answer[1] = total_zeros;
    return answer;
}
