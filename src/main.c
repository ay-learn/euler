#include <math.h>
#include <stdio.h>
#define N 8
double equation_differentiell(double x) { return -x * x; }

void m_euler() {
  int i;
  double a, b, x, y, h;
  double res[N + 1][3];
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
  res[1][1] = a;
  res[1][2] = y;
  for (i = 2; i <= N; i++) {
    y = y + h * equation_differentiell(y);
    x = x + h;
    res[i][1] = x;
    res[i][2] = y;
  }
  for (i = 1; i <= N; i++) {
    printf("x=%.6lf\ty=%.6lf\n", res[i][1], res[i][2]);
    // fprintf(f1, "%.6lf                  %.6lf\n", res[i][0], res[i][1]);
  }
  // fclose(f1);
}
int main() {
  m_euler();
  return 0;
}
