#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int seed;
  int m, n;
  int a[100][100];
  cout << "Enter Row Size 'm': ";
  cin >> m;
  cout << "Enter Row Size 'n': ";
  cin >> n;
  cout << "Enter Random Seed Number: ";
  cin >> seed;

  int x[m][n];
  srand(seed);

  // ToDo
  int div = 0;
  cout << "Array Elements:" << endl;
  for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
        {
          x[i][j] = rand() % 100;
          cout << setw(4) << x[i][j];        //displays the array contents
        }
      cout << endl;
    }

    cout << "Primes From the Array:" << endl;
      for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
        {
            for(int aux = 1 ; aux <= x[i][j] ; aux++)
            {
                if (x[i][j] % aux == 0)
                {
                 div++;
                }
            }

            if (div == 2)
            {
                cout << setw(4) << x[i][j];
            }

            else
            {
                cout << setw(4) << "--";
            }
            div = 0;


    }
          cout << endl;
    }


  return 0;
}