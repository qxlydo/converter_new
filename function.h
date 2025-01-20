#ifndef FUNCTION_H
#define FUNCTION_H


class Temperature{
public:
	float farengeitInCelsia(int farengeit) {
        return (farengeit - 32) * 5.0 / 9.0; 
    }

    float celsiaInFarengeit(int celsia) {
        return (celsia * 9.0 / 5.0) + 32; 
    }

    float kelvinInCelsia(int kelvin) {
        return kelvin - 273.15; 
    }

    float celsiaInKelvin(int celsia) {
        return celsia + 273.15; 
    }

    float kelvinInFarengeit(int kelvin) {
        return (kelvin - 273.15) * 9.0 / 5.0 + 32; 
    }

    float farengeitInKelvin(int farengeit) {
        return (farengeit - 32) * 5.0 / 9.0 + 273.15; 
    }
};

#endif