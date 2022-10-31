/* DEFINIÇÃO DE PINOS */
int const pinos[] = { 32,  34,  36,  38,  40,  42,  44,  46,  48,  50,  52,  39,  41,  43,  45,  47,  49,  51,  53 };
//                    p    o    n    m    l    k    j    i    h    g    f    e    d    c    b     a   13   12   11   

// Variável global do tipo String chamada len = "com valor vazio";
String len = "";


// protótipo da função que define os pinos
void defPins();

// protótipo da função que faz a leitura do teclado;
void lens();

// protótipo da função que recebe um parametro: (String e) => uma variável
//    do tipo String que vai recerber um valor quando chamada;
void liga(String e);

// protótipo da função que gera um número aleatório para ligar ou desligar um led;
void anima();


// protótipo da função que vamos criar no projeto LP
void cobrinha();


// Função principal de configuração do placa de desenvolvimento;
void setup() {

  // Inicia a porta Serial com a velocidade de 9600
  Serial.begin(9600);

  // chama a função que associa o valor local do pino a uma variável; 
  defPins();
}

// função principal que roda infinitamente;
void loop() {

  // chama a função que faz leitura do porta serial e envia o valor para ligar o led;
  lens();
  // chama a função que acende um led 
  //anima();

  // FUNÇÂO PARA DESENVOLVER HOJE;
 // cobrinha();
  
  
  // espera 200 milisegundos
  delay(200);
}

// FUNÇÂO  defPins
void defPins() {

  // enquanto (cria uma variável do tipo inteiro com o valor 19 ; enquanto a variável for menor ou igual a 0 ; tira -1 da variável ){ }
  for (int i = 19; i >= 0; i--) {

    // define o pino como saída
    pinMode(pinos[i], OUTPUT);
    //espera 10 milisegundos
    delay(10);
  }  // FIM FOR

  for (int i = 19; i >= 0; i--) {
    // desliga a porta digital da placa de desenvolvimento;
    digitalWrite(pinos[i], 0);
  }  //FIM FOR


  for (int i = 19; i >= 0; i--) {
    digitalWrite(pinos[i], 1);
    // imprime o valor de i na porta serial
    Serial.println(i);
    delay(50);
  }


  for (int i = 0; i < 19; i++) {
    digitalWrite(pinos[i], 0);
  }  //FIM FOR

}  //DefPINS

void lens() {

  // se tiver alguma informação na porta serial execute o bloco de código a seguir;
  if (Serial.available()) {     
   // recebe o valor lido no monitor serial; 
  len = Serial.readString();  
  // retira os espaços e informações desnecessárias;
  len.trim();

  // printa o valor de len no monitor serial;
  Serial.println(len);
  
    // chama a função liga ( valor da varável len);
    liga(len);
   // limpa o valor da variável;
    len = "";
  
  }//WHILE
}  // Len

  // FUNÇÃO QUE QUE RECEBE UM PARAMETRO ( UMA VARIÁVEL CHAMADA e)
void liga(String e){
    // se ( e for igual  a "A" )    
    if(e == "A"){    
    //liga porta o pino[18],  lê o valor de pinos[18] e inverte;     
      digitalWrite(pinos[18], !digitalRead(pinos[18]));            

        // a exclamação ( ! ) quando usado em frente de uma variável inverte o sentido dela.
        // se tiver ligado ela desliga, ou se for true fica false;
  }

  if(e == "B"){
     digitalWrite(pinos[17], !digitalRead(pinos[17]));
  }

  if(e == "C"){
     digitalWrite(pinos[16], !digitalRead(pinos[16]));
  }

  // se (variável for igual "a" ou variável  for igual "3");
  if(e == "a" || e == "3"){
     digitalWrite(pinos[15], !digitalRead(pinos[15]));
  }
  if(e == "b"|| e == "4"){
     digitalWrite(pinos[14], !digitalRead(pinos[14]));
  }  
  if(e == "c"|| e == "5"){
     digitalWrite(pinos[13], !digitalRead(pinos[13]));
  }
  if(e == "d"|| e == "6"){
     digitalWrite(pinos[12], !digitalRead(pinos[12]));
  }
  if(e == "e"|| e == "7"){
     digitalWrite(pinos[11], !digitalRead(pinos[11]));
  }
  if(e == "f"|| e == "8"){
     digitalWrite(pinos[10], !digitalRead(pinos[10]));
  }
  if(e == "g"|| e == "9"){
     digitalWrite(pinos[9], !digitalRead(pinos[9]));
  }
  if(e == "h"|| e == "10"){
     digitalWrite(pinos[8], !digitalRead(pinos[8]));
  }
  if(e == "i"|| e == "11"){
     digitalWrite(pinos[7], !digitalRead(pinos[7]));
  }
  if(e == "j"|| e == "12"){
     digitalWrite(pinos[6], !digitalRead(pinos[6]));
  }
  if(e == "13"){
     digitalWrite(pinos[5], !digitalRead(pinos[5]));
  }
  if(e == "l"|| e == "14"){
     digitalWrite(pinos[4], !digitalRead(pinos[4]));
  }
  if(e == "m"|| e == "15"){
     digitalWrite(pinos[3], !digitalRead(pinos[3]));
  }
  if(e == "n"|| e == "16"){
     digitalWrite(pinos[2], !digitalRead(pinos[2]));
  }
  if(e == "o"|| e == "17"){
     digitalWrite(pinos[1], !digitalRead(pinos[1]));
  }
  if(e == "p"|| e == "18"){
     digitalWrite(pinos[0], !digitalRead(pinos[0]));
  }

}//Ativa

void anima(){

  //  variável do tipo arrey de caracteres *valor[]= {"valores"};
  char *valor[]= {"A","B","C","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p"};
 
  // cria uma variavel longa e armazena um
  long num = random(0,18);
  //Serial.print("_ " + String(num));
  liga(valor[num]);

}//

void cobrinha(){

  char *valor[] = {"6","10","14","18","6","17","10","16","14","15","18","11","17","7","16","3","15","4","11","8","7","12","3","13","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",};

}