#include <iostream>
#include <vector>
using namespace std;

// void refillChai(int cups) {  // Pass by reference
//   cups += 2;
//   cout << "Refilled to " << cups << " cups of chai!" << endl;
// }

// int main() {
//   int chaiCups = 3;
//   refillChai(chaiCups);  // Passing by reference
//   cout << "Total chai cups now: " << chaiCups << endl;
//   return 0;
// }

int main()
{
  vector<int> v = {1, 2, 3, 4, 5, 6};
  vector<int>::iterator it = v.begin();
  // cout << *it<<" "<<endl;
  // it++;
  // ++it;
  // cout << *it;
  cout<<v.back ();
}