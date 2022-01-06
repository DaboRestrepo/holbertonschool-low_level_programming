#include "main.h"
int main(int argc, char *argv[])
{
    int fd;
    char *buf;
    size_t len;

    while(buf[len])
        len++;
    buf = malloc(sizeof(char) * len);
    if (buf == NULL)
    {
        free(buf);
        exit(99);
    }
    if ((fd = open(fd, O_CREAT | O_RDWR | O_TRUNC, 0664)) < 0)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[0]);
        exit(98);
    }
    else
    {
        write();
    }

}