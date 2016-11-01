#include <iostream>
using namespace std;

int subsequence(int *A, int *B, int sizea, int sizeb);

int main()
{
  int *A;
  int *B;
  int sizea;
  int sizeb;

  cout << "How large is A? ";
  cin >> sizea;

  cout << "How large is B? ";
  cin >> sizeb;

  A = new int[sizea];
  B = new int[sizeb];

  cout << "Give me the values of A" << endl;
  for (int i=0; i<sizea; i++)
    {
      cin >> A[i];
    }

  cout << "Give me the values of B" << endl;
  for (int i=0; i<sizeb; i++)
    {
      cin >> B[i];
    }

  int n = subsequence(A,B,sizea,sizeb);

  cout << "The largest prefix of A which is a subsequence "
       << "of B has length " << n << endl;

  return 0;
}

int subsequence(int *A, int *B, int sizea, int sizeb)
{
  int n = 0;
  for(int i = 0; i < sizea; i++){
    if(n != i){ //previous element not in B
      break;
    }
    for(int j = 0; j < sizeb; j++){
      if (A[i] == B[j]){
        n++;
        break;
      }
    }
  }

  return n;
}
