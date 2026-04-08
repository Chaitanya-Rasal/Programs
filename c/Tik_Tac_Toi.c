#include <stdio.h>
char place[10] = {' ', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void DisplayGrid();
int Winner();
void main()
{
    int n = 1, player = 0, position;
    char Mark;
    DisplayGrid();
    do
    {
        Mark = (player % 2) ? 'O' : 'X';
        printf("Player %d turn :", player % 2 + 1);
        scanf("%d", &position);
        system("CLS");
        if (position < 1 || position > 9)
            return;
        place[position] = (Mark == 'X') ? 'X' : 'O';
        DisplayGrid();
        if (Winner() == 1)
        {
            printf("Player %d wins !", player % 2 + 1);
            getche();
            return;
        }
        player++;
        n++;
    } while (n <= 9);
    if (n > 9)
    {
        printf("Draw !");
    }
}
void DisplayGrid()
{
    printf("      |      |    \n");
    printf("   %c  |   %c  |   %c\n", place[1], place[2], place[3]);
    printf("______|______|______\n");
    printf("      |      |    \n");
    printf("   %c  |   %c  |   %c\n", place[4], place[5], place[6]);
    printf("______|______|______\n");
    printf("      |      |    \n");
    printf("   %c  |   %c  |   %c\n", place[7], place[8], place[9]);
    printf("      |      |      \n");
}
int Winner()
{
    if (place[1] == place[2] && place[2] == place[3])
        return 1;
    if (place[4] == place[5] && place[5] == place[6])
        return 1;
    if (place[7] == place[8] && place[8] == place[9])
        return 1;
    if (place[1] == place[4] && place[4] == place[7])
        return 1;
    if (place[2] == place[5] && place[5] == place[8])
        return 1;
    if (place[3] == place[6] && place[6] == place[9])
        return 1;
    if (place[1] == place[5] && place[5] == place[9])
        return 1;
    if (place[3] == place[5] && place[5] == place[7])
        return 1;
}