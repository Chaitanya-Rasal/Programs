// //sum of elements in array
// #include <stdio.h>
// void main()
// {
//     int a[10], sum = 0, n;
//     printf("How many elements in your array(Max 10) : ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter number : ");
//         scanf("%d", &a[i]);
//         sum += a[i];
//     }
//     printf("Sum of elements in array : %d", sum);
// }

// string

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void main()
// {
//     char str[30];
//     printf("Enter string : ");
//     scanf("%s", &str);
//     printf("String is %s ", str);
//     printf("Enter string : ");
//     gets(str);
//     printf("String is ");
//     puts(str);
// }

// string methods
//  1.strcmp-this method use to compare 2 string

// count vowel

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void main()
// {
//     char a[10];
//     int i = 0, cnt = 0;
//     printf("enter name : ");
//     scanf("%s", &a);
//     strupr(a);
//     // printf("%s", a);
//     while (a[i] != '\0')
//     {
//         if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
//         {
//             cnt++;
//         }
//         i++;
//     }
//     printf("Total vowels =%d", cnt);
// }

// login
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char name[10], pass[10];
    printf("Enter Username : ");
    scanf("%s", &name);
    printf("Enter Password : ");
    scanf("%s", &pass);
    if (name == "cr" && pass == "cr")
    {
        printf("Login Successfully....!");
    }
    else
        printf("Invalid Username And Pass");
}