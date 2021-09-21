#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

int main(){
    clock_t now = clock();
    int* A = new int[1000000];
    for(int i=0; i<1000000; i++){
        A[i] = i*i*i;
    }
    cout << (double)(clock() - now) << ", " << CLOCKS_PER_SEC << endl;
    return EXIT_SUCCESS;
}
