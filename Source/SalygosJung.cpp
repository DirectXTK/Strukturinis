#include <iostream>
#include <cmath>

void UZD01(){
  int a,b{};
  std::cin >> a >> b;
  float Vidurkis =(a+b)/2.f;
  if(std::round(Vidurkis) >= 5){
    std::cout << "Teigiamas\n";

    }else{
      std::cout << "Neigiamas\n";
      }
  }

void UZD04() {
  int EgzBal{};
  std::cin >> EgzBal;
  switch(EgzBal) {
    case 10: {
      std::cout << "Puiku\n";
      break;
    }
    case 9: {
      std::cout << "Labai gerai\n";
      break;
    }
    case 8: {
      std::cout << "Gerai\n";
      break;
    }
    case 7: {
      std::cout << "Gerai\n";
      break;
    }
    default : {
      std::cout << "Egzaminas neislaikitas\n";
      break;
    }
  }
}
void UZD07() {
for(int i=1;i <= 20;i++ ) {

   if(i%4 ==0)
     std::cout <<i <<" Dalynasi\n";
  else
    std::cout <<i <<" nesidalina\n";

}
}
int main(){
  UZD07();
  return 1;


}