#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// void display()
// {
//     int a = 10;
//     static int b = 10;
//     a = a + 1;
//     b = b + 1;
//     printf("a=%d & b=%d \n", a, b);
// }
// void main()
// {
//     // static variable default value =0
//     display();
//     display();
//     display();
// }

// recursion
// factorial of number
// int fact(int n)
// {
//     if (n >= 1)
//     {
//         return n * fact(n - 1);
//     }
//     else
//         return 1;
// }

// void main()
// {
//     int n;
//     printf("entre number ");
//     scanf("%d", &n);
//     printf("factorial of given number is %d", fact(n));
// }

// // even numbers
// void even(int n)
// {
//     if (n <= 10)
//     {
//         printf("%d\n", n);
//         return even(n + 2);
//     }
// }
// void main()
// {
//     int n = 2;
//     even(n);
// }
// fib
//  void fib(int f, int s, int n, int no)
//  {
//      if (no <= 10)
//      {
//          printf("%d\t", f);
//          f = s;
//          s = n;
//          n = f + s;
//          no++;
//          return fib(f, s, n, no);
//      }
//  }
//  void main()
//  {
//      int f = 0, s = 1, n = 1, no = 1;
//      fib(f, s, n, no);
//  }

// formal parametr are local variables , assign value from arguments when function is called
//  actual parameters =when function is called the values that are passed in the call are called arguments

// call by value
// 1.when we call a function by a value it means that we are passing the values of arguments
// which are copied into the formal parameters to the function
// 2.which means that the original values remains unchange and only the parameters in the function change us

// call by refrence
//  1.in this method we passing arguments to a function anfd it will copy the address of arguments into the formal paarameters
// 2.

// example call by value
