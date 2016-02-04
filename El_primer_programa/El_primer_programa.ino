/*************************************************************************************************
 **                                                                                             **
 **                                 BLINK / parpellejar                                         **
 **     S'encén un LED durant un segon, després s'apaga durant un segon, en repetides vegades.  **
 **                                                                                             **
 ************************************************************************************************/


 //la funció de Setup s'executa al prémer reinici o el tauler
void setup() {
//inicialitzar pin digital 13 com una sortida
 pinMode(13, OUTPUT);
}



// La funció de Loop s'executa una vegada i una altra per sempre
void loop() {
 digitalWrite(13, HIGH);      // Encén el LED ( ALTA és el nivell de tensió ) 
 delay(1000);                 // Esperar un segon
 digitalWrite(13, LOW);       // Apagar el LED fent que la tensió BAIXA
 delay(1000);                 // Esperar un segon
}
