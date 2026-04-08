#include <stdio.h>
#include <stdlib.h> // For abs() function

int main()
{
    int totalBlocks, currentHead, numRequests;

    // Sample disk requests
    int requests[] = {55, 58, 39, 18, 90, 160, 150, 38, 184};
    numRequests = sizeof(requests) / sizeof(requests[0]);

    // Accept total number of disk blocks and current head position
    printf("Enter the total number of disk blocks: ");
    scanf("%d", &totalBlocks);

    printf("Enter the current head position: ");
    scanf("%d", &currentHead);

    // Display the requests
    printf("Disk Requests: ");
    for (int i = 0; i < numRequests; i++)
    {
        printf("%d ", requests[i]);
    }
    printf("\n");

    // FCFS Disk Scheduling
    int totalHeadMovements = 0;
    int previousHead = currentHead;

    printf("Order of requests served:\n");
    for (int i = 0; i < numRequests; i++)
    {
        printf("Servicing request: %d\n", requests[i]);
        totalHeadMovements += abs(requests[i] - previousHead); // Calculate head movement
        previousHead = requests[i];                            // Update the head position
    }

    // Display total head movements
    printf("Total head movements: %d\n", totalHeadMovements);

    return 0;
}