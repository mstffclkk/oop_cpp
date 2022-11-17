#include <iostream>
using namespace std;
int main(){
	int x;
	int copy_x;
	cout<<"Please enter the number"<<endl;
	cin>>x;
	copy_x = x;
	int digit;
	int check_sum;
	int last_digit;
	while(copy_x>0){
		copy_x = copy_x/10;
		digit++;
	}
	cout<<digit-1<<endl;
	while (digit >= 0){
		last_digit = x%10;
		if (digit%2!=0) // if the last digit is odd, implement the f function and add the result to check_sum
			check_sum += ((2*last_digit)%10 + (2*last_digit)/10); // Update the check_sum
		else // if the last digit is even, add the last digit to check_sum directly
			check_sum += last_digit; // // Update the check_sum
		
		x = x/10; // Discard the last digit and update the account number with remaining part
		digit -=1; // Decrease the digit number
}
	if (check_sum%10 == 0) //If the check sum is multiple of 10, then it is legal.
		cout<<"The account number is legal"<<endl;
	else // Otherwise, it is not legal
		cout<<"The account number is NOT legal"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
