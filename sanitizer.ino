int trig = A4;
  int echo = A5;
  int m1 = 2;
  int m2 = 3;
  int mt = 3000;
  int l=5.0;

  float distance (void)
  {
    long long int time;
    float distance ;
    digitalWrite(trig,LOW);
    delayMicroseconds(70);
    digitalWrite(trig,LOW);
    delayMicroseconds(70);
    time=pulseIn(echo,HIGH);
    distance = (time*340.0)/20000.0;
    return distance;
  }
void setup() {
  // put your setup code here, to run once:
  pinMode (trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(distance()<=5)
  {
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    delay(mt);
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    while(distance()<=5)
    {
      
    }
  }
  }
