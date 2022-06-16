#include <math.h>
#include <stdio.h>
#define N 8
double derive(double x) { return -x * x; }

typedef struct Point {
  double x;
  double y;
} Point;

void m_euler() {
  int i;
  double a, b, x, y, h;
  Point P[N + 1];
  /* {   x           y          */
  /* {0, 0,         0        }, */
  /* {0, res[1][1], res[1][2]}, */
  /* {0, res[2][1], res[2][2]}, */
  /* }*/
  a = 0;
  b = 1;
  y = 1.0;

  // FILE *f1;
  // f1 = fopen("fich.txt", "w");
  h = (b - a) / N;
  x = a;
  P[1].x = a;
  P[1].y = y;
  for (i = 2; i <= N; i++) {
    y = y + h * derive(y);
    x = x + h;
    P[i].x = x;
    P[i].y = y;
  }
  for (i = 1; i <= N; i++) {
    printf("x=%.6lf \t y=%.20e\n", P[i].x, P[i].y);
    // fprintf(f1, "%.6lf                  %.6lf\n", res[i][0], res[i][1]);
  }
  // fclose(f1);
}
int main() {
  m_euler();
  return 0;
}
