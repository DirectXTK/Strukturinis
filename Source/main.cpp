#include<iostream>
#include <cstdint>
void UZD06() {

  int a,b,sum{};

  std::cout <<"Uzduotis 06\nParasykite du dvizenklius skaicius\n";

  std::cin >>a >>b;
  sum +=(a%10+b%10)+(a/10+b/10);
  std::cout << "Skaitmenu suma="<<sum;



}
void UZD05() {
  std::cout <<"Uzduotis 05\nParasykite 5 skaicius\n";

int a1,a2,a3,a4,a5{};
  std::cin >> a1>> a2>>a3>>a4>>a5;
  std::cout <<"Penkiu Skaiciu vidurkis="<< (float)(a1+a2+a3+a4+a5)/5.f;


}
int main() {
  uint32_t NR{};
  std::cout <<"Parasykute uzduoties numeri\n";
  std::cin >> NR;
  switch(NR) {
    case 5: {
      UZD05();
      break;
    }
    case 6: {
      UZD06();
      break;
    }
  }

  return 0;
}
