#include <iostream>
#include "function.h"


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

    std::cin >> valueTemp;
    switch(valueTemp){
    	case 1:
    		std::cin >> celsiaValue;
    		std::cout << temp.celsiaInFarengeit(celsiaValue) << std::endl;
    		break;
    	case 2:
			std::cin >> farengeitValue;
			std::cout << temp.farengeitInCelsia(farengeitValue) << std::endl;
    		break;
    	case 3:
			std::cin >> celsiaValue;
			std::cout << temp.celsiaInKelvin(celsiaValue) << std::endl;
    		break;
    	case 4:
			std::cin >> kelvinValue;
			std::cout << temp.kelvinInCelsia(kelvinValue) << std::endl;
    		break;
    	case 5:
			std::cin >> farengeitValue;
			std::cout << temp.farengeitInKelvin(farengeitValue) << std::endl;
    		break;
    	case 6:
			std::cin >> kelvinValue;
			std::cout << temp.kelvinInFarengeit(kelvinValue) << std::endl;
    		break;
   		default:
   			std::cout << "Error";
   			break;		
	    }
	}


void menu(){
	std::cout << "Вы выбрали конвертер температур\n";
	converter_temperature();
}


int main(){
	menu();
	return 0;
}