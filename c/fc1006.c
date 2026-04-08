// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     // int i;
//     // for (i = 1; i < n; i++)
//     // {
//     //     if (i == 1 || i == 4)
//     //     {
//     //         for (int j = 0; j < 3; j++)
//     //         {
//     //             printf("*");
//     //         }
//     //         printf("\n");
//     //     }
//     //     else
//     //     {
//     //         printf("*");
//     //         printf("\n");
//     //     }
//     // }

//     int i, n;
//     printf("enter n");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("*");

//         if (i < n / 2)
//         {
//             for (int j = 0; j < n / 2 - i; j++)
//             {
//                 printf(" ");
//             }
//             printf("*\n");
//         }
//         else
//         {
//             for (int j = 0; j < i - n / 2; j++)
//             {
//                 printf(" ");
//             }
//             printf("*\n");
//         }
//     }
// }
