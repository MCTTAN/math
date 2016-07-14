#include <iostream>
using namespace std;

int main()
{
  int i, j;
  char input, temp = 'A';
  
  cout << "Enter a character you want in the triangle's last row: ";
  
  cin >> input;
  
  for(i = 1; i <= (toupper(input) - 'A' + 1); ++i)
  {
    for(j = 1; j <= i; ++j)
      cout << temp << " ";
      
    ++temp;
    
    cout << endl;
  }
  
  return 0;
}
