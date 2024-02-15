long long sumFirstN(long long n) {
    // Write your code here.
    static int count=1;
    static long long result=0;
    if(count>n)
    return result;
    result+=count;
    count++;
    return sumFirstN(n);
}