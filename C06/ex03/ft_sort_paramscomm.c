#include <unistd.h>

// Compares two strings
int ft_strcmp(char *str1, char *str2)
{
    int i = 0;
    // Loop through both strings until characters differ or end of any string is reached
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
    {
        i++;
    }
    // Return the difference between the ASCII values of the first differing characters
    return (str1[i] - str2[i]);
}

// Sort an array of strings using bubble sort algorithm
void bubble_sort(char **str, int length)
{
    char *tmp; // Pointer that holds the address of a string for swapping
    int i = 0; // Outer loop counter
    int j;     // Inner loop counter
    while (i < length) // Loop through the entire array
    {
        j = 0; // Reset inner loop counter for each pass

        while (j < (length - 1)) // Loop through array elements up to the second last
        //ensuring we don't go out of bounds << attempting to access elements of the array beyond its valid indices // accessing or manipulating memory outside the allocated boundaries of an array>>
	
	{

            // Compare adjacent strings
            if (ft_strcmp(str[j], str[j + 1]) > 0)
            {
                // Swap the pointers to the strings if they are in the wrong order
                tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
            j++; // Move to the next pair of strings
        }
        i++; // Complete one pass through the array
    }
}

int main(int argc, char **argv)
{
    // Check if there are more than one arguments (excluding the program name)
    if (argc > 1)
    {
        // Sort the arguments using bubble_sort, excluding the program name
        bubble_sort(argv + 1, argc - 1);

        int i = 1; // Initialize index to start from the first argument
        // Loop through each argument
        while (i < argc)
        {
            int j = 0; // Initialize index to start from the first character of the argument
            // Loop through each character in the argument
            while (argv[i][j] != '\0')
            {
                // Write each character to the standard output
                write(1, &argv[i][j], 1);
                j++; // Move to the next character
            }
            // Write a newline character after each argument
            write(1, "\n", 1);
            i++; // Move to the next argument
        }
    }
    return 0; // Return 0 to indicate successful execution
}

