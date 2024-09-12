#include<iostream>
#include <cstdint>
#include <string>
void UZD06() {

  int a,b,sum{};

  std::cout <<"Uzduotis 06\nParasykite du dvizenklius skaicius\n";

  std::cin >>a >>b;
  sum +=(a%10+b%10)+(a/10+b/10);
  std::cout << "Skaitmenu suma="<<sum;



}
void UZD03() {
  std::string Marke{"Volkswagen"};
  std::string Modelis{"Passat"};
  float Variklioturis{1.9};
  uint32_t Metai{2008};

  printf("Automobilis %s %s yra pagamintas %d ir jo motoras %.1f litrazo\n",Marke.c_str(),Modelis.c_str(),Metai,Variklioturis);

}
void UZD02(){
  std::string Pavadinimas = "Kauno zalgiris";
  uint32_t IkurimoMetai = 1990;

  printf("Pavadinimas:%s\nIkurimoMetai:%d\n",Pavadinimas.c_str(),IkurimoMetai);
}
void UZD01(){
 std::string Vardas = "Lukas";
  std::string Pavarde = "Blagadarenka";
  uint32_t Age{55};
  char Grupe = 'A';
  std::string Kursas = "PI";
  printf("Vardas:%s\nPavarde:%s\nAmzius:%d\nGrupe:%c\nKursas:%s\n",Vardas.c_str(),Pavarde.c_str(),Age,Grupe,Kursas.c_str());

}
void UZD05() {
  std::cout <<"Uzduotis 05\nParasykite 5 skaicius\n";

int a1,a2,a3,a4,a5{};
  std::cin >> a1>> a2>>a3>>a4>>a5;
  std::cout <<"Penkiu Skaiciu vidurkis="<< (float)(a1+a2+a3+a4+a5)/5.f;


}
void UZD04() {
  int a,b{};
  float c = 17.5f;

  std::cout << a+b-c << "\n";
  std::cout << 15 / 2 + c << "\n";
  std::cout << a / (double)b + 2 * c << "\n";
  std::cout << 14 % 3 + 6.3 + b / a << "\n";
  std::cout << (int)c % 5+a-b << "\n";
  std::cout << 13.5 / 2 + 4.0 * 3.5 + 18 << "\n";
}
int main() {
  void (*Functions[])(void) ={UZD01,UZD02,UZD03,UZD04,UZD05,UZD06};
  uint32_t NR{};
  std::cout <<"Parasykute uzduoties numeri\n";
  std::cin >> NR;
 if(NR >=1 && NR <=6)
   Functions[NR-1]();

  return 0;
}
