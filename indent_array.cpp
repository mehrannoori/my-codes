// rememb-o-matic
#include <iostream>
//#include <new> useage: int *p = new (nothrow) int [5];
using namespace std;

int main ()
{
  int *p[5];
  int N[5];

  for(int i=0; i<5; i++)
  {
     int n;
     cout << "enter the number of neighbors node " << i << ": ";
     cin >> n;
     p[i] = new int [n];
     N[i] = n;
  }
  cout << "enter neighbors:\n";

  for(int i=0; i<5; i++){
      for(int j=0; j<N[i]; j++)
      {
          cout << "neighbor " << j << " of node " << i << " : ";
          cin >> p[i][j];
      }
  }

  for(int i=0; i<5; i++)
  {
      for(int j=0; j<N[i]; j++)
      {
          cout << p[i][j] << "\t";
      }
      cout << "\n";
  }


  return 0;
}
