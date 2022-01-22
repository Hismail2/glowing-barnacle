//fore more projects visit www.blackkeyhole.com

#define T_C 1047
#define T_CD 1109
#define T_D 1175
#define T_DE 1245
#define T_E 1319
#define T_F 1397
#define T_FG 1480 
#define T_G 1568
#define T_GA 1661
#define T_A 1760
#define T_B 1976

const int C = 10;
const int CD = 12;
const int D = 9;
const int DE = 13;
const int E = 8;
const int F = 7;
const int FG = 3;
const int G = 6;
const int GA = 2;
const int A = 5;
const int B = 4;

const int Buzz = 11;


void setup()
{
  
  pinMode(C, INPUT);
  digitalWrite(C,HIGH);

  pinMode(CD, INPUT);
  digitalWrite(CD,HIGH);
  
  pinMode(D, INPUT);
  digitalWrite(D,HIGH);

  pinMode(DE, INPUT);
  digitalWrite(DE,HIGH);
  
  pinMode(E, INPUT);
  digitalWrite(E,HIGH);
  
  pinMode(F, INPUT);
  digitalWrite(F,HIGH);

  pinMode(FG, INPUT);
  digitalWrite(FG,HIGH);
  
  pinMode(G, INPUT);
  digitalWrite(G,HIGH);

  pinMode(GA, INPUT);
  digitalWrite(GA,HIGH);
  
  pinMode(A, INPUT);
  digitalWrite(A,HIGH);
  
  pinMode(B, INPUT);
  digitalWrite(B,HIGH);

   
}

void loop()
{
  while(digitalRead(C) == LOW)
  {
    tone(Buzz,T_C);
    
  }

  while(digitalRead(CD) == LOW)
  {
    tone(Buzz,T_CD);
    
  }

  while(digitalRead(D) == LOW)
  {
    tone(Buzz,T_D);
    
  }

  while(digitalRead(DE) == LOW)
  {
    tone(Buzz,T_DE);
    
  }

  while(digitalRead(E) == LOW)
  {
    tone(Buzz,T_E);
    
  }

  while(digitalRead(F) == LOW)
  {
    tone(Buzz,T_F);
    
  }

  while(digitalRead(FG) == LOW)
  {
    tone(Buzz,T_FG);
    
  }

  while(digitalRead(G) == LOW)
  {
    tone(Buzz,T_G);
    
  }

  while(digitalRead(GA) == LOW)
  {
    tone(Buzz,T_GA);
    
  }

  while(digitalRead(A) == LOW)
  {
    tone(Buzz,T_A);
    
  }

  while(digitalRead(B) == LOW)
  {
    tone(Buzz,T_B);
    
  }

  noTone(Buzz);
  

}

