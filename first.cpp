#include <iostream>

using namespace std;

int global;

int main( ){

int local;

int *dinam = new int;

cout << "глобальный:"  <<&global<<endl;

cout << "автоматический:" <<&local<<endl;

cout << "динамический:" <<(void*) dinam<<endl;

delete dinam;

return 0;
}

