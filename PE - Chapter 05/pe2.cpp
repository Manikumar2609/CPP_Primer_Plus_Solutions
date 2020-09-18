#include <iostream>
#include <array>
const int Ar_Size = 101;

int main()
{
  std::array<long double,Ar_Size> factorials;

   factorials[0] = factorials[1] = 1.0;
   for(int i = 2; i < Ar_Size; i++)
      factorials[i] = i * factorials[i - 1];

   std::cout << "The value of 100! is "<< factorial[100] << ".\n";

    return 0;    
}
