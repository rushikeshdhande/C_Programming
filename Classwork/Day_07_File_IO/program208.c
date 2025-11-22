#include <stdio.h>
#include <fcntl.h> // File control
// io.h

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[50] = {'\0'};

    printf("Enter the file name : ");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);
    if (fd == -1)
    {
        printf("Unable to open");  
        return -1;
    }

    iRet = read(fd, Data, 7);
    printf("%d bytes gest successfully read \n", iRet);

    printf("Data from file \n");

    write(1,Data,iRet);

    printf("\n");
    
    close(fd);

    return 0;
}