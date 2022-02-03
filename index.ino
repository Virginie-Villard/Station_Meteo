const int LED_ROUGE = 10;
const int LED_JAUNE = 8;
const int LED_VERTE = 6;
const int LED_BLEUE = 4;
const int PHOTO_RESISTENCE = A0;
const int TMP = 2;
const int ANEMOMETRE;


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
  Serial.println(analogRead(A0));
}
