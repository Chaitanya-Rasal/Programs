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
    int requests[] = {176, 79, 34, 60, 92, 11, 41, 114};
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

    // LOOK Disk Scheduling
    int totalHeadMovements = 0;
    int served[numRequests]; // Array to keep track of served requests
    int servedCount = 0;

    // Find the index of the current head position
    int index = 0;
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
            servedCount++;
        }
        // After reaching the end, serve requests to the right
        for (int i = index; i < numRequests; i++)
        {
            printf("Servicing request: %d\n", requests[i]);
            totalHeadMovements += abs(currentHead - requests[i]);
            currentHead = requests[i];
            servedCount++;
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
            servedCount++;
        }
        // After reaching the end, serve requests to the left
        for (int i = index - 1; i >= 0; i--)
        {
            printf("Servicing request: %d\n", requests[i]);
            totalHeadMovements += abs(currentHead - requests[i]);
            currentHead = requests[i];
            servedCount++;
        }
    }

    // Display total head movements
    printf("Total head movements: %d\n", totalHeadMovements);

    return 0;
}