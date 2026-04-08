#include <stdio.h>
#include <math.h>
int ishappy(int n)
{
    int s, r;
    int original_n = n; // Store the original number for later use
    do
    {
        s = 0; // Reset sum for each iteration
        while (n > 0)
        {
            r = n % 10;
            s += r * r; // Use r * r instead of pow(r, 2)
            n /= 10;
        }
        n = s; // Update n to the new sum
    } while (n != 1 && n != 4); // 4 is known to lead to a cycle
    return (n == 1) ? 1 : 0; // Return 1 if happy, otherwise 0
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", ishappy(n)); // Print result with newline
    return 0;                   // Return 0 to indicate successful execution
}
