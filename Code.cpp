/**********************
* Автор: Дедушев П.А. *
* Вариант: 4          *    
***********************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  
  const double sigma = 0.074;
  const double gamma = 1.0;
  const double g = 981.0;
  
  cout << fixed << setprecision(3);
  cout << " d (см)\tU (см/с)" << endl;
  cout << "---------------------" << endl;
  
  for (double d = 0.1; d <=3.0; d += 0.1) {
      double U = sqrt((g * d) / 2.0 + (2.0 * g * sigma) / (gamma * d));
      cout << setw(6) << d << "\t" << setw(8) << U << endl;
      
  }
  return 0;
}

