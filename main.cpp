#include <iostream>
#include "function.h"
#include <cmath>


void converter_temperature(){
	int celsiaValue;
	int farengeitValue;
	int kelvinValue;
	Temperature temp;

	int valueTemp;
    std::cout << "Выберите как будем конвертировать: \n";
    std::cout << "1. Цельсии в Фаренгейт\n";
    std::cout << "2. Фаренгейт в Цельсии\n";
    std::cout << "3. Цельсии в Кельвины\n";
    std::cout << "4. Кельвины в Цельсии\n";
    std::cout << "5. Фаренгейты в Кельвины\n";
    std::cout << "6. Кельвины в Фаренгейты\n";
    std::cout << std::endl;   
    std::cout << "Ввод: ";
    std::cin >> valueTemp;
    switch(valueTemp){
    	case 1:
            std::cout << "Температура: ";
    		std::cin >> celsiaValue;
    		std::cout << "Результат: " << temp.celsiaInFarengeit(celsiaValue) << std::endl;
    		break;
    	case 2:
            std::cout << "Температура: ";
			std::cin >> farengeitValue;
			std::cout << "Результат: " << temp.farengeitInCelsia(farengeitValue) << std::endl;
    		break;
    	case 3:
            std::cout << "Температура: ";
			std::cin >> celsiaValue;
			std::cout << "Результат: " << temp.celsiaInKelvin(celsiaValue) << std::endl;
    		break;
    	case 4:
            std::cout << "Температура: ";
			std::cin >> kelvinValue;
			std::cout << "Результат: " << temp.kelvinInCelsia(kelvinValue) << std::endl;
    		break;
    	case 5:
            std::cout << "Температура: ";
			std::cin >> farengeitValue;
			std::cout << "Результат: " << temp.farengeitInKelvin(farengeitValue) << std::endl;
    		break;
    	case 6:
            std::cout << "Температура: ";
			std::cin >> kelvinValue;
			std::cout << "Результат: " << temp.kelvinInFarengeit(kelvinValue) << std::endl;
    		break;
   		default:
   			std::cout << "Error";
   			break;
    }
}

void converterBmi(){
    float massaValue, heightValue;
    std::cout << "Введите рост(см): \n";
    std::cin >> heightValue;
    std::cout << "Введите вес: \n";
    std::cin >> massaValue;

    BMI bmi;
    std::cout << "Результат: " << round(bmi.bodyMassIndex(massaValue, heightValue)) << std::endl;

}
void menu(){
    int choice;
    std::cout << "Выберите конвертер: \n";
    std::cout << "1. Индекс массы тела\n";
    std::cout << "2. Конвертер температур\n";
    std::cin >> choice;
    switch(choice){
        case 1:
            std::cout << "Вы выбрали Индекс массы тела\n";
            converterBmi();
            break;
        case 2:
            std::cout << "Вы выбрали конвертер температур\n";
            converter_temperature();
            break;
        default:
            std::cout << "Error";
   			break;
    }
}


int main(){
	menu();
	return 0;
}
