
#include <stdio.h>

int main()
{
    // 1. Declare an array named 'scores' with 10 elements.
    // 2. Initialize 'scores' with the values: 95, 86, 78, 64, 89, 99, 73, 55, 92, 81.
    int scores[10] = {95, 86, 78, 64, 89, 99, 73, 55, 92, 81};

    // 3. Print Array Elements:
    //    For i from 0 to 9:
    //        Print scores[i]
    printf("Array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", scores[i]);
    }
    printf("\n");

    // 4. Calculate Sum and Average:
    //    Initialize sum to 0
    int sum = 0;
    //    For i from 0 to 9:
    //        Add scores[i] to sum
    for (int i = 0; i < 10; i++)
    {
        sum += scores[i];
    }
    //    Calculate average as sum divided by 10
    float average = sum / 10.0;
    //    Print sum
    printf("Sum: %d\n", sum);
    //    Print average
    printf("Average: %.2f\n", average);

    // 5. Find Maximum Value:
    //    Initialize max to scores[0]
    int max = scores[0];
    //    For i from 1 to 9:
    //        If scores[i] is greater than max:
    //            Set max to scores[i]
    for (int i = 1; i < 10; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
        }
    }
    //    Print max
    printf("Maximum value: %d\n", max);

    // 6. Find Minimum Value:
    //    Initialize min to scores[0]
    int min = scores[0];
    //    For i from 1 to 9:
    //        If scores[i] is less than min:
    //            Set min to scores[i]
    for (int i = 1; i < 10; i++)
    {
        if (scores[i] < min)
        {
            min = scores[i];
        }
    }
    //    Print min
    printf("Minimum value: %d\n", min);

    return 0;
}
