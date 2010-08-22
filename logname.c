#include <unistd.h>
#include <stdio.h>


int main(int argc, char * argv[]) {

    char *login;
    login = getlogin();
    
    if(login) {
    puts(login);
    }

return 1; 
};
