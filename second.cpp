#include <iostream>

using namespace std;

int main() {

int laba[3]; //одномерный стат массив

    cout<<"одномерный статический массив" <<endl;

    for(int i=0; i<3; i++){ cout << &laba[i] <<endl; 
}
    cout <<endl; int *dinam = new int [3]; // динамический массив со *

    cout << "одномерный динамический массив" << endl;

    for(int i=0; i<3; i++) {

        cout << &dinam[i] <<endl; 
}

    cout << endl;

    int two[2] [3]; //двумерный стат массив

    cout << "двумерный статический массив"<< endl;

    for(int i=0; i<2; i++)

{ 
for(int j=0; j<3; j++){

        cout << &two [i] [j] <<endl; 
}
}
    cout << endl;

 int **second = new int* [3]; // двумерный массив содержит строки которые являются массивами

cout<<"двумерный динамический массив"<<endl;

for (int i=0; i<3;i++) { second[i] = new int [3]; } //i указывает на столбцы

for (int i=0; i<3; i++)

{ 
for (int j=0; j<2; j++)
{

cout << &second [i] [j] << endl; 
}
 
