#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_FILES 10 // Maximum number of files
#define BLOCK_SIZE 5 // Number of blocks per file

typedef struct
{
    int blockNumber; // Block number allocated to the file
    int nextBlock;   // Next block in the linked list
} FileEntry;

int *bitVector;                 // Array to represent the bit vector
FileEntry directory[MAX_FILES]; // Directory to hold file entries
int fileCount = 0;              // Number of files created

// Function to initialize the disk with free blocks
void initializeDisk(int n)
{
    bitVector = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        bitVector[i] = 0; // 0 means free, 1 means allocated
    }
}

// Function to show the bit vector
void showBitVector(int n)
{
    printf("Bit Vector: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", bitVector[i]);
    }
    printf("\n");
}

// Function to create a new file
void createNewFile(int n)
{
    if (fileCount >= MAX_FILES)
    {
        printf("Directory is full. Cannot create more files.\n");
        return;
    }

    int startBlock = -1;    // Starting block of the new file
    int previousBlock = -1; // Previous block in the linked list

    // Allocate blocks for the new file
    for (int i = 0; i < BLOCK_SIZE; i++)
    {
        int block = rand() % n; // Random block number
        while (bitVector[block] == 1)
        { // Find a free block
            block = rand() % n;
        }
        bitVector[block] = 1; // Mark block as allocated

        if (startBlock == -1)
        {
            startBlock = block; // First block of the file
        }
        else
        {
            directory[fileCount - 1].nextBlock = block; // Link to the next block
        }

        directory[fileCount].blockNumber = block; // Store block number
        directory[fileCount].nextBlock = -1;      // Initialize nextBlock
        previousBlock = block;
    }

    fileCount++;
    printf("File created with starting block: %d\n", startBlock);
}

// Function to show the directory of files
void showDirectory()
{
    printf("Directory:\n");
    for (int i = 0; i < fileCount; i++)
    {
        printf("File %d: Block %d", i + 1, directory[i].blockNumber);
        int nextBlock = directory[i].nextBlock;
        while (nextBlock != -1)
        {
            printf(" -> %d", nextBlock);
            nextBlock = directory[nextBlock].nextBlock;
        }
        printf("\n");
    }
}

// Main function
int main()
{
    int n;
    printf("Enter the number of blocks in the disk: ");
    scanf("%d", &n);

    initializeDisk(n);
    srand(time(NULL)); // Seed for random number generation

    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Show Bit Vector\n");
        printf("2. Create New File\n");
        printf("3. Show Directory\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showBitVector(n);
            break;
        case 2:
            createNewFile(n);
            break;
        case 3:
            showDirectory();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    free(bitVector); // Free allocated memory
    return 0;
}