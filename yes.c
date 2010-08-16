#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char *output = "y";

    if(argc > 1 ) {
         output = argv[1]; 
    }

    while(1) {
            puts(output);
    } 
    return 1;
};
