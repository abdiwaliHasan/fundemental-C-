//EXERCISE
#include <iostream>

using namespace std;

int find(int numbers[],int size,int target){
    for (int i = 0; i <size ; ++i)
        if (numbers[i] ==target)
            return i;
    return -1;



}



int main(){
    int numbers[]={10,20,30};
    cout <<find(numbers, size(numbers),target:10);




    return 0;
}