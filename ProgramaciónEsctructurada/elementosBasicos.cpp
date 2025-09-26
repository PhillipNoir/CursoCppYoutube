/**
 * @file elementosBasicos.cpp
 * @author PhillipNoir
 * @brief Demo sencilla de los elementos básicos de C++
 * 
 */

 #include <iostream> 

 int main(){
    const double PI {3.1416};
    int edad {0};
    double estatura {0.0};
    char inicial {'A'};
    bool tieneCasco {false};

    std::cout<<"Bienvenido a nuestro programa básico en C++"<<std::endl;
    std::cout<<"Por favor ingresa tu edad: ";
    std::cin>>edad;
    std::cout<<"Por favor ingresa tu estatura (en metros): ";
    std::cin>>estatura;
    std::cout<<"Por favor ingresa la inicial de tu nombre: ";
    std::cin>>inicial;
    std::cout<<"¿Tienes casco? (1 para sí, 0 para no): ";
    std::cin>>tieneCasco;

    std::cout<<"Resumen de tus datos: "<<std::endl;
    std::cout<<"Edad: "<<edad<<" años"<<std::endl;
    std::cout<<"Estatura: "<<estatura<<" metros"<<std::endl;
    std::cout<<"Inicial de tu nombre: "<<inicial<<std::endl;
    std::cout<<"¿Tienes casco?: "<<tieneCasco<<std::endl;

    std::cout<<"El valor de PI es aproximadamente: "<<PI<<std::endl;
 }