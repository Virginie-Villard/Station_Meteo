const int LED_ROUGE = 10;
const int LED_JAUNE = 8;
const int LED_VERTE = 6;
const int LED_BLEUE = 4;
const int PHOTO_RESISTENCE = A0;
const int TMP = 2;
const int ANEMOMETRE;

bool jour = false;


void setup() {

  pinMode(PHOTO_RESISTENCE, INPUT);
  pinMode(TMP, INPUT);
  pinMode(ANEMOMETRE, INPUT);
  pinMode (LED_ROUGE, OUTPUT);
  pinMode (LED_JAUNE, OUTPUT);
  pinMode (LED_VERTE, OUTPUT);
  pinMode (LED_BLEUE, OUTPUT);

  Serial.begin(9600);// ouverture port de communication
}

void loop ()
{
  // _____________
  // Jour nuit !
  
  Serial.println("Luminosite : ");
  Serial.println(analogRead(A0));

  if(analogRead(A0) == jour)
  {
    digitalWrite(LED_ROUGE, HIGH);
  }
  else(analogRead(A0) != jour)
  {
    digitalWrite(LED_ROUGE, LOW);
  }

  // _____________
  // Température :
  
  Serial.println("Temperature : ");
  // Temperature = (( Valeur Can * 5 / 1023) - 0.5) /10 * 10 ^ -3
  // Valeur de Can ! fonction linéaire entre 5V et 1023. (règle de 3 pour le basculer d'une valeur à l'autre, entre 5V, 1023, et la valeur que j'analyse).
  // On enlève 0.5 ==> qui est la valeur en Volt associée à la température 0°C. (offset dans la, pour faire des "lots" tous les degrés.
  Serial.println(analogRead(A1));
 doc).
  // Finalement on divise par 10 * 10 ^ -3
  if(TMP

  // _____________
  // Interruption :
  // ANEMOMETRE 

  
    
}

