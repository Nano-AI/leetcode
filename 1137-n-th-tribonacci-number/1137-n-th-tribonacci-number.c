int tribonacci(int n){
    if (n == 1 || n == 0) {
        return n;
    }
    if (n == 2) {
        return 1;
    }
    int a = 0;
    int b = 1;
    int c = 1;
    int s = 0;
    for (int i = 1; i <= n-2; i++) {
        s = (a + b + c);
        a = b;
        b = c;
        c = s;
    }
    return c;
}