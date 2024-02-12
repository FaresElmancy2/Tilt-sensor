int sensor=A5;
int motor=3;
void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(sensor,INPUT);
}

void loop()
{
analogWrite(motor,analogRead(sensor));
}