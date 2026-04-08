#include <stdio.h>
#include <stdlib.h>

// Function to decode the secret message based on the given scheme
char decodeSecretMessage(char encodedMessage)
{
    int recipeNum = encodedMessage - 'A' + 1; // Get the recipe number from the encoded message
    int decodedNum = recipeNum - 3;           // Subtract the constant value

    if (decodedNum <= 0)
    {
        // Handle wrapping around to the end of the recipe list
        decodedNum += 7;
    }

    return decodedNum + 'A' - 1; // Convert the decoded recipe number back to the corresponding letter
}

int main()
{
    int n;
    printf("Enter the number of secret messages: ");
    scanf("%d", &n);

    // Clear the input buffer
    while (getchar() != '\n')
        ;

    printf("Enter the secret messages:\n");
    for (int i = 0; i < n; i++)
    {
        char encodedMessage;
        scanf("%c", &encodedMessage);

        char decodedRecipe = decodeSecretMessage(encodedMessage);
        printf("Decoded Recipe: %c\n", decodedRecipe);
    }

    return 0;
}