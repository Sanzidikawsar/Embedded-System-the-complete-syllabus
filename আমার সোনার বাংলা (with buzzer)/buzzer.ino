#define d1 467
#define D1 494
#define n1 524
#define N1 555
#define S 588
#define r 623
#define R 660
#define g 699
#define G 740
#define M 784
#define m 831
#define P 880
#define d 933
#define D 988
#define n 1047
#define N 1109
#define S1 1175

#define b 150

int speakerPin = 8;
int numTones = 28+28+41;

int tones[] = { M, P, G, M, G, R, S, R, S, n1, D1, D1, n1, S, S, R, G, M, G, R, S, R, n1, S, R, G, R, S, S, S, R, M, M, P, P, S, S, R, M, M, P, P, M, P, P, D, n, D, P, M, P, P, D, n, D, P, S1, S1, S1, n, D, P, D, M, P, M, G, M, G, M, P, G, M, G, R, S, R, S, n1, D1, D1, n1, S, S, R, G, M, G, R, S, R, n1, S, R, G, R, S };

int beat[] = { 2*b, 2*b, 2*b, 2*b, 2*b, 2*b, 2*b, b, b, 2*b, 6*b, 2*b, 2*b, 2*b, b, b, b, b, 2*b, 2*b, b, b, 2*b, 4*b, 2*b, 2*b, 2*b, 8*b, 2*b, 2*b, b, b, 4*b, 2*b, 12*b, 2*b, 2*b, b, b, 4*b, 2*b, 2*b, 2*b, 2*b, 2*b, b, b, 2*b, 2*b, 2*b, 2*b, 2*b, b, b, 2*b, 12*b, 2*b, 2*b, 2*b, 4*b, 2*b, 2*b, 2*b, b, b, 2*b, 2*b, 2*b, b, b, 2*b, 2*b, 2*b, 2*b, 2*b, 2*b, b, b, 2*b, 6*b, 2*b, 2*b, 2*b, b, b, b, b, 2*b, 2*b, b, b, 2*b, 4*b, 2*b, 2*b, 2*b, 8*b};

void setup()
{
  

}

void loop()
{
  for (int i = 0; i < numTones; i++)
  {

    tone(speakerPin, tones[i]);

    delay(beat[i]);
    }
  
  noTone(speakerPin);
  
}