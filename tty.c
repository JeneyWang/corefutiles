#include <unistd.h>
#include <strings.h>

int main(int argc, char * argv[]) {
    puts(ttyname(STDIN_FILENO));
 return 1; 
};
