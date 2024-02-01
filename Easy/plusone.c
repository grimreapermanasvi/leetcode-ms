/**
 * Note: The returned array must be malloced, assume the caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    int i;
    
    int* result = malloc((digitsSize + 1) * sizeof(int));
    if (!result) return NULL;

    for (i = digitsSize - 1; i >= 0; i--) {
        result[i + 1] = (digits[i] + carry) % 10;
        carry = (digits[i] + carry) / 10;
    }
    if (carry) {
        result[0] = 1;
        *returnSize = digitsSize + 1;
    } else {
        *returnSize = digitsSize;
        memmove(result, result + 1, digitsSize * sizeof(int));
    }

    return result;
}
