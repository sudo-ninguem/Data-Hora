#include <iostream> 
#include <ctime> // Esta é uma biblioteca nativa em C++ para funções com tempo 

int main (){


    time_t HoraAtual = time(0); 

/* time_t é uma classe nativa da vivlioteca ctime justamente para receber hora*/

    tm* MinhaHora = localtime (&HoraAtual); 

/* tm* é uma classe nativa também da biblioteca ctime e serve para converter o time_t, que é em segundos para hora real*/

    std::cout << "A hora agora é: " << MinhaHora ->tm_hour << ":" << MinhaHora ->tm_min << ":" << MinhaHora ->tm_sec << std::endl;  

    std::cout << "Hoje é dia: " << MinhaHora ->tm_mday << "/" << 1 + MinhaHora ->tm_mon << "/" << 1900 + MinhaHora ->tm_year << std::endl; 

/* Repare que quando vamos colocar o ano colocamos + 1900, pois esta função da o ano a partir de 1900.
   Quando colocamos o mês também colocamos +1, pois esta função dos meses, assim como dia da semana, é um Array e como se sabe
   os Arrays começam do indice 0, razão pela qual para que o mês fique de acordo com o calendário Civil devemos acrescentar o (+1) */

    return 0; 
}