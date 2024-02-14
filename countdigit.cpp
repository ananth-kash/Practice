/*Problem statement
You are given a number ’n’.
Find the number of digits of ‘n’ that evenly divide ‘n’.
Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.
Example:
Input: ‘n’ = 336
Output: 3
*/
int countDigits(int n){
	// Write your code here.
	int quo,rem;
	int count = 0;
	quo = n;
	while (quo > 0) {
		rem = quo % 10;
		quo = quo / 10;
		if (rem>0 && n % rem == 0)
		count++;
	}
	return count;