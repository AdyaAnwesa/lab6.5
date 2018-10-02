/*
Question 3 (Loops and Logic): The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float m; long s; int n;
	cout<<"Hello, you are now going to see all peculiar numbers that are perfect squares and sum of integer series from 1 to n \n";
	
	//loop for checking all numbers from 1 to range of long
	for(s=0; ; s++){
		m= sqrt(s);
		if (m==int(m)) {//Checking if number is a perfect square or not

			for(n=0; n<s; n++){//for a perfect sqare, loop to find out if it is the sum of any integer series from 1 to n

				if( (n*(n+1))/2 == s ){//formula to check if number is a sum of any integer series from 1 to n

					cout << s << " is a perfect square of " << m << " and it is the sum of integers from 1 to " << n << endl;
				}
			}
	
		}
	}
	return 3;
}
