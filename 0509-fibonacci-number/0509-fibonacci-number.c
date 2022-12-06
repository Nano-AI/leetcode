int fib(int n){
    if (n == 0)
        return 0;
    int p = 0, c = 1, t = 0;
    for (int i = 1; i < n; i++) {
        t = p;
        p = c;
        c = t + p;
    }
    return c;
}