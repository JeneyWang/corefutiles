#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>

main(int argc, char * argv[]) {
struct passwd *pass = getpwuid(geteuid());
puts(pass->pw_name);
};
