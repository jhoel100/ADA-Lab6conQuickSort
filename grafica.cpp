//gcc -Wall orden.cpp -lm -o grafica

#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	 int NUM_COMANDOS=6;

    char * configGnuplot[] = {"set title \"Promedio VS 1+ln(n): NroDatos VS Valores\"", 
                                "set ylabel \"Veces\"",
                                "set xlabel \"NroDatos\"",
                                "plot \"Maximo.txt\" using 1:2 with lines",
										  "replot \"Log(n)+1.txt\" using 1:2 with lines",
										  "replot \"QuickSort.txt\" using 1:2 with lines"
                               };

    FILE * ventanaGnuplot = popen ("gnuplot -persist", "w");

    // Ejecuta los comandos del GNU Plot uno por uno
    for (int i=0;i<NUM_COMANDOS;i++){
		 fprintf(ventanaGnuplot, "%s \n", configGnuplot[i]);
	 }

    return 0;

}
