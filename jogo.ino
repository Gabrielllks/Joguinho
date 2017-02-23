//define qual o pino do jogador 1
#define But1 12
//define qual o pino do jogador 2
#define But2 11
//define led que libera os botões
#define LedCon 13
//define o buzzer
#define Buz 10
//define pinos do display1
#define PA1 2
#define PB1 3
#define PC1 A3
#define PD1 9
#define PE1 8
#define PF1 A4
#define PG1 A5
//define pinos do display2
#define PA2 6
#define PB2 7
#define PC2 A0
#define PD2 A1
#define PE2 A2
#define PF2 5
#define PG2 4


// controle dos botões
boolean AtuBut1; //estado atual
boolean AntBut1; // estado anterior
boolean AtuBut2; //estado atual
boolean AntBut2; //estado anterior

// controle da pontuação //
int Pts1;
int Pts2;

int enq; // variavel controle do loop
int go; // responsavel pela liberação dos botões e acender a led vermelha
int fim;

void setup()
{
  //configura os botões e leds
  pinMode(But1, INPUT_PULLUP);
  pinMode(But2, INPUT_PULLUP);
  pinMode(LedCon, OUTPUT);
  pinMode(Buz, OUTPUT);
  randomSeed(analogRead(A4)); // seleciona a lista do random aleatoriamente sempre que a porta A0 estiver livre

  pinMode(PA1, OUTPUT);
  pinMode(PB1, OUTPUT);
  pinMode(PC1, OUTPUT);
  pinMode(PD1, OUTPUT);
  pinMode(PE1, OUTPUT);
  pinMode(PF1, OUTPUT);
  pinMode(PG1, OUTPUT);

  pinMode(PA2, OUTPUT);
  pinMode(PB2, OUTPUT);
  pinMode(PC2, OUTPUT);
  pinMode(PD2, OUTPUT);
  pinMode(PE2, OUTPUT);
  pinMode(PF2, OUTPUT);
  pinMode(PG2, OUTPUT);

}



void loop()
{
  if (fim == 0) {
    enq = 1;
    num1();
    reset2();
    AtuBut1 = digitalRead(But1);
    AtuBut2 = digitalRead(But2);
    if (AtuBut1 == LOW && AtuBut2 == LOW) {

      fim = 1;
      enq = 0;

    }
  }

  if (enq == 0) { //
    digitalWrite(LedCon, LOW);
    delay(200);
    go = random(10);
    AtuBut1 = digitalRead(But1);
    AtuBut2 = digitalRead(But2);
    delay(10);


  }
  if (go >= 8 && AtuBut1 == HIGH && AtuBut2 == HIGH) {
    enq = 1;

    digitalWrite(LedCon, HIGH);
    AtuBut1 = digitalRead(But1);
    AtuBut2 = digitalRead(But2);
    if (AtuBut1 == LOW) {
      enq = 0;
      digitalWrite(LedCon, LOW);

      Pts1++;

      delay(50);

      delay(1000);

    }
    if (AtuBut2 == LOW) {
      enq = 0;
      digitalWrite(LedCon, LOW);
      delay(30);

      Pts2++;

      delay(50);

      delay(1000);

    }
  }

  delay(10);
  if (Pts1 == 10) {
    int var = 0;
    while (var < 10) {


      var++;
    }
    Pts1 = 0;
    Pts2 = 0;
    fim = 0;
  }
  if (Pts2 == 10) {
    int var = 0;
    while (var < 10) {

      var++;
    }
    Pts1 = 0;
    Pts2 = 0;
    fim = 0;
  }
}




//display A
void reset1()
{
  digitalWrite(PA1, HIGH);
  digitalWrite(PB1, HIGH);
  digitalWrite(PC1, HIGH);
  digitalWrite(PD1, HIGH);
  digitalWrite(PE1, HIGH);
  digitalWrite(PF1, HIGH);
  digitalWrite(PG1, HIGH);

}

void num1() // Número 1.
{
  reset1();
  digitalWrite(PB1, LOW);
  digitalWrite(PC1, LOW);
}

void num2a() // Número 2.
{
  reset1();
  digitalWrite(PA1, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PD1, LOW);
  digitalWrite(PE1, LOW);
  digitalWrite(PG1, LOW);
}

void num3a() // Número 3.
{
  reset1();
  digitalWrite(PA1, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PC1, LOW);
  digitalWrite(PD1, LOW);
  digitalWrite(PG1, LOW);
}

void num4a() // Número 4.
{
  reset1();
  digitalWrite(PB1, LOW);
  digitalWrite(PC1, LOW);
  digitalWrite(PF1, LOW);
  digitalWrite(PG1, LOW);
}

void num5a() // Número 5.
{
  reset1();
  digitalWrite(PA1, LOW);
  digitalWrite(PC1, LOW);
  digitalWrite(PD1, LOW);
  digitalWrite(PF1, LOW);
  digitalWrite(PG1, LOW);
}

void num6a() // Número 6.
{
  reset1();
  digitalWrite(PA1, LOW);
  digitalWrite(PC1, LOW);
  digitalWrite(PD1, LOW);
  digitalWrite(PE1, LOW);
  digitalWrite(PF1, LOW);
  digitalWrite(PG1, LOW);
}

void num7a() // Número 7.
{
  reset1();
  digitalWrite(PA1, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PC1, LOW);
}

void num8a() // Número 8.
{
  reset1();
  digitalWrite(PA1, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PC1, LOW);
  digitalWrite(PD1, LOW);
  digitalWrite(PE1, LOW);
  digitalWrite(PF1, LOW);
  digitalWrite(PG1, LOW);
}

void num9a() // Número 9.
{
  reset1();
  digitalWrite(PA1, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PC1, LOW);
  digitalWrite(PD1, LOW);
  digitalWrite(PF1, LOW);
  digitalWrite(PG1, LOW);
}

void num0a() // Número 0.
{
  reset1();
  digitalWrite(PA1, LOW);
  digitalWrite(PB1, LOW);
  digitalWrite(PC1, LOW);
  digitalWrite(PD1, LOW);
  digitalWrite(PE1, LOW);
  digitalWrite(PF1, LOW);
}
//display b
void reset2()
{
  digitalWrite(PA2, HIGH);
  digitalWrite(PB2, HIGH);
  digitalWrite(PC2, HIGH);
  digitalWrite(PD2, HIGH);
  digitalWrite(PE2, HIGH);
  digitalWrite(PF2, HIGH);
  digitalWrite(PG2, HIGH);

}
void num1b() // Número 1.
{
  reset2();
  digitalWrite(PB2, LOW);
  digitalWrite(PC2, LOW);
}

void num2b() // Número 2.
{
  reset2();
  digitalWrite(PA2, LOW);
  digitalWrite(PB2, LOW);
  digitalWrite(PD2, LOW);
  digitalWrite(PE2, LOW);
  digitalWrite(PG2, LOW);
}

void num3b() // Número 3.
{
  reset2();
  digitalWrite(PA2, LOW);
  digitalWrite(PB2, LOW);
  digitalWrite(PC2, LOW);
  digitalWrite(PD2, LOW);
  digitalWrite(PG2, LOW);
}

void num4b() // Número 4.
{
  reset2();
  digitalWrite(PB2, LOW);
  digitalWrite(PC2, LOW);
  digitalWrite(PF2, LOW);
  digitalWrite(PG2, LOW);
}

void num5b() // Número 5.
{
  reset2();
  digitalWrite(PA2, LOW);
  digitalWrite(PC2, LOW);
  digitalWrite(PD2, LOW);
  digitalWrite(PF2, LOW);
  digitalWrite(PG2, LOW);
}

void num6b() // Número 6.
{
  reset2();
  digitalWrite(PA2, LOW);
  digitalWrite(PC2, LOW);
  digitalWrite(PD2, LOW);
  digitalWrite(PE2, LOW);
  digitalWrite(PF2, LOW);
  digitalWrite(PG2, LOW);
}

void num7b() // Número 7.
{
  reset2();
  digitalWrite(PA2, LOW);
  digitalWrite(PB2, LOW);
  digitalWrite(PC2, LOW);
}

void num8b() // Número 8.
{
  reset2();
  digitalWrite(PA2, LOW);
  digitalWrite(PB2, LOW);
  digitalWrite(PC2, LOW);
  digitalWrite(PD2, LOW);
  digitalWrite(PE2, LOW);
  digitalWrite(PF2, LOW);
  digitalWrite(PG2, LOW);
}

void num9b() // Número 9.
{
  reset2();
  digitalWrite(PA2, LOW);
  digitalWrite(PB2, LOW);
  digitalWrite(PC2, LOW);
  digitalWrite(PD2, LOW);
  digitalWrite(PF2, LOW);
  digitalWrite(PG2, LOW);
}

void num0b() // Número 0.
{
  reset2();
  digitalWrite(PA2, LOW);
  digitalWrite(PB2, LOW);
  digitalWrite(PC2, LOW);
  digitalWrite(PD2, LOW);
  digitalWrite(PE2, LOW);
  digitalWrite(PF2, LOW);
}
