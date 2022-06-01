#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
    char ch;

    filePointer = fopen("test.ms", "r");

    if (filePointer == NULL)
    {
        printf("File is not available \n");
    }
    else
    {
        while ((ch = fgetc(filePointer)) != EOF)
        {
            if (isalpha(ch))
            {
                if (ch == 'a' || ch == 'A')
                {
                    ch = getc(filePointer);
                    if (ch == 'b' || ch == 'B')
                    {
                        ch = getc(filePointer);
                        if (ch == 'c' || ch == 'C')
                        {
                            ch = getc(filePointer);
                            printf("ABCDEFGHIJKLOMNOPQRSTUVWXYZ");
                        }
                    }
                }
                if (ch == 'p' || ch == 'P')
                {
                    ch = getc(filePointer);
                    if (ch == 'r' || ch == 'R')
                    {
                        ch = getc(filePointer);
                        if (ch == 'i' || ch == 'I')
                        {
                            ch = getc(filePointer);
                            if (ch == 'n' || ch == 'N')
                            {
                                ch = getc(filePointer);
                                if (ch == 't' || ch == 'T')
                                {
                                    int printNum = 0;
                                    char printVar[] = "";
                                    ch = getc(filePointer);
                                    if (ch == ' ')
                                    {
                                        ch = getc(filePointer);
                                        if (ch == '(')
                                        {
                                            ch = getc(filePointer);
                                            while (ch != ')')
                                            {
                                                printVar[printNum] = ch;
                                                printNum++;
                                                ch = getc(filePointer);
                                            }
                                            printf(printVar);
                                        }
                                    }
                                    else if (ch == '(')
                                    {
                                        ch = getc(filePointer);
                                        while (ch != ')')
                                        {
                                            printVar[printNum] = ch;
                                            printNum++;
                                            ch = getc(filePointer);
                                        }
                                        printf(printVar);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    fclose(filePointer);

    return 0;
}