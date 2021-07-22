const int LED = 8;
const int sound = A0;
const int sound_level=200;

void setup()
{
Serial.begin(9600);
pinMode(LED,OUTPUT);
pinMode(sound,INPUT);
}

void loop() {
int soundsens = analogRead(sound); // reads analog data from sound sensor
Serial.println(soundsens);

if ( soundsens >= sound_level ) {
digitalWrite(LED,HIGH);
delay(1000);
}
else{
digitalWrite(LED,LOW);
}
}
