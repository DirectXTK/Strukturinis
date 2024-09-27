#include <iostream>
#include <cstdint>
#include <string>
#include <cmath>
#include <iomanip>

#define GBP_Bendras 0.8593f
#define GBP_Pirkti 0.8450f
#define GBP_Parduoti 0.9060f
#define USD_Bendras 1.0713f
#define USD_Pirkti 1.0547f
#define USD_Parduoti 1.1309f
#define INR_Bendras 88.8260f
#define INR_Pirkti 85.2614f
#define INR_Parduoti 92.8334f

enum class VALIUTA{USD,GBP,INR,EUR,NONE};
float GetMultAmount(VALIUTA Start,VALIUTA End , std::string& Command){
    float Pirkti[] ={USD_Pirkti,GBP_Pirkti,INR_Pirkti};
  float Parduoti[] ={USD_Parduoti, GBP_Parduoti,INR_Parduoti};
  float Bendras[] ={USD_Bendras, GBP_Bendras,INR_Bendras};

    if(Start == VALIUTA::EUR){
        if(Command == "PIRKTI")
          return Pirkti[uint32_t(End)];
        else if(Command == "PARDUOTI")
          return Parduoti[uint32_t(End)];
        else if(Command == "PALYGINTI")
          return Bendras[uint32_t(End)];
      }else {

        if(Command == "PIRKTI")
          return 1/Pirkti[uint32_t(Start)];
        else if(Command == "PARDUOTI")
          return 1/Parduoti[uint32_t(Start)];
        else if(Command == "PALYGINTI")
          return 1/Bendras[uint32_t(Start)];

        }
  return 0.0f;
  }
  VALIUTA ConvertStringToValiuta(std::string str){
  if(str == "EUR"){
     return VALIUTA::EUR;
  }else if(str == "USD"){
    return VALIUTA::USD;
  }else if(str == "GBP"){
   return VALIUTA::GBP;
  }else if(str == "INR"){
    return VALIUTA::INR;
  }else
    std::cout << "Neteisingai parasete valiuta\n";
  return VALIUTA::NONE;
   }

int main(){

  float StartSum{};

 VALIUTA Start{};
 VALIUTA End{};


  std::string Command{};
  printf("Pasirinkite pradine valiuta EUR,USD,GBP,INR\n");
  std::cin >> Command;
  Start =ConvertStringToValiuta(Command);


  printf("Parasykite kiek pinigu turite\n");
  std::cin >> StartSum;
  printf("Parasykite su kokia valiuta norite daryti veiksmus EUR,USD,GBP,INR\n");
  std::cin >> Command;
  End =ConvertStringToValiuta(Command);


  printf("Parasykite ar norite PIRKTI, PARDUOTI ar PALYGINTI\n");
  std::cin >> Command;

  float MultAmount =GetMultAmount(Start,End,Command);
  std::cout << std::fixed<<std::setprecision(3)<<std::ceil(StartSum*MultAmount*100.f)/100.f;
  switch(End) {
    case VALIUTA::EUR: {
      std::cout << "EUR\n";
      break;
    }case VALIUTA::USD: {
      std::cout << "$\n";
      break;
    }
    case VALIUTA::GBP: {
      std::cout << "GBP\n";
      break;
    }case VALIUTA::INR: {
      std::cout << "INR\n";
      break;
    }
    default : {

    }
  }
  return 0;
}