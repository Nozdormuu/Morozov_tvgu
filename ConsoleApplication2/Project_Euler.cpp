#include"Project_Euler.h"
#include <vector>
using namespace std;
int zadacha_1() 
{
	int summ = 0;
	for (int i = 0; i < 1000; ++i) 
	{
		if ((i % 3) == 0 || (i % 5) == 0) 
		{
			summ += i;
		}
	}
	return summ;
};


int fib(int i) {
	if (!i) return 0;
	else if (i == 1)return 1;
	else return fib(i - 1) + fib(i- 2);
}

int zadacha_2()
{
	int summ = 0;
	for (int i = 0; i <10000; i++) 
	{
		if (fib(i) % 2 == 0) 
		{
			if (fib(i) < 4000000) 
			{
				summ += fib(i);
				std::cout << summ << std::endl;
			}
		}
		

	}
	return summ;
	

}
int size(int i) {
	int size = 0;
	while (i != 0) {
		
			i = i / 10;
			size += 1;
		

	}
	return size;
}
bool IsPal(int i) {
	 int a= size(i)-1;
	std::vector <int> irr;
	/*cout << "size" << a<<endl;*/
	while (i != 0) {
		int b = i % 10;
		/*cout << "foo" << ' ' << b<<endl;*/
		irr.push_back(b);
		i = i / 10;

	}
	/*for (auto irr : irr) {
		cout << irr<<endl;
	}*/
	bool check=1;
	int c = a;
	
	for (int j = 0; j < a - 1;){
			if (irr[j] == irr[a]) {
				a--;
				j++;

			}
			if ((irr[j] != irr[a])) {
				check = 0;
				break;

			}

		}
	
	
	
	return check;


}

int zadacha_4() {
	int max = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			
				if (IsPal(i * j)) {
					if ((i * j) > max) {
						max = i * j;
						
					}
				}
				

			
		}
		
		

	}
	return max;


}
bool prime(long long n) {
	for (long long i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
int zadacha_3() {
	long long int t = 600851475143;
	long long m = t;
	long long int max = 0;
	
	for (long long int i = 2; i < sqrt(m)+1; i++)
	{
		if (t % i == 0) 
		{
			
			if (prime(i)) 
			{
				max = i;
				t /= i;
				
			}

		}
		
	}
	return max;
}
int zadacha_5() 
{
	int summa = 0;
	for (int j = 20;j<10000000000; j++) {
		int summa = 0;
		for (int i = 1; i <= 20; i++) {
			if (j % i == 0) {
				summa += i;
			}
			if (summa == 210) {
				std::cout << j;
				break;

			}
		}
	}
	return summa;
}