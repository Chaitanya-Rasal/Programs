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
    int requests[] = {80, 150, 60, 135, 40, 35, 170};
    numRequests = sizeof(requests) / sizeof(requests[0]);

    // Accept total number of disk blocks, current head position, and direction
    printf("Enter the total number of disk blocks: ");
    scanf("%d", &totalBlocks);

    printf("Enter the current head position: ");
    scanf("%d", &currentHead);

    printf("Enter the direction (R for right, L for left): ");
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

    // C-SCAN Disk Scheduling
    int totalHeadMovements = 0;
    int index = 0;

    // Find the index of the current head position
    while (index < numRequests && requests[index] < currentHead)
    {
        index++;
    }

    // If direction is right
    if (direction == 'R' || direction == 'r')
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
        currentHead = 0; // Jump to the start of the disk

        // Serve requests from the start to the last index
        for (int i = 0; i < index; i++)
        {
            printf("Servicing request: %d\n", requests[i]);
            totalHeadMovements += abs(currentHead - requests[i]);
            currentHead = requests[i];
        }
    }
    // If direction is left
    else if (direction == 'L' || direction == 'l')
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
        currentHead = totalBlocks;         // Jump to the end of the disk

        // Serve requests from the end to the last index
        for (int i = numRequests - 1; i >= index; i--)
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