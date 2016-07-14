#include <iostream>
using namespace std;

int main()
{
  int i, j, rows;
  
  cout << "Enter the number of rows: ";
  
  cin >> rows;
  
  for(i = 0; i < rows; ++i)
  {
    for(j = 0; j < i; ++j)
      cout << j << " ";
      
    cout << endl;
  }
  
  return 0;
}
