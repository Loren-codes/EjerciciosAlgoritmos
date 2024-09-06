#include <iostream>

using namespace std;

void generarTribonacci(int n) { 
if (n < 1) return;

int t1 = 0, t2 = 1, t3 = 1;
int siguienteTermino;

cout << "La secuencia Tribonacci es de: " << n << " Terminos: " << endl;

if (n >= 1) cout << t1 << " ";
if (n >= 2) cout << t2 << " ";
if (n >= 3) cout << t3 << " ";

for (int i = 4; i <= n; i++) { 
siguienteTermino = t1 + t2 + t3; 
 cout << siguienteTermino << " ";
 t1 = t2;
 t2 = t3;
 t3 = siguienteTermino;
 
}

cout << endl;

}

int  main() { 
     int n;
     
     cout<< "Ingrese el numero de terminos de la secuencia tribonacci: ";
     cin >> n;
     
     generarTribonacci(n);
     
     return 0;
}

