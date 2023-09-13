#include "Задача №3.hpp"
#include <iostream>
#include <cstdlib>
#include <random>
#include <cmath>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 100.0);
    
    int n;
    cout << "Введите кол-во чисел в последовательности... ";
    cin >> n;
    
    double mass[n] ;
    double currentSum = 0.0, maxSum = 0.0;
    
    for (int i=0; i<n; i++){
        mass[i] = dis(gen);
        cout <<mass[i]<< ";  ";
    }
    
    for (int i = 0; i < n; i++) {
        if  (mass[i] > mass[i+1]){
            currentSum += mass[i];
        }
            else{
                 currentSum += mass[i];
                if (currentSum > maxSum){ maxSum = currentSum; }
                currentSum = 0;
            }
        }
    
    int maxSumInt = static_cast<int>(maxSum);
    cout << "\nМаксимальная сумма последовательности: "<< maxSumInt << endl;

    return 0;
}
