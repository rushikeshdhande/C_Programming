#include <stdio.h>
#include <fcntl.h> // File control

int main()
{
    int fd = 0;

    fd = creat("PPA.txt",0777);

    if (fd == -1)
    {
        /* code */
        printf("Unable to create file\n");
    }else{
        printf("File successfully created\n");
    }
    

    return 0;
}