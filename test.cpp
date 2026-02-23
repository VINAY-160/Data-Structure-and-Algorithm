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

// int main()
// {
//   vector<int> v = {1, 2, 3, 4, 5, 6};
//   vector<int>::iterator it = v.begin();
//   // cout << *it<<" "<<endl;
//   // it++;
//   // ++it;
//   // cout << *it;
//   cout<<v.back ();
// }

// int euclidAlgo(int a, int b)
// {
//   int gcd;
//   a = max(a, b);
//   while (b != 0)
//   {
//     gcd = a % b;
//     a = b;
//     b = gcd;
//   }
//   return a;
// }

// int lcm(int a, int b)
// {
//   int lcm;
//   for (int i = 2; i <= max(a, b); i++)
//   {
//     if ((a % i == 0) || (b % i == 0))
//     {
//       lcm *= i;
//     }
//   }
//   return lcm;
// }

// void rev(int n)
// {
//   if (n == 0)
//   {
//     return;
//   }

//   cout << n<<endl;
//   return rev(n-1);
// }

#include <iostream>
using namespace std;

int fib(int n){
    int f = 0, s = 1;

    if(n >= 1) cout << f << ",";
    if(n >= 2) cout << s << ",";

    for(int i = 3; i <= n; i++){
        int next = f + s;
        cout << next << ",";
        f = s;
        s = next;
    }

    return s;   // nth fibonacci return karega
}



int main()
{
  // int gcd = euclidAlgo(24, 18);
  // cout << "GCD OF 0,18 IS: " << gcd;
  // int lcm1 = lcm(24, 18);
  // cout << "\nLCM OF 0,18 IS: " << lcm1;
  // rev(3);
  int n=5;
  int nth=fib(n);
  cout<<"nth term is: "<<nth;
  int arr[]={1,2,3,4};
  cout<<" "<<arr[2-1];

  return 0;
}