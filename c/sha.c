#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int repeat(char[])
{
    int t, i, j, m;
    for (size_t i = 0; i < count; i++)
    {
    }
}
int main()
{
    int n;
    char **sm;
    printf("Enter the number of secret messages: ");
    scanf("%d", &n);

    // Clear the input buffer
    while (getchar() != '\n')
        ;

    *sm = (char *)malloc(n * sizeof(char));

    printf("Enter the secret messages:\n");
    for (int i = 0; i < n; i++)
    {
        sm[i] = (char *)malloc(50000 * sizeof(char)); // Assuming max message length is 100 characters
        fgets(sm[i], 50000, stdin);

        // Remove newline character if present
        int len = strlen(sm[i]);
        if (len > 0 && sm[i][len - 1] == '\n')
            sm[i][len - 1] = '\0';
    }

    printf("\nRequested Recipes:\n");
    for (int i = 0; i < n; i++)
    {
        char requestedRecipe = repeat(sm[i]); // Assume the recipe is represented by a single letter
        printf("%d: Requested recipe - %c\n", i + 1, requestedRecipe);
        free(sm[i]);
    }
    free(sm);

    return 0;
}