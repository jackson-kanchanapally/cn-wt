
// #include <stdio.h>
// #include <string.h>

// char prol[8][10] = {"E", "A", "A", "T", "B", "B", "F", "F"};
// char pror[8][10] = {"TA", "+TA", "@", "FB", "*FB", "@", "(E)", "i"};
// char prod[8][10] = {"E->TA", "A->+TA", "A->@", "T->FB", "B->*FB", "B->@", "F->(E)", "F->i"};
// char first[8][10] = {"(i", "+", "@", "(i", "*", "@", "(", "i"};
// char follow[8][10] = {"$", "$)", ")$", "+)$", "+)$", "+)$", "*+)$", "*+)$"};
// char table[10][10];

// int numr(char c)
// {
//     switch (c)
//     {
//     case 'E':
//         return 1;
//     case 'A':
//         return 2;
//     case 'T':
//         return 3;
//     case 'B':
//         return 4;
//     case 'F':
//         return 5;
//     case '+':
//         return 1;
//     case '*':
//         return 2;
//     case '(':
//         return 3;
//     case ')':
//         return 4;
//     case 'i':
//         return 5;
//     case '$':
//         return 6;
//     default:
//         break;
//     }
//     return 0;
// }

// int main()
// {
//     int i, j, k;

//     for (i = 0; i < 10; i++)
//         for (j = 0; j < 10; j++)
//             table[i][j] = '\0';

//     printf("The following grammar is used for Parsing Table:\n");

//     for (i = 0; i < 8; i++)
//         printf("%s\n", prod[i]);

//     printf("\nPredictive parsing table:\n");

//     for (i = 0; i < 8; i++)
//     {
//         k = strlen(first[i]);
//         for (j = 0; j < k; j++)
//             if (first[i][j] != '@')
//                 table[numr(prol[i][0])][numr(first[i][j])] = prod[i];
//     }

//     for (i = 0; i < 8; i++)
//     {
//         if (strlen(pror[i]) == 1)
//         {
//             if (pror[i][0] == '@')
//             {
//                 k = strlen(follow[i]);
//                 for (j = 0; j < k; j++)
//                     table[numr(prol[i][0])][numr(follow[i][j])] = prod[i];
//             }
//         }
//     }

//     table[0][0] = ' ';
//     table[0][1] = '+';
//     table[0][2] = '*';
//     table[0][3] = '(';
//     table[0][4] = ')';
//     table[0][5] = 'i';
//     table[0][6] = '$';
//     table[1][0] = 'E';
//     table[2][0] = 'A';
//     table[3][0] = 'T';
//     table[4][0] = 'B';
//     table[5][0] = 'F';

//     printf("\n-------------------------------------------------------------------\n");

//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j < 7; j++)
//         {
//             printf("%-10c", table[i][j]);
//         }
//         printf("\n");
//               printf("\n-------------------------------------------------------------------\n");
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>

char prol[8][10] = {"E", "A", "A", "T", "B", "B", "F", "F"};
char pror[8][10] = {"TA", "+TA", "@", "FB", "*FB", "@", "(E)", "i"};
char prod[8][10] = {"E->TA", "A->+TA", "A->@", "T->FB", "B->*FB", "B->@", "F->(E)", "F->i"};
char first[8][10] = {"(i", "+", "@", "(i", "*", "@", "(", "i"};
char follow[8][10] = {"$", "$)", ")$", "+)$", "+)$", "+)$", "*+)$", "*+)$"};
char table[6][7][10];

int numr(char c)
{
    switch (c)
    {
    case 'E':
        return 1;
    case 'A':
        return 2;
    case 'T':
        return 3;
    case 'B':
        return 4;
    case 'F':
        return 5;
    case '+':
        return 1;
    case '*':
        return 2;
    case '(':
        return 3;
    case ')':
        return 4;
    case 'i':
        return 5;
    case '$':
        return 6;
    default:
        break;
    }
    return 0;
}

int main()
{
    int i, j, k;

    for (i = 0; i < 6; i++)
        for (j = 0; j < 7; j++)
            strcpy(table[i][j], "");

    printf("The following grammar is used for Parsing Table:\n");

    for (i = 0; i < 8; i++)
        printf("%s\n", prod[i]);

    printf("\nPredictive parsing table:\n");

    for (i = 0; i < 8; i++)
    {
        k = strlen(first[i]);
        for (j = 0; j < 10; j++)
        {
            if (first[i][j] != '@')
            {
                int row = numr(prol[i][0]);
                int col = numr(first[i][j]);
                strcpy(table[row][col], prod[i]);
            }
            else{
                k = strlen(follow[i]);
                for(j=0;j<k;j++)
                {
                    int row=numr(prol[i][0]);
                    int col=numr(follow[i][j]);
                    strcpy(table[row][col],prod[i]);
                }
            }
        }
    }


    strcpy(table[0][0], " ");
    strcpy(table[0][1], "+");
    strcpy(table[0][2], "*");
    strcpy(table[0][3], "(");
    strcpy(table[0][4], ")");
    strcpy(table[0][5], "i");
    strcpy(table[0][6], "$");
    strcpy(table[1][0], "E");
    strcpy(table[2][0], "A");
    strcpy(table[3][0], "T");
    strcpy(table[4][0], "B");
    strcpy(table[5][0], "F");

    printf("\n-------------------------------------------------------------------\n");

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%-10s", table[i][j]);
        }
        printf("\n");
        printf("-------------------------------------------------------------------\n");
    }

    printf("-------------------------------------------------------------------\n");

    return 0;
}
