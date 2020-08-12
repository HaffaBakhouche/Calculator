#include <iostream>


int main(int argc, char const *argv[]) {

float num1, num2;
char entry;

  std::cout << "Entrez un opérateur.\nSois + ou - ou * ou / : ";
  std::cin >> entry;

  std::cout << "Entre les deux valeurs que tu souhaites calculer entrée une par une." << '\n';
  std::cin >> num1 >> num2;

  switch (entry) {

    case '+':
             std::cout << "Votre addition est égale à " << num1 + num2 << '\n';
             break;

            case '-':
                      std::cout << "Votre soustraction est égale à " <<  num1 - num2 << '\n';

                      case '*' :
                                 std::cout << " Votre multiplication est égale à " <<  num1 * num2 << '\n';

                                 case '/':
                                          std::cout << "Votre division est égale à " << num1 / num2 << '\n';

    default:

    std::cout << "Erreur opérateur incorrect." << '\n';
    break;
  }
  std::cin.ignore();
  return 0;
}
