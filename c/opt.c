#include <stdio.h>

int findOptimal(int pages[], int frames[], int total_pages, int current_index, int total_frames)
{
    int farthest = current_index, replace_index = -1;

    for (int i = 0; i < total_frames; i++)
    {
        int found = 0;
        for (int j = current_index; j < total_pages; j++)
        {
            if (frames[i] == pages[j])
            {
                if (j > farthest)
                {
                    farthest = j;
                    replace_index = i;
                }
                found = 1;
                break;
            }
        }
        if (!found)
        { // If the page is not found in the future
            return i;
        }
    }
    return (replace_index == -1) ? 0 : replace_index;
}

int isInMemory(int frames[], int total_frames, int page)
{
    for (int i = 0; i < total_frames; i++)
    {
        if (frames[i] == page)
        {
            return 1; // Page is already in memory
        }
    }
    return 0; // Page is not in memory
}

int main()
{
    int pages[100], frames[100], total_pages, total_frames, page_faults = 0;

    printf("Enter the number of pages: ");
    scanf("%d", &total_pages);

    printf("Enter the reference string: ");
    for (int i = 0; i < total_pages; i++)
    {
        scanf("%d", &pages[i]);
    }

    printf("Enter the number of frames: ");
    scanf("%d", &total_frames);

    // Initialize frames with -1 (indicating empty)
    for (int i = 0; i < total_frames; i++)
    {
        frames[i] = -1;
    }

    for (int i = 0; i < total_pages; i++)
    {
        if (!isInMemory(frames, total_frames, pages[i]))
        { // If page is not in memory
            page_faults++;

            if (i < total_frames)
            {
                frames[i] = pages[i]; // Fill frames initially
            }
            else
            {
                int replace_index = findOptimal(pages, frames, total_pages, i + 1, total_frames);
                frames[replace_index] = pages[i];
            }
        }

        // Print current status of frames
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

    printf("\nTotal Page Faults: %d\n", page_faults);
    return 0;
}