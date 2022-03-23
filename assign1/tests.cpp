#include <iostream>
#include <cmath> 
#include <cstdlib>

int main() {

	int misconducts = 2;
	int misconducts2;

		if(misconducts == 0){
			int misconducts2 = 0;	
		}
		else{
			int misconducts2 = 100*pow(2,(misconducts-1));
		}

	std::cout << misconducts2 << std::endl;


	return 0;


}
