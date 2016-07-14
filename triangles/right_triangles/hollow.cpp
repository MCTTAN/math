#include <iostream>
using namespace std;

int main()
{
  int size = 0;
  
  cout << "Enter the size of the triangle: ";
  
  cin >> size;
  
  cout << endl;
  
  for(int i = 0; i <= size; ++i)
  {
    for(int j = 0; j <= i; ++j)
    {
      if(i != size)
      {
        if(j == 0 || j == i)
          cout << "* ";
        
        else
          cout << " ";
      }
      
      else if(i == size)
        cout << "* ";
    }
    
    for(int spaces = i; spaces < size; ++spaces)
      cout << " ";
    
    cout << endl;
  }
  
  return 0;
}
