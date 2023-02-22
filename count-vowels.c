#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "count-vowels.h"


int get_num_vowels(char filepath[256]){

    FILE* fp = fopen(filepath, "r");

    if(!fp){
        printf("ERROR -- file could not be opened. Exiting program with code 1.\n");
        return 1;
    }

    char* curr;

    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;

    while((curr = fgetc(fp)) != EOF){
        if(curr == 'a' || curr == 'A')
            a++;
        else if(curr == 'e' || curr == 'E')
            e++;
        else if(curr == 'i' || curr == 'I')
            i++;
        else if(curr == 'o' || curr == 'O')
            o++;
        else if(curr == 'u' || curr == 'U')
            u++;
    }

    printf("\nNumber of vowels in the given file: \n\n");
    printf("a:  %d \ne:  %d \ni:  %d \no:  %d \nu:  %d \n\n", a, e, i, o, u);

    fclose(fp);

    return 0;
}
