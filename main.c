#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "count-vowels.h"

int main(int argc, char *argv[]){

    //check for filename in argument
    if(argc < 2){
        printf("ERROR -- filename and extention not present as cmd line argument. \nUsage: ./count-vowels.out filepath/filename.txt\n\n");
        return 1;
    }

    char filename[256];
    strcpy(filename, argv[1]);

    printf("Filename: %s\n", filename);
    get_num_vowels(filename);

    return 0;
}
