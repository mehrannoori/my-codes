#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, char* argv[]){
    float x=0; float y=0;
    stringstream obj1(argv[1]);
    stringstream obj2(argv[2]);
    obj1 >> x;
    obj2 >> y;
    cout << x + y << endl;

    return EXIT_SUCCESS;
}