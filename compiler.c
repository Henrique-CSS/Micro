#include <stdio.h>
#include <stdlib.h>

int IntId;
char IntName[10][100];
int IntValue[100];
int IntNewVar(int value, char *Name)
{
    IntId++;
    int Id = IntId;
    scanf("%100s", IntName[Id]) = Name;
    IntValue[Id] = value;
}

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
                if (ch == 'i' || ch == 'I')
                {
                    ch = getc(filePointer);
                    if (ch == 'n' || ch == 'N')
                    {
                        ch = getc(filePointer);
                        if (ch == 't' || ch == 'T')
                        {
                            ch = getc(filePointer);
                            if (ch == ' '){
                                int IntVar = 0;
                                int IntCount = 0;
                                ch = getc(filePointer);
                                while (ch != ';'){
                                    
                                }
                            }
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