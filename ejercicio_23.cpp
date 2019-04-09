#include <fstream>
#include <iostream>
using namespace std;
 
void leer(string filename);

int main () {
  string filename;
  filename = "valores_x.txt";
  leer(filename);

  filename = "valores_y.txt";
  leer(filename);
  return 0;
}
void leer(string filename){
  ifstream infile; 
  string line;
  infile.open(filename);
  double contador = 0.0;
    
    while(infile){
        getline(infile,line);
            contador = contador + atof(line.c_str());
    }
    
    cout << "La suma de la columna es:" << contador << endl; 
    
}