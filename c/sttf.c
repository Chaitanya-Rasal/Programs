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

    // Sample disk requests
    int requests[] = {186, 89, 44, 70, 102, 22, 51, 124};
    numRequests = sizeof(requests) / sizeof(requests[0]);

    // Accept total number of disk blocks and current head position
    printf("Enter the total number of disk blocks: ");
    scanf("%d", &totalBlocks);

    printf("Enter the current head position: ");
    scanf("%d", &currentHead);

    // Display the initial requests
    printf("Disk Requests: ");
    for (int i = 0; i < numRequests; i++)
    {
        printf("%d ", requests[i]);
    }
    printf("\n");

    // SSTF Disk Scheduling
    int totalHeadMovements = 0;
    int served[numRequests]; // Array to keep track of served requests
    int servedCount = 0;

    while (servedCount < numRequests)
    {
        int closestIndex = -1;
        int closestDistance = totalBlocks; // Initialize with a large number

        // Find the closest request
        for (int i = 0; i < numRequests; i++)
        {
            if (served[i] == 0)
            { // If the request has not been served
                int distance = abs(requests[i] - currentHead);
                if (distance < closestDistance)
                {
                    closestDistance = distance;
                    closestIndex = i;
                }
            }
        }

        // Serve the closest request
        if (closestIndex != -1)
        {
            printf("Servicing request: %d\n", requests[closestIndex]);
            totalHeadMovements += closestDistance;
            currentHead = requests[closestIndex];
            served[closestIndex] = 1; // Mark this request as served
            servedCount++;
        }
    }

    // Display total head movements
    printf("Total head movements: %d\n", totalHeadMovements);

    return 0;
}