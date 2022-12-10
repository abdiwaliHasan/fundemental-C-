//
// Created by HP EliteBook on 12/9/2022.
//

#include "determining.h"
#include "iostream"
using namespace std;
int main() {
    int numbers[]= {10,20,30};
    for (int i = 0; i < sizeof(numbers) / sizeof(int ); ++i)
       cout <<numbers[i] <<endl;
    return 0;
}
