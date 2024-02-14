/*Problem statement
You are given two integers 'n', and 'm'.
Calculate 'gcd(n,m)', without using library functions.
Note:
The greatest common divisor (gcd) of two numbers 'n' and 'm' is the largest positive number that divides both 'n' and 'm' without leaving a remainder.
Example:
Input: 'n' = 6, 'm' = 4
Output: 2
Explanation:
Here, gcd(4,6) = 2, because 2 is the largest positive integer that divides both 4 and 6.*/

int calcGCD(int n, int m){
    // Write your code here.
    int a,b;
    if(n<m)
    {
        for(int i=1;i<=n;i++)
        {
            if((n%i==0)&&(m%i==0))
            a=i;
        }
    return a;
    }
    else if(m<n)
    {
        for(int j=1;j<=m;j++)
        {
            if((m%j==0)&&(n%j==0))
            b=j;
        }
    return b;
    }
    else
    return m;
}