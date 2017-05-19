#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


 struct tipo{
    int valor1;
    int valor2;
 };

struct tipo LerSensor(s1,s2){
       int tecla;
    tecla = getch();
    struct tipo sensores;


    if(tecla == 'a'){
        s1 = 1;
        s2 = 0;
    }
    else if(tecla == 'd'){
        s1 = 0;
        s2 = 1;
    }
    else if(tecla == 'w'){
        s1 = 1;
        s2 = 1;
    }
    else if(tecla == 's'){
        s1 = 0;
        s2 = 0;
    }

    printf("\n");
    sensores.valor1 = s1;
    sensores.valor2 = s2;
    return sensores;
}
struct tipo IA(a, b){
    int m1,m2;
    struct tipo motors;
    if (a ==1 && b == 0){
            m1 = 1;
            m2 = 0;
    }

    else if (a == 0 && b == 0){
            m1 = 1;
            m2 = 1;
    }
    else {
        m1 = 0;
        m2 = 1;
    }
    motors.valor1 = m1;
    motors.valor2 = m2;
    return motors;

}
int DriveMotors(x,y,a ,b){
    printf(" m1: %d ,m2: %d \n", x, y);
    //printf(" s1: %d ,s2: %d \n", a, b);

}
int FazTudo(){
    while(1){
        //LerSensor
        //struct tipo sensoresF = LerSensor();
       //IA
        //struct tipo motoresF = IA(LerSensor());
        //DriveMotors
        DriveMotors(IA(),LerSensor());

}
}
int main(){
    FazTudo();
}
