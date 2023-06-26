#include <iostream>



long double factorial(int n);

int trailing_zeros(int n);

int main()
{
	 /* ?\n;||(or) e &&(and)*/


	std::cout << factorial(20) << "\n";
	std::cout << (long long int)factorial(20) << "\n";
	std::cout << trailing_zeros(20) << "\n";

	//long double x = 2.4329e+018;
	//std::cout << (long long int)x << "\n";





	return 0;
}

long double factorial(int n){

	if(n == 0){
		return 1;
	}
	if(n == 1){
		return 1;
	}

	return n*factorial(n-1);

}

int trailing_zeros(int n){

	long long int x = (long long int)factorial(n);
	//std::cout << (long long int)x << "\n";

	//counting the decimal places and the number o zeros
	int c = 0;
	int max = 0;
	while(true){

		if(x < 10){
			break;
		}
		if(x % 10 == 0){
			c++;
			if(c >= max){
				max = c;
			}
		}
		if(x % 10 != 0){
			c = 0;
		}
		x /= 10;
	}
	return max;

}
