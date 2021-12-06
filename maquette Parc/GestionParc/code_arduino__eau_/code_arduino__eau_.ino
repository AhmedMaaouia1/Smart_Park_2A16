//#define PIN_LED2 13 //le numero de la broche sur laquelle la lampe1 est branchee
int analogPin = A1; // pour le capteur d'eau
char data; //variable contenant le caractére lu
int water;
//int digitalPin = 13; // pour le relais


void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

  //pinMode(PIN_LED2,OUTPUT);
  //digitalWrite(PIN_LED2,LOW);
  Serial.begin(9600); // ouvre le port série
}

void loop() {
  
if (Serial.available())
  {
     water = analogRead(analogPin);
     Serial.println("niveau d'eau");
     Serial.println(water);
    //Si un message a été reçu -> faire ceci
    data= Serial.read();
    //récuperer le caractére reçu

    if(data=='1')
    {
       digitalWrite(13, HIGH);
      //Serial.write(water);
      Serial.write('0'); //envoyer le nouvel état de la pompe
     }
    else if(data=='0')
    {
      analogWrite(13,0);
      //Serial.write(water);
      Serial.write('1'); //envoyer le nouvel état de la pompe
      
    }
 }
  delay(1000); // attend une seconde
}
