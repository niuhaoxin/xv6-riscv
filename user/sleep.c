#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main(int argc, char *argv[])
{
    int second;

    if(argc < 2){
        fprintf(2, "param num(%d) is not enough.\n", argc);
        exit(1);
    }

    second = atoi(argv[argc - 1]);
    if (second == 0) {
        fprintf(2, "Sleep time is too short.\n");
        exit(1);
    }

    sleep(second);
    exit(0);
}
