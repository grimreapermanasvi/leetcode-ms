double powerHelper(double x, long long n) {
    if (n == 0) {
        return 1.0;
    }

    double result = powerHelper(x * x, n / 2);
    
    if (n % 2 != 0) {
        result *= x;
    }

    return result;
}

double myPow(double x, int n) {
    if (n < 0) {
        x = 1.0 / x;
        return powerHelper(x, -(long long)n);
    }

    return powerHelper(x, n);
}