const int POTR = 0;
const int RED = 20;
int rvalue = 0;
const int POTG = 1;
const int POTB = 4;
const int GREEN = 10;
const int BLUE = 8;
int bvalue = 0;
int gvalue = 0;

void setup() 
{
 Serial.begin(115200);
 pinMode(POTR, INPUT);
 pinMode(RED, OUTPUT);
  pinMode(POTG, INPUT);
 pinMode(GREEN, OUTPUT);
  pinMode(POTB, INPUT);
 pinMode(BLUE, OUTPUT);
 
}

void loop() 
{
  rvalue = analogRead(POTR);
  gvalue = analogRead(POTG);
  bvalue = analogRead(POTB);
  analogWrite(RED, (rvalue / 16));
  Serial.print("Red Value");
  Serial.println(rvalue/16);
  analogWrite(GREEN, (gvalue/16));
  Serial.print("Green Value");
  Serial.println(gvalue/16);
  analogWrite(BLUE, (bvalue/16));
  Serial.print("Blue Value");
  Serial.println(bvalue/16);
}
