// #include <stdio.h>
//  void main()
//  {
//      int n;
//      printf("enter number : ");
//      scanf("%d", &n);
//      if (n % 2 == 0)
//      {
//          printf("even");
//      }
//      else
//          printf("odd");
//  }

// void main()
// {
//     int a, b, c;
//     printf("enter 1st number : ");
//     scanf("%d", &a);
//     printf("enter 2nd number : ");
//     scanf("%d", &b);
//     c = a;
//     a = b;
//     b = c;
//     printf("after swapping \n");
//     printf("a=%d & b=%d", a, b);
// }
// #include <stdio.h>
// void main()
// {
//     int a, b;
//     printf("Enter A : ");
//     scanf("%d", &a);
//     printf("Enter B : ");
//     scanf("%d", &b);
//     printf("Before Swapping \n");
//     printf("A=%d & B=%d\n", a, b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("after swapping \n");
//     printf("A=%d & B=%d", a, b);
// }
#include <stdio.h>
void main()
{
    int n, cnt = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    do
    {
        cnt++;
        n = n / 10;
    } while (n > 0);
    printf("Total Digits in given number is : %d", cnt);
}