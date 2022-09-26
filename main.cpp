#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//In sample input , the numbers modulo 42 are, 1,2,3,4,5,6,7,8,9,10
  
  for (int i = 0; i <= 10; ++i){
  int A = 0;
  int B = 42;
  //int answer;
     //answer = i % B;
    if ( i != 1){
      continue;
    }
    cout << (A % B) << endl;
    
    
    }
  return 0;
  
}