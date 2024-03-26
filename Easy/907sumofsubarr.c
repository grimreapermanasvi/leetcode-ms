#define MOD 1000000007
int sumSubarrayMins(int* arr, int arrSize) {
    long long sum =0;
    int stack[arrSize+1],top=-1;
    int left[arrSize],right[arrSize];

    for (int i = 0; i < arrSize; ++i) {
    while (top >= 0 && arr[stack[top]] >= arr[i]) {
           top--;
        }
    left[i] = (top >= 0) ? stack[top] : -1;
    stack[++top] = i;
    }

    top=-1;

    for (int i = arrSize - 1; i >= 0; --i) {
    while (top >= 0 && arr[stack[top]] > arr[i]) {
            top--;
        }
    right[i] = (top >= 0) ? stack[top] : arrSize;
    stack[++top] = i;
    }

    for (int i = 0; i < arrSize; ++i) {
        sum += (long long)(i - left[i]) * (right[i] - i) * arr[i] % MOD;
        sum %= MOD;
    }

    return sum ;
}