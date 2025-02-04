#include <iostream>
#include "function.h"


void converter_temperature(){
	int celsiaValue, farengeitValue, kelvinValue;
	Temperature temp;
    while(true) {
        int min = 0;
        int max = 6;
        std::cout << "Выберите как будем конвертировать: \n";
        std::cout << "1. Цельсии в Фаренгейт\n";
        std::cout << "2. Фаренгейт в Цельсии\n";
        std::cout << "3. Цельсии в Кельвины\n";
        std::cout << "4. Кельвины в Цельсии\n";
        std::cout << "5. Фаренгейты в Кельвины\n";
        std::cout << "6. Кельвины в Фаренгейты\n";
        std::cout << "0. Выход\n";
        std::cout << std::endl;   
        std::cout << "Ввод: \n";
        int valueTemp;

        if(valueTemp == 0) {
            break;
        }
        while(!(std::cin >> valueTemp) || !funcValidation(valueTemp, min,max)) {
            std::cout << "Ошибка! Введите правильный ввод ";
            clearInputBuffer();
            continue;
        }

        switch(valueTemp){
        	case 1:
                std::cout << "Температура: ";
        		std::cin >> celsiaValue;
                std::cout << "-----------------------\n";
        		std::cout << "| Результат: | " << temp.celsiaInFarengeit(celsiaValue)<< " |" << std::endl;
                std::cout << "-----------------------\n";
        		break;
        	case 2:
                std::cout << "Температура: ";
    			std::cin >> farengeitValue;
                std::cout << "-----------------------\n";
    			std::cout << "| Результат: | " << temp.farengeitInCelsia(farengeitValue)<< " |" << std::endl;
                std::cout << "-----------------------\n";
        		break;
        	case 3:
                std::cout << "Температура: ";
    			std::cin >> celsiaValue;
                std::cout << "-----------------------\n";
    			std::cout << "| Результат: | " << temp.celsiaInKelvin(celsiaValue)<< " |" << std::endl;
                std::cout << "-----------------------\n";
        		break;
        	case 4:
                std::cout << "Температура: ";
    			std::cin >> kelvinValue;
                std::cout << "-----------------------\n";
    			std::cout << "| Результат: | " << temp.kelvinInCelsia(kelvinValue)<< " |" << std::endl;
                std::cout << "-----------------------\n";
        		break;
        	case 5:
                std::cout << "Температура: ";
    			std::cin >> farengeitValue;
                std::cout << "-----------------------\n";
    			std::cout << "| Результат: | " << temp.farengeitInKelvin(farengeitValue)<< " |" << std::endl;
                std::cout << "-----------------------\n";
        		break;
        	case 6:
                std::cout << "Температура: ";
    			std::cin >> kelvinValue;
                std::cout << "-----------------------\n";
    			std::cout << "| Результат: | " << temp.kelvinInFarengeit(kelvinValue)<< " |" << std::endl;
                std::cout << "-----------------------\n";
        		break;
       		default:
       			std::cout << "Error\n";
       			break;
        }   
    }
}
void converterBmi(){
    int min = 0;
    float massaValue, heightValue;
    std::cout << "Введите рост(см): \n";
    while(!(std::cin >> heightValue) || !funcValidationOne(heightValue, min)) {
            std::cout << "Ошибка! Введите правильный ввод ";
            clearInputBuffer();
            continue;
        }
    std::cout << "Введите вес: \n";
    while(!(std::cin >> massaValue) || !funcValidationOne(massaValue, min)) {
            std::cout << "Ошибка! Введите правильный ввод ";
            clearInputBuffer();
            continue;
        }


    BMI bmi;
    std::cout << "-----------------------\n";
    std::cout << "| Результат: " << bmi.bodyMassIndex(massaValue, heightValue)<<" |" << std::endl;
    std::cout << "-----------------------\n";
}
// Финансы, расчет по кредиту
// 
void convertorFinance(){
    Finance finance;
    int sumCredit, term, min;
    float percent;
    min = 0;
    std::cout << "Сумма кредита: \n";     
    while(!(std::cin >> sumCredit) || !funcValidationOne(sumCredit, min)) {
            std::cout << "Ошибка! Введите правильный ввод ";
            clearInputBuffer();
            continue;
        }
    std::cout << "Процент по кредиту: \n"; 
    while(!(std::cin >> percent) || !funcValidationOne(percent, min)) {
            std::cout << "Ошибка! Введите правильный ввод ";
            clearInputBuffer();
            continue;
        }
    std::cout << "Срок кредита(лет): \n"; 
    while(!(std::cin >> term) || !funcValidationOne(term, min)) {
            std::cout << "Ошибка! Введите правильный ввод ";
            clearInputBuffer();
            continue;
        }
    std::cout << "------------------------------\n";
    std::cout << "Ежемесячный платеж: " << finance.creditMonthlyFee(sumCredit, percent, term) << std::endl;
    std::cout << "------------------------------\n";
    std::cout << "Переплата: " << (term * 12 *finance.creditMonthlyFee(sumCredit, percent, term)) - sumCredit << std::endl;
    std::cout << "------------------------------\n";
    std::cout << "Общая сумма: " << term * 12 *finance.creditMonthlyFee(sumCredit, percent, term) << " \n";
    std::cout << "------------------------------\n";

}

void menu(){
    while(true) {
        int min, max;
        int choice;
        min = 0;
        max = 3;
        std::cout << "Выберите конвертер: \n";
        std::cout << "1. Индекс массы тела\n";
        std::cout << "2. Конвертер температур\n";
        std::cout << "3. Конвертер финансов\n";
        std::cout << "0. Выход\n";

        if(choice == 0) {
            std::cout << "Выход... \n";
            break;

        }
        while(!((std::cin >> choice)) || !funcValidation(choice, min,max)) {
            std::cout << "Ошибка! Введите правильный ввод ";
            clearInputBuffer(); 
            continue;
        }
        switch(choice){
            case 1:
                std::cout << "Вы выбрали Индекс массы тела\n";
                converterBmi();
                break;
            case 2:
                std::cout << "Вы выбрали конвертер температур\n";
                converter_temperature();
                break;
            case 3:
                std::cout << "Вы выбрали конвертер финансов\n";
                convertorFinance();
                break;
            case 0:
                std::cout << "Выход...\n";
            default:
                std::cout << "Error\n";
        			break;
            }
        }
}    
int main(){
	menu();
	return 0;
}
