#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//In sample input , the numbers modulo 42 are, 1,2,3,4,5,6,7,8,9,10
  int A, B;
  //cin >> A >> B;
  for (int i = 1; i <= 10; ++i){
  int A = 0;
  int B = 42;
  int answer;
     //answer = i % B;
      answer = i % B;
    
      //cout << answer << endl;
    if (A % B == i){
      continue;
    }
    cout << answer;
      }
    
    //cout << answer << endl;
    
    
    
  return 0;
  
  }
  
