#include <stdio.h>

/**
 * infinite_add - Adds two strings of numbers.
 * @n1: First number string.
 * @n2: Second number string.
 * @r: Result buffer.
 * @size_r: Buffer size.
 * Return: Pointer to the result string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int a_len = 0, b_len = 0, carry = 0, a, b, sum, biggest;

    // Calculate lengths of n1 and n2
    while (n1[a_len] != '\0')
        a_len++;
    while (n2[b_len] != '\0')
        b_len++;

    // Determine the largest length
    biggest = (a_len > b_len) ? a_len : b_len;

    // Check if result buffer size is sufficient
    if ((biggest + 1) >= size_r)
        return NULL;

    r[biggest + 1] = '\0';

    // Perform addition
    while (biggest >= 0)
    {
        a = (a_len > 0) ? (n1[a_len - 1] - '0') : 0;
        b = (b_len > 0) ? (n2[b_len - 1] - '0') : 0;
        sum = a + b + carry;

        if (sum > 9)
        {
            carry = sum / 10;
            sum = (sum % 10) + '0';
        }
        else
        {
            carry = 0;
            sum += '0';
        }

        r[biggest] = sum;
        a_len--;
        b_len--;
        biggest--;
    }

    // Return the result (skipping leading zeros)
    return (*r != '0') ? r : r + 1;
}

