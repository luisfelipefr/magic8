#include <iostream>
#include <cstdlib>

int main(){
  std::cout << "MAGIC 8-BALL:";

  // This sets the “seed” of the random number generator.
  srand(time(NULL));

  // % Returns the remainder.
  int answer = std::rand() % 10;
  std::cout << answer << "\n";

  switch(answer){
    case 0: 
      std::cout << "It is certain. \n";
      break;
    case 1: 
      std::cout << "It is decidedly so. \n";
      break;
    case 2:
      std::cout << "Without a doubt. \n";
      break;
    case 3:
      std::cout << "Yes - definitely. \n";
      break;
    case 4:
      std::cout << "You may rely on it. \n" ;
      break;
    case 5:
      std::cout << "Yes. \n";
      break;
    case 6:
      std::cout << "Ask again later. \n";
      break;
    case 7:
      std::cout << "Don't count on it. \n";
      break;
    case 8:
      std::cout << "My sources say no. \n";
      break;
    case 9:
      std::cout << "Concentrate and ask again. \n";
      break;
    default:
      std::cout << "IDK. \n";
      break;
  }
}