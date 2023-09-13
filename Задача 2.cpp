#include "Задача 2.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));
    int mass[10000] ;
    int count = 0, maxr = -1;
    
    for (int i=0; i<10000; i++){
        mass[i] = rand() % 10000;
    }
    
    for (int i = 0; i < 10000; i++) {
        if  ((abs(mass[i]-mass[i+1]) % 36 == 0) && ((mass[i] % 13 == 0) || (mass[i+1] % 13 ==0))){
            count++;
            if (maxr < (abs(mass[i]-mass[i+1]))){ maxr = abs(mass[i] - mass[i+1]); }
                
        }
        
    }
    cout << "Кол-во: "<< count << endl;
    cout << "Максимальная разность: " << maxr;

    return 0;
}
