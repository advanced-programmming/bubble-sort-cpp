#include<iostream>

using namespace std;

void bubbleSort(int array[], int n);
void print(int array[], int n);

int main(){
    int n = 0;
    cin>>n;
    int array[n];

    for(int i = 0; i < n; i++){
        int value = 0;
        cin>>value;
        array[i] = value;
    }

    bubbleSort(array, n);
    return 0;
}

void bubbleSort(int array[], int n){
    for(int i  = 0; i < (n - 1); i++){
        for(int j = 0; j < ((n - 1) - i); j++){
            if(array[j] > array[(j + 1)]) {
                int aux = array[(j + 1)];
                array[(j+ 1)] = array[j];
                array[j] = aux;
            }
        }
    }

    print(array, n);
}

void print(int array[], int n) {
    for(int i = 0; i < n; i++)
        cout<<"array["<<i<<"] = "<< array[i]<<endl;
}