#ifndef MAFFLE_STRING_H
#define MAFFLE_STRING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Functions
char *read_string(FILE *file);
char *write_string(FILE *file, char *string);
char *overwrite_string(FILE *file, char *string);
char *append_string(FILE *file, char *string);

// Read a string from a file
char *read_string(FILE *file)
{
    char *string = NULL;
    int length = 0;
    int character = 0;

    // Read the string
    while ((character = fgetc(file)) != EOF)
    {
        // Allocate memory for the string
        string = (char *)realloc(string, length + 1);

        // Add the character to the string
        string[length] = character;

        // Increment the length
        length++;
    }

    // Add the null terminator
    string[length] = '\0';

    // Return the string
    return string;
}

// Write a string to a file
char *write_string(FILE *file, char *string)
{
    // Write the string
    fprintf(file, "%s", string);

    // Return the string
    return string;
}

// Overwrite a string in a file
char *overwrite_string(FILE *file, char *string)
{
    // Overwrite the string
    fprintf(file, "%s", string);

    // Return the string
    return string;
}

// Append a string to a file
char *append_string(FILE *file, char *string)
{
    // Append the string
    fprintf(file, "%s", string);

    // Return the string
    return string;
}

#endif
