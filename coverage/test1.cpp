#include<iostream>
#include<math.h>
using namespace std;

bool isCircular;

bool isPrime(int num){
  for (int l=2; l<num; l++)
      if (num%l == 0)
        return false;
  return true;
}

void generate(int pos, int len, int num[], int base[])
{
  if (pos <= len){
    for (int i = 0; i < len; i++){
      num[pos] = base[i];
      //generate(++pos, len, num, base);
    }
  }else{
    int num1 = 0;
     for (int i = 0; i < len; i++)
        num1 += num[i] * pow(10,i);

     cout << num1 << " " << isPrime(num1) << endl;
     isCircular &= isPrime(num1);
  }
}


int main()
{
  int in = 197;
  int arr[100];
  int len = 0;
  isCircular = true;

  int temp = in;
  while (temp > 0){
    int a = temp % 10;
    temp = (temp - a) / 10;
    arr[len] = a;
    len++;
  }

  int num[len];
  generate(0, len, num, arr);

  if (isCircular) cout << "Is circular";
  else cout << "Not circular";
}
