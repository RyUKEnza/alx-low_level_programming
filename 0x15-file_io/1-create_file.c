#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file with specified content
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, write_count;
    ssize_t text_length = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[text_length] != '\0')
            text_length++;

        write_count = write(fd, text_content, text_length);
        if (write_count != text_length)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}

