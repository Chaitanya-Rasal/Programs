#include <stdio.h>

int findLRU(int time[], int n)
{
    int min = time[0], pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (time[i] < min)
        {
            min = time[i];
            pos = i;
        }
    }
    return pos;
}

int isInMemory(int frames[], int n, int page)
{
    for (int i = 0; i < n; i++)
    {
        if (frames[i] == page)
        {
            return 1; // Page is in memory
        }
    }
    return 0; // Page is not in memory
}

int main()
{
    int frames[100], pages[100], time[100] = {0};
    int total_pages, total_frames, page_faults = 0;

    printf("Enter the number of pages: ");
    scanf("%d", &total_pages);
    printf("Enter the reference string: ");
    for (int i = 0; i < total_pages; i++)
    {
        scanf("%d", &pages[i]);
    }
    printf("Enter the number of frames: ");
    scanf("%d", &total_frames);

    for (int i = 0; i < total_frames; i++)
    {
        frames[i] = -1; // Initialize frames with -1
    }

    for (int i = 0; i < total_pages; i++)
    {
        if (!isInMemory(frames, total_frames, pages[i]))
        { // Page fault
            page_faults++;
            if (i < total_frames)
            {
                frames[i] = pages[i]; // Fill empty frame
            }
            else
            {
                int lru_index = findLRU(time, total_frames);
                frames[lru_index] = pages[i]; // Replace LRU page
            }
        }

        // Update time for recently used page
        for (int j = 0; j < total_frames; j++)
        {
            if (frames[j] == pages[i])
            {
                time[j] = i + 1; // Use index as a simple timestamp
            }
        }

        // Print current frames
        printf("Frames after page %d: ", pages[i]);
        for (int j = 0; j < total_frames; j++)
        {
            if (frames[j] == -1)
            {
                printf("- ");
            }
            else
            {
                printf("%d ", frames[j]);
            }
        }
        printf("\n");
    }

    printf("Total Page Faults: %d\n", page_faults);
    return 0;
}