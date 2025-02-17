#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double x1[n], x2[n], D[n];
    double sin_theta[n], mean_sin_theta = 0.0;
    double N  = 590551 , wavelength;

    for (int i = 0; i < n; i++) {
        printf("Enter x1[%d] (in 10^-3 m): ", i + 1);
        scanf("%lf", &x1[i]);
        printf("Enter x2[%d] (in 10^-3 m): ", i + 1);
        scanf("%lf", &x2[i]);
        printf("Enter D[%d] (in 10^-3 m): ", i + 1);
        scanf("%lf", &D[i]);

        double x = (x1[i] + x2[i]) / 2.0 * 1e-3;
        double d = D[i] * 1e-3;
        sin_theta[i] = x / sqrt(x * x + d * d);

        mean_sin_theta += sin_theta[i];
    }

    mean_sin_theta /= n;



    wavelength = mean_sin_theta / N;

    wavelength *= 1e9;


    printf("\nResults:\n");
    for (int i = 0; i < n; i++) {
        printf("Data Point %d: sin(theta) = %.5f\n", i + 1, sin_theta[i]);
    }
    printf("Mean sin(theta): %.5f\n", mean_sin_theta);
    printf("Calculated Wavelength of the Laser: %.2f nm\n", wavelength);

    return 0;
}
