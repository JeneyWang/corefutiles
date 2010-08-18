#include <string.h>
#include <stdio.h>

int main( int argc, char * argv[]) {

char *basename;
char *str;
char *final = malloc(256);
int i = 0;
int b = 0;
int a = 0;
char *suffix;

    if(argc == 1 | argc > 3) {  return 0;  }
     str = strtok(argv[1], "/");
     
     while(str != NULL) {
        basename = str;
        str = strtok(NULL, "/");       
     }

    if(argv[2]) {
        a = strlen(basename); 
        b = strlen(argv[2]);
        suffix = argv[2];

        for(i=0; i < b+1; i++) {


            if(basename[a-i] == suffix[b-i]) {
            } else { break; }

  }
  strncpy(final, basename, sizeof(basename) - i +1 ); 
  } else { final = basename; }

    puts(final);
    

    return 1;
};
