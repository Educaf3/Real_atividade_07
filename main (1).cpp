/*#include <iostream>
using namespace std;

typedef struct{
    int hora;
    int min;
}horas;

typedef struct{
    int dia;
    int mes;
    int ano;    
}dat;

typedef struct{
    string nome;
    horas momento;
    dat pano;
}compromisso;

int main(){
    compromisso reuniao;
    reuniao.nome = "PET - saude";
    reuniao.momento.hora = 17;
    reuniao.momento.min = 0;
    reuniao.pano.dia = 26;
    reuniao.pano.mes = 8;
    reuniao.pano.ano = 2025;
    cout <<  reuniao.nome << endl;
    cout << reuniao.momento.hora << ":" << reuniao.momento.min << endl;
    cout << reuniao.pano.dia << "/" << reuniao.pano.mes << "/" << reuniao.pano.ano;
    return 0;
}


#include <iostream>
using namespace std;

typedef struct{
    float x;
    float y;
    float z;
} Vetor;

int main(){
    Vetor resultado;
    Vetor vet1,vet2;
    vet1.x = 1;
    vet2.x = 2;
    vet1.y = 2;
    vet2.y = 3;
    vet1.z = 3;
    vet2.z = 1;
    resultado.x = vet1.x + vet2.x;
    resultado.y = vet1.y + vet2.y;
    resultado.z = vet1.z + vet2.z;
    cout << "X: " << resultado.x << " Y: "<< resultado.y << " Z: " << resultado.z;
    return 0;
}

#include <iostream>
#define N 2
using namespace std;
typedef struct{
    int real;
    int imaginario;
}complex;

void soma(complex (*a),complex (*b),complex (*resultado)){
    (resultado->real)=(a->real) + (b->real);
    (resultado->imaginario) = (a->imaginario) + (b->imaginario);
    
}
void sub(complex (*a),complex (*b),complex (*resultado)){
    (resultado->real) = (a->real) - (b->real);
    (resultado->imaginario) = (a->imaginario) - (b->imaginario);
    
}
void multcomplex (complex (*a),complex (*b),complex (*resultado)){
    complex aux;
    (resultado->real) = (a->real) * (b->real);   
    aux.real = (a->real) * (b->imaginario);
    (resultado->imaginario) = (a->imaginario) * (b->imaginario);
    aux.imaginario = (a->imaginario) * (b->real);
    (resultado->real) += aux.real;
    (resultado->imaginario) += aux.imaginario;
}

int main(){
   complex numero1,numero2,resultado;
   numero1.real = 2;
   numero1.imaginario = 3;
   
   numero2.real = 5;
   numero2.imaginario = -7;
   
   
   sub(&numero1,&numero2,&resultado);
   cout << resultado.real << " " <<resultado.imaginario;
    return 0;
}*/
#include <iostream>
using namespace std;

typedef struct{
    string nome;
    char nip;
    int numero;
}cartas;








