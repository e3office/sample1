const int LED1=2;
const int LED2=3;
const int LED3=4;
const int LED4=5;
const int LED5=6;

const int LEDX_ON=HIGH;
const int LEDX_OFF=LOW;

const int WAIT_TIME_MS=100;

void setup()
{
  digitalWrite(LED1,LEDX_OFF);
  digitalWrite(LED2,LEDX_OFF);
  digitalWrite(LED3,LEDX_OFF);
  digitalWrite(LED4,LEDX_OFF);
  digitalWrite(LED5,LEDX_OFF);

  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
}

void loop()
{
  digitalWrite(LED1,LEDX_ON);
  delay(WAIT_TIME_MS);

  digitalWrite(LED2,LEDX_ON);
  delay(WAIT_TIME_MS);

  digitalWrite(LED3,LEDX_ON);
  delay(WAIT_TIME_MS);

  digitalWrite(LED4,LEDX_ON);
  delay(WAIT_TIME_MS);

  digitalWrite(LED5,LEDX_ON);
  delay(WAIT_TIME_MS);

  digitalWrite(LED1,LEDX_OFF);
  delay(WAIT_TIME_MS);

  digitalWrite(LED2,LEDX_OFF);
  delay(WAIT_TIME_MS);

  digitalWrite(LED3,LEDX_OFF);
  delay(WAIT_TIME_MS);

  digitalWrite(LED4,LEDX_OFF);
  delay(WAIT_TIME_MS);

  digitalWrite(LED5,LEDX_OFF);
  delay(WAIT_TIME_MS);
}
