#include <stdio.h>
#include <stdlib.h>

void sortRequests(int requests[], int n)
{
    // Simple bubble sort to sort the requests
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (requests[j] > requests[j + 1])
            {
                int temp = requests[j];
                requests[j] = requests[j + 1];
                requests[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int totalBlocks, currentHead, numRequests;
    char direction;

    // Sample disk requests
    int requests[] = {86, 147, 91, 170, 95, 130, 102, 70};
    numRequests = sizeof(requests) / sizeof(requests[0]);

    // Accept total number of disk blocks, current head position, and direction
    printf("Enter the total number of disk blocks: ");
    scanf("%d", &totalBlocks);

    printf("Enter the current head position: ");
    scanf("%d", &currentHead);

    printf("Enter the direction (L for left, R for right): ");
    scanf(" %c", &direction);

    // Sort the requests
    sortRequests(requests, numRequests);

    // Display the sorted requests
    printf("Sorted Disk Requests: ");
    for (int i = 0; i < numRequests; i++)
    {
        printf("%d ", requests[i]);
    }
    printf("\n");

    // SCAN Disk Scheduling
    int totalHeadMovements = 0;
    int index = 0;

    // Find the index of the current head position
    while (index < numRequests && requests[index] < currentHead)
    {
        index++;
    }

    // If direction is left
    if (direction == 'L' || direction == 'l')
    {
        // Serve requests to the left
        for (int i = index - 1; i >= 0; i--)
        {
            printf("Servicing request: %d\n", requests[i]);
            totalHeadMovements += abs(currentHead - requests[i]);
            currentHead = requests[i];
        }
        // Move to the start of the disk (0)
        totalHeadMovements += currentHead; // Move to 0
        currentHead = 0;

        // Serve requests to the right
        for (int i = 0; i < numRequests; i++)
        {
            if (requests[i] > 0)
            {
                printf("Servicing request: %d\n", requests[i]);
                totalHeadMovements += abs(currentHead - requests[i]);
                currentHead = requests[i];
            }
        }
    }
    // If direction is right
    else if (direction == 'R' || direction == 'r')
    {
        // Serve requests to the right
        for (int i = index; i < numRequests; i++)
        {
            printf("Servicing request: %d\n", requests[i]);
            totalHeadMovements += abs(currentHead - requests[i]);
            currentHead = requests[i];
        }
        // Move to the end of the disk (totalBlocks)
        totalHeadMovements += (totalBlocks - currentHead);
        currentHead = totalBlocks;

        // Serve requests to the left
        for (int i = index - 1; i >= 0; i--)
        {
            printf("Servicing request: %d\n", requests[i]);
            totalHeadMovements += abs(currentHead - requests[i]);
            currentHead = requests[i];
        }
    }

    // Display total head movements
    printf("Total head movements: %d\n", totalHeadMovements);

    return 0;
}