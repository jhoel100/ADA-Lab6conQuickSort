//gcc -Wall orden.cpp -lm -o grafica

#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	 system("g++ maximo.cpp -o maximo.out");
	 system("./maximo.out");
	 system("gcc -Wall grafica.cpp -lm -o grafica");

	 system("./grafica");

    return 0;

}
