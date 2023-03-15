float distance;
unsigned long duration;

void setup(){
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(2, HIGH);
  delayMicroseconds(5);
  digitalWrite(2, LOW);
  
  duration = pulseIn(3, HIGH);
  distance = (duration/29)/2;
  
  if(distance<=200){
    digitalWrite(4, HIGH);
    tone(5, 100, 125);
  } else{
    digitalWrite(4, LOW);
    noTone(5);
  }
  
  	Serial.println(distance);
}
