#include <iostream>
 using namespace std;

void swap(int numbers[],int i,int j){
    int temp=numbers[i];
    numbers[i]=numbers[j];
    numbers[j]=temp;
}

void sort(int numbers[], int size){
    for (int pass = 0; pass <size ; ++pass)
    for (int i = 0; i < size; ++i)
        if (numbers[i]<numbers[i-1]) {
            swap(numbers, i, i - 1);
        }


}
int main() {
    int numbers[] = {30, 20, 10};
    sort(numbers, size(numbers));
    for (int number: numbers)
        cout << number << endl;
    return 0;
}
