/*You are given an integer 'n'.



Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.



Note:
An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.


Example:
Input: 'n' = 1634

Output: true

Explanation:
1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634*/
bool checkArmstrong(int n){
	//Write your code here
	int x = n;
	int count=0;
	int quo= n;
	int rem,tot=0;
	while(x>0)
	{
		count+=1;
		x=x/10;
	}
	while(quo>0)
	{
		rem=quo%10;
		tot=tot+std::pow(rem,count);
		quo=quo/10;
	}
	return tot==n;

}
