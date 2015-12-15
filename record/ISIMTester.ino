double a = -10;
double b = 10;
double c = 10;
double d = 10;
double e = 10;
double f = -10;

void timeToLoc(double* x, double* y, double t1, double t2, double t3) {
  x[0] = -(pow(d, 2) * pow(e, 3) - pow(b, 3) * (c - e) * (d - f) - pow(c, 2) * d * e * f - pow(d, 3) * e * f - c * d * pow(e, 2) * f + pow(c, 3) * pow(f, 2) + c * pow(d, 2) * pow(f, 2) + pow(d, 2) * e * pow(f, 2) - c * d * pow(f, 3) -
           115600 * pow(c, 3) * pow(t1, 2) - 115600 * c * pow(d, 2) * pow(t1, 2) + 115600 * pow(c, 2) * e * pow(t1, 2) + 115600 * c * pow(e, 2) * pow(t1, 2) - 115600 * pow(e, 3) * pow(t1, 2) + 115600 * c * d * f * pow(t1, 2) +
           115600 * d * e * f * pow(t1, 2) - 115600 * e * pow(f, 2) * pow(t1, 2) - 115600 * pow(c, 2) * e * t1 * t2 - 115600 * pow(d, 2) * e * t1 * t2 - 115600 * c * pow(e, 2) * t1 * t2 + 231200 * pow(e, 3) * t1 * t2 - 231200 * d * e * f * t1 * t2 +
           115600 * c * pow(f, 2) * t1 * t2 + 231200 * e * pow(f, 2) * t1 * t2 - 13363360000 * c * pow(t1, 3) * t2 + 13363360000 * e * pow(t1, 3) * t2 - 115600 * pow(e, 3) * pow(t2, 2) + 115600 * d * e * f * pow(t2, 2) - 115600 * c * pow(f, 2) * pow(t2, 2) -
           115600 * e * pow(f, 2) * pow(t2, 2) + 13363360000 * c * pow(t1, 2) * pow(t2, 2) - 26726720000 * e * pow(t1, 2) * pow(t2, 2) + 13363360000 * e * t1 * pow(t2, 3) +
           pow(a, 3) * (pow(d, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2 - t3, 2)) + 231200 * pow(c, 3) * t1 * t3 + 231200 * c * pow(d, 2) * t1 * t3 - 115600 * pow(c, 2) * e * t1 * t3 + 115600 * pow(d, 2) * e * t1 * t3 - 115600 * c * pow(e, 2) * t1 * t3 -
           231200 * c * d * f * t1 * t3 - 115600 * c * pow(f, 2) * t1 * t3 + 13363360000 * c * pow(t1, 3) * t3 - 13363360000 * e * pow(t1, 3) * t3 + 115600 * pow(c, 2) * e * t2 * t3 + 115600 * pow(d, 2) * e * t2 * t3 + 115600 * c * pow(e, 2) * t2 * t3 +
           115600 * c * pow(f, 2) * t2 * t3 + 13363360000 * c * pow(t1, 2) * t2 * t3 + 13363360000 * e * pow(t1, 2) * t2 * t3 - 26726720000 * c * t1 * pow(t2, 2) * t3 + 13363360000 * e * t1 * pow(t2, 2) * t3 - 13363360000 * e * pow(t2, 3) * t3 -
           115600 * pow(c, 3) * pow(t3, 2) - 115600 * c * pow(d, 2) * pow(t3, 2) - 115600 * pow(d, 2) * e * pow(t3, 2) + 115600 * c * d * f * pow(t3, 2) - 26726720000 * c * pow(t1, 2) * pow(t3, 2) + 13363360000 * e * pow(t1, 2) * pow(t3, 2) +
           13363360000 * c * t1 * t2 * pow(t3, 2) - 26726720000 * e * t1 * t2 * pow(t3, 2) + 13363360000 * c * pow(t2, 2) * pow(t3, 2) + 13363360000 * e * pow(t2, 2) * pow(t3, 2) + 13363360000 * c * t1 * pow(t3, 3) - 13363360000 * c * t2 * pow(t3, 3) -
           340 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                      (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                      (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
           pow(b, 2) * (pow(c, 3) - pow(c, 2) * e + a * (pow(d, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2 - t3, 2)) +
                        c * (pow(d, 2) - pow(e, 2) + d * f - 2 * pow(f, 2) + 115600 * t1 * t2 - 115600 * pow(t2, 2) - 115600 * t1 * t3 + 115600 * t2 * t3) +
                        e * (-2 * pow(d, 2) + pow(e, 2) + d * f + pow(f, 2) - 115600 * t1 * t2 + 115600 * t1 * t3 + 115600 * t2 * t3 - 115600 * pow(t3, 2))) +
           pow(a, 2) * (-(pow(d, 2) * e) + d * (c + e) * f - 115600 * e * (t1 - t2) * (t2 - t3) - c * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3))) +
           a * (pow(d, 3) * f - pow(d, 2) * (pow(e, 2) + 2 * pow(f, 2) + 115600 * (t1 - t2) * (t1 - t3)) +
                d * f * (pow(c, 2) + pow(e, 2) + pow(f, 2) + 231200 * pow(t1, 2) - 231200 * t1 * t2 - 115600 * pow(t2, 2) - 231200 * t1 * t3 + 462400 * t2 * t3 - 115600 * pow(t3, 2)) - pow(c, 2) * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)) +
                115600 * (t1 - t2) * (pow(f, 2) * (-t1 + t3) - (t2 - t3) * (pow(e, 2) + 115600 * (t1 - t3) * (-t2 + t3)))) +
           b * (-(pow(a, 2) * (c - e) * (d - f)) - 2 * pow(c, 3) * f + pow(c, 2) * e * (d + f) + a * (-pow(d, 3) + pow(d, 2) * f + pow(c, 2) * (-d + f) - f * (pow(e, 2) + pow(f, 2) - 115600 * pow(t2 - t3, 2)) +
                d * (pow(e, 2) + pow(f, 2) + 115600 * pow(t2 - t3, 2))) + e * (pow(d, 3) + pow(d, 2) * f + 115600 * f * pow(t1 - t2, 2) -
                    d * (2 * pow(e, 2) + 2 * pow(f, 2) + 115600 * (pow(t1, 2) - 4 * t1 * t2 + pow(t2, 2) + 2 * t1 * t3 + 2 * t2 * t3 - 2 * pow(t3, 2)))) +
                c * (-2 * pow(d, 2) * f + d * (pow(e, 2) + pow(f, 2) + 115600 * pow(t1 - t3, 2)) + f * (pow(e, 2) + pow(f, 2) - 115600 * (pow(t1, 2) + 2 * t1 * t2 - 2 * pow(t2, 2) - 4 * t1 * t3 + 2 * t2 * t3 + pow(t3, 2)))))) /
         (2.*(-(pow(d, 2) * pow(e, 2)) + 2 * c * d * e * f - pow(c, 2) * pow(f, 2) + 115600 * pow(c, 2) * pow(t1, 2) + 115600 * pow(d, 2) * pow(t1, 2) - 231200 * c * e * pow(t1, 2) + 115600 * pow(e, 2) * pow(t1, 2) - 231200 * d * f * pow(t1, 2) +
              115600 * pow(f, 2) * pow(t1, 2) + 231200 * c * e * t1 * t2 - 231200 * pow(e, 2) * t1 * t2 + 231200 * d * f * t1 * t2 - 231200 * pow(f, 2) * t1 * t2 + 115600 * pow(e, 2) * pow(t2, 2) + 115600 * pow(f, 2) * pow(t2, 2) -
              pow(b, 2) * (pow(c, 2) - 2 * c * e + pow(e, 2) - 115600 * pow(t2 - t3, 2)) - pow(a, 2) * (pow(d, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2 - t3, 2)) - 231200 * pow(c, 2) * t1 * t3 - 231200 * pow(d, 2) * t1 * t3 +
              231200 * c * e * t1 * t3 + 231200 * d * f * t1 * t3 - 231200 * c * e * t2 * t3 - 231200 * d * f * t2 * t3 + 115600 * pow(c, 2) * pow(t3, 2) + 115600 * pow(d, 2) * pow(t3, 2) +
              2 * b * (d * pow(e, 2) + a * (c - e) * (d - f) + pow(c, 2) * f - c * e * (d + f) - 115600 * d * t1 * t2 + 115600 * f * t1 * t2 - 115600 * f * pow(t2, 2) + 115600 * d * t1 * t3 - 115600 * f * t1 * t3 + 115600 * d * t2 * t3 + 115600 * f * t2 * t3 -
                       115600 * d * pow(t3, 2)) + 2 * a * (pow(d, 2) * e - d * (c + e) * f + 115600 * e * (t1 - t2) * (t2 - t3) + c * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)))));
  y[0] = (-(pow(c, 2) * pow(d, 2) * pow(e, 2) * t1) - pow(d, 4) * pow(e, 2) * t1 + c * pow(d, 2) * pow(e, 3) * t1 + pow(c, 3) * d * e * f * t1 + c * pow(d, 3) * e * f * t1 + pow(d, 3) * pow(e, 2) * f * t1 - c * d * pow(e, 3) * f * t1 -
          pow(c, 3) * e * pow(f, 2) * t1 + pow(c, 2) * pow(e, 2) * pow(f, 2) * t1 - pow(c, 2) * d * pow(f, 3) * t1 - c * d * e * pow(f, 3) * t1 + pow(c, 2) * pow(f, 4) * t1 + 115600 * pow(c, 2) * pow(d, 2) * pow(t1, 3) +
          115600 * pow(d, 4) * pow(t1, 3) - 115600 * c * pow(d, 2) * e * pow(t1, 3) - 115600 * pow(c, 2) * d * f * pow(t1, 3) - 231200 * pow(d, 3) * f * pow(t1, 3) + 115600 * d * pow(e, 2) * f * pow(t1, 3) + 115600 * c * e * pow(f, 2) * pow(t1, 3) -
          115600 * pow(e, 2) * pow(f, 2) * pow(t1, 3) + 231200 * d * pow(f, 3) * pow(t1, 3) - 115600 * pow(f, 4) * pow(t1, 3) - pow(c, 2) * d * pow(e, 2) * f * t2 - pow(d, 3) * pow(e, 2) * f * t2 + c * d * pow(e, 3) * f * t2 +
          pow(c, 3) * e * pow(f, 2) * t2 + c * pow(d, 2) * e * pow(f, 2) * t2 - pow(c, 2) * pow(e, 2) * pow(f, 2) * t2 + c * d * e * pow(f, 3) * t2 - pow(c, 2) * pow(f, 4) * t2 - 115600 * pow(d, 2) * pow(e, 2) * pow(t1, 2) * t2 +
          231200 * pow(c, 2) * d * f * pow(t1, 2) * t2 + 231200 * pow(d, 3) * f * pow(t1, 2) * t2 + 115600 * c * d * e * f * pow(t1, 2) * t2 - 115600 * d * pow(e, 2) * f * pow(t1, 2) * t2 - 115600 * pow(c, 2) * pow(f, 2) * pow(t1, 2) * t2 -
          115600 * pow(d, 2) * pow(f, 2) * pow(t1, 2) * t2 - 346800 * c * e * pow(f, 2) * pow(t1, 2) * t2 + 346800 * pow(e, 2) * pow(f, 2) * pow(t1, 2) * t2 - 462400 * d * pow(f, 3) * pow(t1, 2) * t2 + 346800 * pow(f, 4) * pow(t1, 2) * t2 +
          13363360000 * pow(d, 2) * pow(t1, 4) * t2 - 26726720000 * d * f * pow(t1, 4) * t2 + 13363360000 * pow(f, 2) * pow(t1, 4) * t2 + 115600 * pow(d, 2) * pow(e, 2) * t1 * pow(t2, 2) - 115600 * c * d * e * f * t1 * pow(t2, 2) -
          115600 * d * pow(e, 2) * f * t1 * pow(t2, 2) + 115600 * pow(c, 2) * pow(f, 2) * t1 * pow(t2, 2) + 115600 * pow(d, 2) * pow(f, 2) * t1 * pow(t2, 2) + 346800 * c * e * pow(f, 2) * t1 * pow(t2, 2) - 346800 * pow(e, 2) * pow(f, 2) * t1 * pow(t2, 2) +
          231200 * d * pow(f, 3) * t1 * pow(t2, 2) - 346800 * pow(f, 4) * t1 * pow(t2, 2) - 13363360000 * pow(d, 2) * pow(t1, 3) * pow(t2, 2) + 53453440000 * d * f * pow(t1, 3) * pow(t2, 2) - 40090080000 * pow(f, 2) * pow(t1, 3) * pow(t2, 2) +
          115600 * d * pow(e, 2) * f * pow(t2, 3) - 115600 * c * e * pow(f, 2) * pow(t2, 3) + 115600 * pow(e, 2) * pow(f, 2) * pow(t2, 3) + 115600 * pow(f, 4) * pow(t2, 3) - 26726720000 * d * f * pow(t1, 2) * pow(t2, 3) +
          40090080000 * pow(f, 2) * pow(t1, 2) * pow(t2, 3) - 13363360000 * pow(f, 2) * t1 * pow(t2, 4) + pow(b, 4) * (pow(c, 2) - 2 * c * e + pow(e, 2) - 115600 * pow(t2 - t3, 2)) * (t2 - t3) + pow(c, 2) * pow(d, 2) * pow(e, 2) * t3 +
          pow(d, 4) * pow(e, 2) * t3 - c * pow(d, 2) * pow(e, 3) * t3 - pow(c, 3) * d * e * f * t3 - c * pow(d, 3) * e * f * t3 + pow(c, 2) * d * pow(e, 2) * f * t3 - c * pow(d, 2) * e * pow(f, 2) * t3 + pow(c, 2) * d * pow(f, 3) * t3 -
          346800 * pow(c, 2) * pow(d, 2) * pow(t1, 2) * t3 - 346800 * pow(d, 4) * pow(t1, 2) * t3 + 346800 * c * pow(d, 2) * e * pow(t1, 2) * t3 + 115600 * pow(d, 2) * pow(e, 2) * pow(t1, 2) * t3 + 115600 * pow(c, 2) * d * f * pow(t1, 2) * t3 +
          462400 * pow(d, 3) * f * pow(t1, 2) * t3 - 115600 * c * d * e * f * pow(t1, 2) * t3 - 231200 * d * pow(e, 2) * f * pow(t1, 2) * t3 + 115600 * pow(c, 2) * pow(f, 2) * pow(t1, 2) * t3 + 115600 * pow(d, 2) * pow(f, 2) * pow(t1, 2) * t3 -
          231200 * d * pow(f, 3) * pow(t1, 2) * t3 - 13363360000 * pow(d, 2) * pow(t1, 4) * t3 + 26726720000 * d * f * pow(t1, 4) * t3 - 13363360000 * pow(f, 2) * pow(t1, 4) * t3 - 462400 * pow(c, 2) * d * f * t1 * t2 * t3 - 462400 * pow(d, 3) * f * t1 * t2 * t3 +
          462400 * d * pow(e, 2) * f * t1 * t2 * t3 + 462400 * d * pow(f, 3) * t1 * t2 * t3 - 26726720000 * pow(d, 2) * pow(t1, 3) * t2 * t3 + 26726720000 * pow(f, 2) * pow(t1, 3) * t2 * t3 - 115600 * pow(d, 2) * pow(e, 2) * pow(t2, 2) * t3 +
          115600 * c * d * e * f * pow(t2, 2) * t3 - 231200 * d * pow(e, 2) * f * pow(t2, 2) * t3 - 115600 * pow(c, 2) * pow(f, 2) * pow(t2, 2) * t3 - 115600 * pow(d, 2) * pow(f, 2) * pow(t2, 2) * t3 - 231200 * d * pow(f, 3) * pow(t2, 2) * t3 +
          40090080000 * pow(d, 2) * pow(t1, 2) * pow(t2, 2) * t3 - 80180160000 * d * f * pow(t1, 2) * pow(t2, 2) * t3 + 53453440000 * d * f * t1 * pow(t2, 3) * t3 - 26726720000 * pow(f, 2) * t1 * pow(t2, 3) * t3 + 13363360000 * pow(f, 2) * pow(t2, 4) * t3 +
          346800 * pow(c, 2) * pow(d, 2) * t1 * pow(t3, 2) + 346800 * pow(d, 4) * t1 * pow(t3, 2) - 346800 * c * pow(d, 2) * e * t1 * pow(t3, 2) - 115600 * pow(d, 2) * pow(e, 2) * t1 * pow(t3, 2) + 115600 * pow(c, 2) * d * f * t1 * pow(t3, 2) -
          231200 * pow(d, 3) * f * t1 * pow(t3, 2) + 115600 * c * d * e * f * t1 * pow(t3, 2) - 115600 * pow(c, 2) * pow(f, 2) * t1 * pow(t3, 2) - 115600 * pow(d, 2) * pow(f, 2) * t1 * pow(t3, 2) + 40090080000 * pow(d, 2) * pow(t1, 3) * pow(t3, 2) -
          53453440000 * d * f * pow(t1, 3) * pow(t3, 2) + 13363360000 * pow(f, 2) * pow(t1, 3) * pow(t3, 2) + 115600 * pow(d, 2) * pow(e, 2) * t2 * pow(t3, 2) + 231200 * pow(c, 2) * d * f * t2 * pow(t3, 2) + 231200 * pow(d, 3) * f * t2 * pow(t3, 2) -
          115600 * c * d * e * f * t2 * pow(t3, 2) + 115600 * pow(c, 2) * pow(f, 2) * t2 * pow(t3, 2) + 115600 * pow(d, 2) * pow(f, 2) * t2 * pow(t3, 2) + 80180160000 * d * f * pow(t1, 2) * t2 * pow(t3, 2) -
          40090080000 * pow(f, 2) * pow(t1, 2) * t2 * pow(t3, 2) - 40090080000 * pow(d, 2) * t1 * pow(t2, 2) * pow(t3, 2) + 40090080000 * pow(f, 2) * t1 * pow(t2, 2) * pow(t3, 2) - 26726720000 * d * f * pow(t2, 3) * pow(t3, 2) -
          13363360000 * pow(f, 2) * pow(t2, 3) * pow(t3, 2) - 115600 * pow(c, 2) * pow(d, 2) * pow(t3, 3) - 115600 * pow(d, 4) * pow(t3, 3) + 115600 * c * pow(d, 2) * e * pow(t3, 3) - 115600 * pow(c, 2) * d * f * pow(t3, 3) -
          40090080000 * pow(d, 2) * pow(t1, 2) * pow(t3, 3) + 26726720000 * d * f * pow(t1, 2) * pow(t3, 3) + 26726720000 * pow(d, 2) * t1 * t2 * pow(t3, 3) - 53453440000 * d * f * t1 * t2 * pow(t3, 3) +
          13363360000 * pow(d, 2) * pow(t2, 2) * pow(t3, 3) + 26726720000 * d * f * pow(t2, 2) * pow(t3, 3) + 13363360000 * pow(d, 2) * t1 * pow(t3, 4) - 13363360000 * pow(d, 2) * t2 * pow(t3, 4) +
          pow(a, 3) * (c - e) * (d - f) * (f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3)) - 340 * c * t1 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
              (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
              (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
          340 * e * t1 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                              (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                              (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) -
          340 * e * t2 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                              (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                              (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
          340 * c * t3 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                              (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                              (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
          pow(b, 3) * (f * (t1 - t2) * (pow(e, 2) - 231200 * pow(t2 - t3, 2)) - d * (pow(e, 2) * (t1 + t2 - 2 * t3) - 231200 * (t1 - t3) * pow(t2 - t3, 2)) + c * e * (d * (2 * t1 + t2 - 3 * t3) - f * (2 * t1 - 3 * t2 + t3)) +
                       pow(c, 2) * (d * (-t1 + t3) + f * (t1 - 2 * t2 + t3))) + pow(b, 2) * (pow(c, 3) * e * (t2 - t3) + pow(c, 2) * (d * f * (t1 - t3) - (2 * pow(e, 2) + 115600 * (t1 - t2) * (t1 - t3)) * (t2 - t3) + pow(f, 2) * (-t1 + t3)) +
                           (t1 - t2) * (-115600 * (pow(e, 2) + pow(f, 2) - 115600 * pow(t2 - t3, 2)) * (t1 - t3) * (t2 - t3) + pow(d, 2) * (pow(e, 2) + 115600 * (t1 - t3) * (-t2 + t3)) - d * f * (pow(e, 2) + 231200 * (t1 - t3) * (-t2 + t3))) +
                           c * e * (pow(d, 2) * (-t1 + t2) + pow(f, 2) * (t1 - t3) + d * f * (-t2 + t3) + (t2 - t3) * (pow(e, 2) + 115600 * (2 * pow(t1, 2) - pow(t2, 2) + 4 * t2 * t3 - pow(t3, 2) - 2 * t1 * (t2 + t3))))) +
          b * (pow(c, 3) * e * (d * (-t1 + t3) + f * (t1 - 2 * t2 + t3)) - pow(d, 2) * f * (t1 - t2) * (pow(e, 2) + 231200 * (t1 - t3) * (-t2 + t3)) + pow(d, 3) * (pow(e, 2) * (t1 + t2 - 2 * t3) + 231200 * pow(t1 - t3, 2) * (-t2 + t3)) -
               115600 * f * pow(t1 - t2, 2) * (pow(e, 2) * (t1 + t2 - 2 * t3) + 2 * (t2 - t3) * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3))) +
               115600 * d * (t1 - t2) * (pow(e, 2) * (pow(t1, 2) + pow(t2, 2) - 2 * t1 * t3 - 2 * t2 * t3 + 2 * pow(t3, 2)) + 2 * (t1 - t3) * (t2 - t3) * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3))) +
               pow(c, 2) * (-(f * (pow(e, 2) * (2 * t1 - 3 * t2 + t3) + pow(f, 2) * (t1 - 2 * t2 + t3) + 115600 * (t1 - t3) * (pow(t1, 2) - 2 * t1 * t2 + 2 * pow(t2, 2) - 2 * t2 * t3 + pow(t3, 2)))) +
                            d * (pow(e, 2) * (2 * t1 + t2 - 3 * t3) + (t1 - t3) * (pow(f, 2) + 115600 * (t1 - t3) * (t1 - 2 * t2 + t3)))) -
               c * e * (pow(d, 3) * (t1 - t3) - pow(d, 2) * f * (t1 - 2 * t2 + t3) + d * (pow(e, 2) * (t1 + t2 - 2 * t3) + pow(f, 2) * (t1 + t2 - 2 * t3) +
                        115600 * (t1 - t3) * (2 * pow(t1, 2) - pow(t2, 2) + 5 * t2 * t3 - 2 * pow(t3, 2) - t1 * (3 * t2 + t3))) -
                        f * (t1 - t2) * (pow(e, 2) + pow(f, 2) + 115600 * (2 * pow(t1, 2) - 2 * pow(t2, 2) + 5 * t2 * t3 - pow(t3, 2) - t1 * (t2 + 3 * t3))))) +
          pow(a, 2) * (pow(b, 2) * (pow(c, 2) - 2 * c * e + pow(e, 2) - 115600 * pow(t2 - t3, 2)) * (t2 - t3) -
                       (f * (-t1 + t2) + d * (t1 - t3)) * (pow(d, 3) + pow(c, 2) * (d - 2 * f) - pow(d, 2) * f + c * e * (d + f) - d * (2 * pow(e, 2) + pow(f, 2) - 115600 * (t1 - t2) * (t2 - t3)) +
                           f * (pow(e, 2) + pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3))) + b * (pow(d, 3) * (t2 - t3) + pow(d, 2) * f * (-t2 + t3) + c * e * (d * (2 * t1 + t2 - 3 * t3) - f * (2 * t1 - 3 * t2 + t3)) +
                               pow(c, 2) * (d * (-t1 + t2) + f * (t1 - 3 * t2 + 2 * t3)) + d * (-(pow(e, 2) * (t1 + 2 * t2 - 3 * t3)) - (t2 - t3) * (pow(f, 2) + 115600 * (-2 * t1 * t2 + pow(t2, 2) + 2 * t1 * t3 - pow(t3, 2)))) +
                               f * (pow(e, 2) * (t1 - t3) + (t2 - t3) * (pow(f, 2) + 115600 * (-2 * t1 * t2 + pow(t2, 2) + 2 * t1 * t3 - pow(t3, 2)))))) -
          a * (-2 * pow(c, 2) * pow(d, 2) * e * t1 - 2 * pow(d, 4) * e * t1 + c * pow(d, 2) * pow(e, 2) * t1 + pow(d, 2) * pow(e, 3) * t1 + pow(c, 3) * d * f * t1 + c * pow(d, 3) * f * t1 + 3 * pow(c, 2) * d * e * f * t1 + 3 * pow(d, 3) * e * f * t1 -
               3 * c * d * pow(e, 2) * f * t1 - d * pow(e, 3) * f * t1 - pow(c, 3) * pow(f, 2) * t1 - pow(c, 2) * e * pow(f, 2) * t1 + 2 * c * pow(e, 2) * pow(f, 2) * t1 - 3 * c * d * pow(f, 3) * t1 - d * e * pow(f, 3) * t1 + 2 * c * pow(f, 4) * t1 +
               115600 * c * pow(d, 2) * pow(t1, 3) - 115600 * pow(d, 2) * e * pow(t1, 3) - 231200 * c * d * f * pow(t1, 3) + 231200 * d * e * f * pow(t1, 3) + 115600 * c * pow(f, 2) * pow(t1, 3) - 115600 * e * pow(f, 2) * pow(t1, 3) - 2 * pow(c, 2) * d * e * f * t2 -
               2 * pow(d, 3) * e * f * t2 + c * d * pow(e, 2) * f * t2 + d * pow(e, 3) * f * t2 + pow(c, 3) * pow(f, 2) * t2 + c * pow(d, 2) * pow(f, 2) * t2 + pow(c, 2) * e * pow(f, 2) * t2 + pow(d, 2) * e * pow(f, 2) * t2 - 2 * c * pow(e, 2) * pow(f, 2) * t2 +
               c * d * pow(f, 3) * t2 + d * e * pow(f, 3) * t2 - 2 * c * pow(f, 4) * t2 - 231200 * pow(d, 2) * e * pow(t1, 2) * t2 + 578000 * c * d * f * pow(t1, 2) * t2 - 115600 * d * e * f * pow(t1, 2) * t2 - 578000 * c * pow(f, 2) * pow(t1, 2) * t2 +
               346800 * e * pow(f, 2) * pow(t1, 2) * t2 + 231200 * pow(d, 2) * e * t1 * pow(t2, 2) - 115600 * c * d * f * t1 * pow(t2, 2) - 346800 * d * e * f * t1 * pow(t2, 2) + 578000 * c * pow(f, 2) * t1 * pow(t2, 2) - 346800 * e * pow(f, 2) * t1 * pow(t2, 2) +
               231200 * d * e * f * pow(t2, 3) - 115600 * c * pow(f, 2) * pow(t2, 3) + 115600 * e * pow(f, 2) * pow(t2, 3) + pow(b, 3) * (c - e) * (d - f) * (t2 - t3) + 2 * pow(c, 2) * pow(d, 2) * e * t3 + 2 * pow(d, 4) * e * t3 - c * pow(d, 2) * pow(e, 2) * t3 -
               pow(d, 2) * pow(e, 3) * t3 - pow(c, 3) * d * f * t3 - c * pow(d, 3) * f * t3 - pow(c, 2) * d * e * f * t3 - pow(d, 3) * e * f * t3 + 2 * c * d * pow(e, 2) * f * t3 - c * pow(d, 2) * pow(f, 2) * t3 - pow(d, 2) * e * pow(f, 2) * t3 + 2 * c * d * pow(f, 3) * t3 -
               346800 * c * pow(d, 2) * pow(t1, 2) * t3 + 578000 * pow(d, 2) * e * pow(t1, 2) * t3 + 115600 * c * d * f * pow(t1, 2) * t3 - 578000 * d * e * f * pow(t1, 2) * t3 + 231200 * c * pow(f, 2) * pow(t1, 2) * t3 - 924800 * c * d * f * t1 * t2 * t3 +
               924800 * d * e * f * t1 * t2 * t3 - 231200 * pow(d, 2) * e * pow(t2, 2) * t3 + 115600 * c * d * f * pow(t2, 2) * t3 - 346800 * d * e * f * pow(t2, 2) * t3 - 231200 * c * pow(f, 2) * pow(t2, 2) * t3 + 346800 * c * pow(d, 2) * t1 * pow(t3, 2) -
               578000 * pow(d, 2) * e * t1 * pow(t3, 2) + 346800 * c * d * f * t1 * pow(t3, 2) + 115600 * d * e * f * t1 * pow(t3, 2) - 231200 * c * pow(f, 2) * t1 * pow(t3, 2) + 231200 * pow(d, 2) * e * t2 * pow(t3, 2) + 346800 * c * d * f * t2 * pow(t3, 2) -
               115600 * d * e * f * t2 * pow(t3, 2) + 231200 * c * pow(f, 2) * t2 * pow(t3, 2) - 115600 * c * pow(d, 2) * pow(t3, 3) + 115600 * pow(d, 2) * e * pow(t3, 3) - 231200 * c * d * f * pow(t3, 3) -
               340 * t2 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                               (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                               (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
               340 * t3 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                               (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                               (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
               pow(b, 2) * (pow(c, 3) * (t2 - t3) + pow(c, 2) * e * (-t2 + t3) + e * (pow(d, 2) * (t1 - t2) + pow(f, 2) * (t1 - t3) + (pow(e, 2) - 115600 * pow(t2 - t3, 2)) * (t2 - t3) + d * f * (-2 * t1 + t2 + t3)) -
                            c * (pow(d, 2) * (t1 - t2) + pow(f, 2) * (t1 - t3) + (pow(e, 2) + 115600 * pow(t2 - t3, 2)) * (t2 - t3) + d * f * (-2 * t1 + t2 + t3))) +
               b * (pow(c, 2) * e * (d * (t1 + 2 * t2 - 3 * t3) + f * (-t1 + t3)) + pow(c, 3) * (d * (-t1 + t3) + f * (t1 - 2 * t2 + t3)) -
                    c * (pow(d, 3) * (t1 - t3) - pow(d, 2) * f * (t1 - 2 * t2 + t3) - d * (t1 - t2) * (pow(e, 2) + pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)) +
                         f * (pow(e, 2) * (t1 - 3 * t2 + 2 * t3) + pow(f, 2) * (t1 - 3 * t2 + 2 * t3) - 115600 * (t2 - t3) * (pow(t1, 2) - 5 * t1 * t2 + 2 * pow(t2, 2) + 3 * t1 * t3 + t2 * t3 - 2 * pow(t3, 2)))) -
                    e * (-(pow(d, 3) * (t1 + 2 * t2 - 3 * t3)) + pow(d, 2) * f * (t1 - t3) - f * (t1 - t2) * (pow(e, 2) + pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)) +
                         d * (pow(e, 2) * (t1 + t2 - 2 * t3) + pow(f, 2) * (t1 + t2 - 2 * t3) - 115600 * (t2 - t3) * (pow(t1, 2) + 3 * t1 * t2 - 2 * pow(t2, 2) - 5 * t1 * t3 + t2 * t3 + 2 * pow(t3, 2))))))) /
         (2.*(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3)) * (-(pow(d, 2) * pow(e, 2)) + 2 * c * d * e * f - pow(c, 2) * pow(f, 2) + 115600 * pow(c, 2) * pow(t1, 2) + 115600 * pow(d, 2) * pow(t1, 2) - 231200 * c * e * pow(t1, 2) +
             115600 * pow(e, 2) * pow(t1, 2) - 231200 * d * f * pow(t1, 2) + 115600 * pow(f, 2) * pow(t1, 2) + 231200 * c * e * t1 * t2 - 231200 * pow(e, 2) * t1 * t2 + 231200 * d * f * t1 * t2 - 231200 * pow(f, 2) * t1 * t2 + 115600 * pow(e, 2) * pow(t2, 2) +
             115600 * pow(f, 2) * pow(t2, 2) - pow(b, 2) * (pow(c, 2) - 2 * c * e + pow(e, 2) - 115600 * pow(t2 - t3, 2)) - pow(a, 2) * (pow(d, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2 - t3, 2)) - 231200 * pow(c, 2) * t1 * t3 -
             231200 * pow(d, 2) * t1 * t3 + 231200 * c * e * t1 * t3 + 231200 * d * f * t1 * t3 - 231200 * c * e * t2 * t3 - 231200 * d * f * t2 * t3 + 115600 * pow(c, 2) * pow(t3, 2) + 115600 * pow(d, 2) * pow(t3, 2) +
             2 * b * (d * pow(e, 2) + a * (c - e) * (d - f) + pow(c, 2) * f - c * e * (d + f) - 115600 * d * t1 * t2 + 115600 * f * t1 * t2 - 115600 * f * pow(t2, 2) + 115600 * d * t1 * t3 - 115600 * f * t1 * t3 + 115600 * d * t2 * t3 + 115600 * f * t2 * t3 -
                      115600 * d * pow(t3, 2)) + 2 * a * (pow(d, 2) * e - d * (c + e) * f + 115600 * e * (t1 - t2) * (t2 - t3) + c * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)))));
  x[1] = -(pow(d, 2) * pow(e, 3) - pow(b, 3) * (c - e) * (d - f) - pow(c, 2) * d * e * f - pow(d, 3) * e * f - c * d * pow(e, 2) * f + pow(c, 3) * pow(f, 2) + c * pow(d, 2) * pow(f, 2) + pow(d, 2) * e * pow(f, 2) - c * d * pow(f, 3) -
           115600 * pow(c, 3) * pow(t1, 2) - 115600 * c * pow(d, 2) * pow(t1, 2) + 115600 * pow(c, 2) * e * pow(t1, 2) + 115600 * c * pow(e, 2) * pow(t1, 2) - 115600 * pow(e, 3) * pow(t1, 2) + 115600 * c * d * f * pow(t1, 2) +
           115600 * d * e * f * pow(t1, 2) - 115600 * e * pow(f, 2) * pow(t1, 2) - 115600 * pow(c, 2) * e * t1 * t2 - 115600 * pow(d, 2) * e * t1 * t2 - 115600 * c * pow(e, 2) * t1 * t2 + 231200 * pow(e, 3) * t1 * t2 - 231200 * d * e * f * t1 * t2 +
           115600 * c * pow(f, 2) * t1 * t2 + 231200 * e * pow(f, 2) * t1 * t2 - 13363360000 * c * pow(t1, 3) * t2 + 13363360000 * e * pow(t1, 3) * t2 - 115600 * pow(e, 3) * pow(t2, 2) + 115600 * d * e * f * pow(t2, 2) - 115600 * c * pow(f, 2) * pow(t2, 2) -
           115600 * e * pow(f, 2) * pow(t2, 2) + 13363360000 * c * pow(t1, 2) * pow(t2, 2) - 26726720000 * e * pow(t1, 2) * pow(t2, 2) + 13363360000 * e * t1 * pow(t2, 3) +
           pow(a, 3) * (pow(d, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2 - t3, 2)) + 231200 * pow(c, 3) * t1 * t3 + 231200 * c * pow(d, 2) * t1 * t3 - 115600 * pow(c, 2) * e * t1 * t3 + 115600 * pow(d, 2) * e * t1 * t3 - 115600 * c * pow(e, 2) * t1 * t3 -
           231200 * c * d * f * t1 * t3 - 115600 * c * pow(f, 2) * t1 * t3 + 13363360000 * c * pow(t1, 3) * t3 - 13363360000 * e * pow(t1, 3) * t3 + 115600 * pow(c, 2) * e * t2 * t3 + 115600 * pow(d, 2) * e * t2 * t3 + 115600 * c * pow(e, 2) * t2 * t3 +
           115600 * c * pow(f, 2) * t2 * t3 + 13363360000 * c * pow(t1, 2) * t2 * t3 + 13363360000 * e * pow(t1, 2) * t2 * t3 - 26726720000 * c * t1 * pow(t2, 2) * t3 + 13363360000 * e * t1 * pow(t2, 2) * t3 - 13363360000 * e * pow(t2, 3) * t3 -
           115600 * pow(c, 3) * pow(t3, 2) - 115600 * c * pow(d, 2) * pow(t3, 2) - 115600 * pow(d, 2) * e * pow(t3, 2) + 115600 * c * d * f * pow(t3, 2) - 26726720000 * c * pow(t1, 2) * pow(t3, 2) + 13363360000 * e * pow(t1, 2) * pow(t3, 2) +
           13363360000 * c * t1 * t2 * pow(t3, 2) - 26726720000 * e * t1 * t2 * pow(t3, 2) + 13363360000 * c * pow(t2, 2) * pow(t3, 2) + 13363360000 * e * pow(t2, 2) * pow(t3, 2) + 13363360000 * c * t1 * pow(t3, 3) - 13363360000 * c * t2 * pow(t3, 3) +
           340 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                      (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                      (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
           pow(b, 2) * (pow(c, 3) - pow(c, 2) * e + a * (pow(d, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2 - t3, 2)) +
                        c * (pow(d, 2) - pow(e, 2) + d * f - 2 * pow(f, 2) + 115600 * t1 * t2 - 115600 * pow(t2, 2) - 115600 * t1 * t3 + 115600 * t2 * t3) +
                        e * (-2 * pow(d, 2) + pow(e, 2) + d * f + pow(f, 2) - 115600 * t1 * t2 + 115600 * t1 * t3 + 115600 * t2 * t3 - 115600 * pow(t3, 2))) +
           pow(a, 2) * (-(pow(d, 2) * e) + d * (c + e) * f - 115600 * e * (t1 - t2) * (t2 - t3) - c * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3))) +
           a * (pow(d, 3) * f - pow(d, 2) * (pow(e, 2) + 2 * pow(f, 2) + 115600 * (t1 - t2) * (t1 - t3)) +
                d * f * (pow(c, 2) + pow(e, 2) + pow(f, 2) + 231200 * pow(t1, 2) - 231200 * t1 * t2 - 115600 * pow(t2, 2) - 231200 * t1 * t3 + 462400 * t2 * t3 - 115600 * pow(t3, 2)) - pow(c, 2) * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)) +
                115600 * (t1 - t2) * (pow(f, 2) * (-t1 + t3) - (t2 - t3) * (pow(e, 2) + 115600 * (t1 - t3) * (-t2 + t3)))) +
           b * (-(pow(a, 2) * (c - e) * (d - f)) - 2 * pow(c, 3) * f + pow(c, 2) * e * (d + f) + a * (-pow(d, 3) + pow(d, 2) * f + pow(c, 2) * (-d + f) - f * (pow(e, 2) + pow(f, 2) - 115600 * pow(t2 - t3, 2)) +
                d * (pow(e, 2) + pow(f, 2) + 115600 * pow(t2 - t3, 2))) + e * (pow(d, 3) + pow(d, 2) * f + 115600 * f * pow(t1 - t2, 2) -
                    d * (2 * pow(e, 2) + 2 * pow(f, 2) + 115600 * (pow(t1, 2) - 4 * t1 * t2 + pow(t2, 2) + 2 * t1 * t3 + 2 * t2 * t3 - 2 * pow(t3, 2)))) +
                c * (-2 * pow(d, 2) * f + d * (pow(e, 2) + pow(f, 2) + 115600 * pow(t1 - t3, 2)) + f * (pow(e, 2) + pow(f, 2) - 115600 * (pow(t1, 2) + 2 * t1 * t2 - 2 * pow(t2, 2) - 4 * t1 * t3 + 2 * t2 * t3 + pow(t3, 2)))))) /
         (2.*(-(pow(d, 2) * pow(e, 2)) + 2 * c * d * e * f - pow(c, 2) * pow(f, 2) + 115600 * pow(c, 2) * pow(t1, 2) + 115600 * pow(d, 2) * pow(t1, 2) - 231200 * c * e * pow(t1, 2) + 115600 * pow(e, 2) * pow(t1, 2) - 231200 * d * f * pow(t1, 2) +
              115600 * pow(f, 2) * pow(t1, 2) + 231200 * c * e * t1 * t2 - 231200 * pow(e, 2) * t1 * t2 + 231200 * d * f * t1 * t2 - 231200 * pow(f, 2) * t1 * t2 + 115600 * pow(e, 2) * pow(t2, 2) + 115600 * pow(f, 2) * pow(t2, 2) -
              pow(b, 2) * (pow(c, 2) - 2 * c * e + pow(e, 2) - 115600 * pow(t2 - t3, 2)) - pow(a, 2) * (pow(d, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2 - t3, 2)) - 231200 * pow(c, 2) * t1 * t3 - 231200 * pow(d, 2) * t1 * t3 +
              231200 * c * e * t1 * t3 + 231200 * d * f * t1 * t3 - 231200 * c * e * t2 * t3 - 231200 * d * f * t2 * t3 + 115600 * pow(c, 2) * pow(t3, 2) + 115600 * pow(d, 2) * pow(t3, 2) +
              2 * b * (d * pow(e, 2) + a * (c - e) * (d - f) + pow(c, 2) * f - c * e * (d + f) - 115600 * d * t1 * t2 + 115600 * f * t1 * t2 - 115600 * f * pow(t2, 2) + 115600 * d * t1 * t3 - 115600 * f * t1 * t3 + 115600 * d * t2 * t3 + 115600 * f * t2 * t3 -
                       115600 * d * pow(t3, 2)) + 2 * a * (pow(d, 2) * e - d * (c + e) * f + 115600 * e * (t1 - t2) * (t2 - t3) + c * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)))));
  y[1] = (-(pow(c, 2) * pow(d, 2) * pow(e, 2) * t1) - pow(d, 4) * pow(e, 2) * t1 + c * pow(d, 2) * pow(e, 3) * t1 + pow(c, 3) * d * e * f * t1 + c * pow(d, 3) * e * f * t1 + pow(d, 3) * pow(e, 2) * f * t1 - c * d * pow(e, 3) * f * t1 -
          pow(c, 3) * e * pow(f, 2) * t1 + pow(c, 2) * pow(e, 2) * pow(f, 2) * t1 - pow(c, 2) * d * pow(f, 3) * t1 - c * d * e * pow(f, 3) * t1 + pow(c, 2) * pow(f, 4) * t1 + 115600 * pow(c, 2) * pow(d, 2) * pow(t1, 3) +
          115600 * pow(d, 4) * pow(t1, 3) - 115600 * c * pow(d, 2) * e * pow(t1, 3) - 115600 * pow(c, 2) * d * f * pow(t1, 3) - 231200 * pow(d, 3) * f * pow(t1, 3) + 115600 * d * pow(e, 2) * f * pow(t1, 3) + 115600 * c * e * pow(f, 2) * pow(t1, 3) -
          115600 * pow(e, 2) * pow(f, 2) * pow(t1, 3) + 231200 * d * pow(f, 3) * pow(t1, 3) - 115600 * pow(f, 4) * pow(t1, 3) - pow(c, 2) * d * pow(e, 2) * f * t2 - pow(d, 3) * pow(e, 2) * f * t2 + c * d * pow(e, 3) * f * t2 +
          pow(c, 3) * e * pow(f, 2) * t2 + c * pow(d, 2) * e * pow(f, 2) * t2 - pow(c, 2) * pow(e, 2) * pow(f, 2) * t2 + c * d * e * pow(f, 3) * t2 - pow(c, 2) * pow(f, 4) * t2 - 115600 * pow(d, 2) * pow(e, 2) * pow(t1, 2) * t2 +
          231200 * pow(c, 2) * d * f * pow(t1, 2) * t2 + 231200 * pow(d, 3) * f * pow(t1, 2) * t2 + 115600 * c * d * e * f * pow(t1, 2) * t2 - 115600 * d * pow(e, 2) * f * pow(t1, 2) * t2 - 115600 * pow(c, 2) * pow(f, 2) * pow(t1, 2) * t2 -
          115600 * pow(d, 2) * pow(f, 2) * pow(t1, 2) * t2 - 346800 * c * e * pow(f, 2) * pow(t1, 2) * t2 + 346800 * pow(e, 2) * pow(f, 2) * pow(t1, 2) * t2 - 462400 * d * pow(f, 3) * pow(t1, 2) * t2 + 346800 * pow(f, 4) * pow(t1, 2) * t2 +
          13363360000 * pow(d, 2) * pow(t1, 4) * t2 - 26726720000 * d * f * pow(t1, 4) * t2 + 13363360000 * pow(f, 2) * pow(t1, 4) * t2 + 115600 * pow(d, 2) * pow(e, 2) * t1 * pow(t2, 2) - 115600 * c * d * e * f * t1 * pow(t2, 2) -
          115600 * d * pow(e, 2) * f * t1 * pow(t2, 2) + 115600 * pow(c, 2) * pow(f, 2) * t1 * pow(t2, 2) + 115600 * pow(d, 2) * pow(f, 2) * t1 * pow(t2, 2) + 346800 * c * e * pow(f, 2) * t1 * pow(t2, 2) - 346800 * pow(e, 2) * pow(f, 2) * t1 * pow(t2, 2) +
          231200 * d * pow(f, 3) * t1 * pow(t2, 2) - 346800 * pow(f, 4) * t1 * pow(t2, 2) - 13363360000 * pow(d, 2) * pow(t1, 3) * pow(t2, 2) + 53453440000 * d * f * pow(t1, 3) * pow(t2, 2) - 40090080000 * pow(f, 2) * pow(t1, 3) * pow(t2, 2) +
          115600 * d * pow(e, 2) * f * pow(t2, 3) - 115600 * c * e * pow(f, 2) * pow(t2, 3) + 115600 * pow(e, 2) * pow(f, 2) * pow(t2, 3) + 115600 * pow(f, 4) * pow(t2, 3) - 26726720000 * d * f * pow(t1, 2) * pow(t2, 3) +
          40090080000 * pow(f, 2) * pow(t1, 2) * pow(t2, 3) - 13363360000 * pow(f, 2) * t1 * pow(t2, 4) + pow(b, 4) * (pow(c, 2) - 2 * c * e + pow(e, 2) - 115600 * pow(t2 - t3, 2)) * (t2 - t3) + pow(c, 2) * pow(d, 2) * pow(e, 2) * t3 +
          pow(d, 4) * pow(e, 2) * t3 - c * pow(d, 2) * pow(e, 3) * t3 - pow(c, 3) * d * e * f * t3 - c * pow(d, 3) * e * f * t3 + pow(c, 2) * d * pow(e, 2) * f * t3 - c * pow(d, 2) * e * pow(f, 2) * t3 + pow(c, 2) * d * pow(f, 3) * t3 -
          346800 * pow(c, 2) * pow(d, 2) * pow(t1, 2) * t3 - 346800 * pow(d, 4) * pow(t1, 2) * t3 + 346800 * c * pow(d, 2) * e * pow(t1, 2) * t3 + 115600 * pow(d, 2) * pow(e, 2) * pow(t1, 2) * t3 + 115600 * pow(c, 2) * d * f * pow(t1, 2) * t3 +
          462400 * pow(d, 3) * f * pow(t1, 2) * t3 - 115600 * c * d * e * f * pow(t1, 2) * t3 - 231200 * d * pow(e, 2) * f * pow(t1, 2) * t3 + 115600 * pow(c, 2) * pow(f, 2) * pow(t1, 2) * t3 + 115600 * pow(d, 2) * pow(f, 2) * pow(t1, 2) * t3 -
          231200 * d * pow(f, 3) * pow(t1, 2) * t3 - 13363360000 * pow(d, 2) * pow(t1, 4) * t3 + 26726720000 * d * f * pow(t1, 4) * t3 - 13363360000 * pow(f, 2) * pow(t1, 4) * t3 - 462400 * pow(c, 2) * d * f * t1 * t2 * t3 - 462400 * pow(d, 3) * f * t1 * t2 * t3 +
          462400 * d * pow(e, 2) * f * t1 * t2 * t3 + 462400 * d * pow(f, 3) * t1 * t2 * t3 - 26726720000 * pow(d, 2) * pow(t1, 3) * t2 * t3 + 26726720000 * pow(f, 2) * pow(t1, 3) * t2 * t3 - 115600 * pow(d, 2) * pow(e, 2) * pow(t2, 2) * t3 +
          115600 * c * d * e * f * pow(t2, 2) * t3 - 231200 * d * pow(e, 2) * f * pow(t2, 2) * t3 - 115600 * pow(c, 2) * pow(f, 2) * pow(t2, 2) * t3 - 115600 * pow(d, 2) * pow(f, 2) * pow(t2, 2) * t3 - 231200 * d * pow(f, 3) * pow(t2, 2) * t3 +
          40090080000 * pow(d, 2) * pow(t1, 2) * pow(t2, 2) * t3 - 80180160000 * d * f * pow(t1, 2) * pow(t2, 2) * t3 + 53453440000 * d * f * t1 * pow(t2, 3) * t3 - 26726720000 * pow(f, 2) * t1 * pow(t2, 3) * t3 + 13363360000 * pow(f, 2) * pow(t2, 4) * t3 +
          346800 * pow(c, 2) * pow(d, 2) * t1 * pow(t3, 2) + 346800 * pow(d, 4) * t1 * pow(t3, 2) - 346800 * c * pow(d, 2) * e * t1 * pow(t3, 2) - 115600 * pow(d, 2) * pow(e, 2) * t1 * pow(t3, 2) + 115600 * pow(c, 2) * d * f * t1 * pow(t3, 2) -
          231200 * pow(d, 3) * f * t1 * pow(t3, 2) + 115600 * c * d * e * f * t1 * pow(t3, 2) - 115600 * pow(c, 2) * pow(f, 2) * t1 * pow(t3, 2) - 115600 * pow(d, 2) * pow(f, 2) * t1 * pow(t3, 2) + 40090080000 * pow(d, 2) * pow(t1, 3) * pow(t3, 2) -
          53453440000 * d * f * pow(t1, 3) * pow(t3, 2) + 13363360000 * pow(f, 2) * pow(t1, 3) * pow(t3, 2) + 115600 * pow(d, 2) * pow(e, 2) * t2 * pow(t3, 2) + 231200 * pow(c, 2) * d * f * t2 * pow(t3, 2) + 231200 * pow(d, 3) * f * t2 * pow(t3, 2) -
          115600 * c * d * e * f * t2 * pow(t3, 2) + 115600 * pow(c, 2) * pow(f, 2) * t2 * pow(t3, 2) + 115600 * pow(d, 2) * pow(f, 2) * t2 * pow(t3, 2) + 80180160000 * d * f * pow(t1, 2) * t2 * pow(t3, 2) -
          40090080000 * pow(f, 2) * pow(t1, 2) * t2 * pow(t3, 2) - 40090080000 * pow(d, 2) * t1 * pow(t2, 2) * pow(t3, 2) + 40090080000 * pow(f, 2) * t1 * pow(t2, 2) * pow(t3, 2) - 26726720000 * d * f * pow(t2, 3) * pow(t3, 2) -
          13363360000 * pow(f, 2) * pow(t2, 3) * pow(t3, 2) - 115600 * pow(c, 2) * pow(d, 2) * pow(t3, 3) - 115600 * pow(d, 4) * pow(t3, 3) + 115600 * c * pow(d, 2) * e * pow(t3, 3) - 115600 * pow(c, 2) * d * f * pow(t3, 3) -
          40090080000 * pow(d, 2) * pow(t1, 2) * pow(t3, 3) + 26726720000 * d * f * pow(t1, 2) * pow(t3, 3) + 26726720000 * pow(d, 2) * t1 * t2 * pow(t3, 3) - 53453440000 * d * f * t1 * t2 * pow(t3, 3) +
          13363360000 * pow(d, 2) * pow(t2, 2) * pow(t3, 3) + 26726720000 * d * f * pow(t2, 2) * pow(t3, 3) + 13363360000 * pow(d, 2) * t1 * pow(t3, 4) - 13363360000 * pow(d, 2) * t2 * pow(t3, 4) +
          pow(a, 3) * (c - e) * (d - f) * (f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3)) + 340 * c * t1 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
              (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
              (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) -
          340 * e * t1 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                              (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                              (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
          340 * e * t2 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                              (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                              (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) -
          340 * c * t3 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                              (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                              (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
          pow(b, 3) * (f * (t1 - t2) * (pow(e, 2) - 231200 * pow(t2 - t3, 2)) - d * (pow(e, 2) * (t1 + t2 - 2 * t3) - 231200 * (t1 - t3) * pow(t2 - t3, 2)) + c * e * (d * (2 * t1 + t2 - 3 * t3) - f * (2 * t1 - 3 * t2 + t3)) +
                       pow(c, 2) * (d * (-t1 + t3) + f * (t1 - 2 * t2 + t3))) + pow(b, 2) * (pow(c, 3) * e * (t2 - t3) + pow(c, 2) * (d * f * (t1 - t3) - (2 * pow(e, 2) + 115600 * (t1 - t2) * (t1 - t3)) * (t2 - t3) + pow(f, 2) * (-t1 + t3)) +
                           (t1 - t2) * (-115600 * (pow(e, 2) + pow(f, 2) - 115600 * pow(t2 - t3, 2)) * (t1 - t3) * (t2 - t3) + pow(d, 2) * (pow(e, 2) + 115600 * (t1 - t3) * (-t2 + t3)) - d * f * (pow(e, 2) + 231200 * (t1 - t3) * (-t2 + t3))) +
                           c * e * (pow(d, 2) * (-t1 + t2) + pow(f, 2) * (t1 - t3) + d * f * (-t2 + t3) + (t2 - t3) * (pow(e, 2) + 115600 * (2 * pow(t1, 2) - pow(t2, 2) + 4 * t2 * t3 - pow(t3, 2) - 2 * t1 * (t2 + t3))))) +
          b * (pow(c, 3) * e * (d * (-t1 + t3) + f * (t1 - 2 * t2 + t3)) - pow(d, 2) * f * (t1 - t2) * (pow(e, 2) + 231200 * (t1 - t3) * (-t2 + t3)) + pow(d, 3) * (pow(e, 2) * (t1 + t2 - 2 * t3) + 231200 * pow(t1 - t3, 2) * (-t2 + t3)) -
               115600 * f * pow(t1 - t2, 2) * (pow(e, 2) * (t1 + t2 - 2 * t3) + 2 * (t2 - t3) * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3))) +
               115600 * d * (t1 - t2) * (pow(e, 2) * (pow(t1, 2) + pow(t2, 2) - 2 * t1 * t3 - 2 * t2 * t3 + 2 * pow(t3, 2)) + 2 * (t1 - t3) * (t2 - t3) * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3))) +
               pow(c, 2) * (-(f * (pow(e, 2) * (2 * t1 - 3 * t2 + t3) + pow(f, 2) * (t1 - 2 * t2 + t3) + 115600 * (t1 - t3) * (pow(t1, 2) - 2 * t1 * t2 + 2 * pow(t2, 2) - 2 * t2 * t3 + pow(t3, 2)))) +
                            d * (pow(e, 2) * (2 * t1 + t2 - 3 * t3) + (t1 - t3) * (pow(f, 2) + 115600 * (t1 - t3) * (t1 - 2 * t2 + t3)))) -
               c * e * (pow(d, 3) * (t1 - t3) - pow(d, 2) * f * (t1 - 2 * t2 + t3) + d * (pow(e, 2) * (t1 + t2 - 2 * t3) + pow(f, 2) * (t1 + t2 - 2 * t3) +
                        115600 * (t1 - t3) * (2 * pow(t1, 2) - pow(t2, 2) + 5 * t2 * t3 - 2 * pow(t3, 2) - t1 * (3 * t2 + t3))) -
                        f * (t1 - t2) * (pow(e, 2) + pow(f, 2) + 115600 * (2 * pow(t1, 2) - 2 * pow(t2, 2) + 5 * t2 * t3 - pow(t3, 2) - t1 * (t2 + 3 * t3))))) +
          pow(a, 2) * (pow(b, 2) * (pow(c, 2) - 2 * c * e + pow(e, 2) - 115600 * pow(t2 - t3, 2)) * (t2 - t3) -
                       (f * (-t1 + t2) + d * (t1 - t3)) * (pow(d, 3) + pow(c, 2) * (d - 2 * f) - pow(d, 2) * f + c * e * (d + f) - d * (2 * pow(e, 2) + pow(f, 2) - 115600 * (t1 - t2) * (t2 - t3)) +
                           f * (pow(e, 2) + pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3))) + b * (pow(d, 3) * (t2 - t3) + pow(d, 2) * f * (-t2 + t3) + c * e * (d * (2 * t1 + t2 - 3 * t3) - f * (2 * t1 - 3 * t2 + t3)) +
                               pow(c, 2) * (d * (-t1 + t2) + f * (t1 - 3 * t2 + 2 * t3)) + d * (-(pow(e, 2) * (t1 + 2 * t2 - 3 * t3)) - (t2 - t3) * (pow(f, 2) + 115600 * (-2 * t1 * t2 + pow(t2, 2) + 2 * t1 * t3 - pow(t3, 2)))) +
                               f * (pow(e, 2) * (t1 - t3) + (t2 - t3) * (pow(f, 2) + 115600 * (-2 * t1 * t2 + pow(t2, 2) + 2 * t1 * t3 - pow(t3, 2)))))) -
          a * (-2 * pow(c, 2) * pow(d, 2) * e * t1 - 2 * pow(d, 4) * e * t1 + c * pow(d, 2) * pow(e, 2) * t1 + pow(d, 2) * pow(e, 3) * t1 + pow(c, 3) * d * f * t1 + c * pow(d, 3) * f * t1 + 3 * pow(c, 2) * d * e * f * t1 + 3 * pow(d, 3) * e * f * t1 -
               3 * c * d * pow(e, 2) * f * t1 - d * pow(e, 3) * f * t1 - pow(c, 3) * pow(f, 2) * t1 - pow(c, 2) * e * pow(f, 2) * t1 + 2 * c * pow(e, 2) * pow(f, 2) * t1 - 3 * c * d * pow(f, 3) * t1 - d * e * pow(f, 3) * t1 + 2 * c * pow(f, 4) * t1 +
               115600 * c * pow(d, 2) * pow(t1, 3) - 115600 * pow(d, 2) * e * pow(t1, 3) - 231200 * c * d * f * pow(t1, 3) + 231200 * d * e * f * pow(t1, 3) + 115600 * c * pow(f, 2) * pow(t1, 3) - 115600 * e * pow(f, 2) * pow(t1, 3) - 2 * pow(c, 2) * d * e * f * t2 -
               2 * pow(d, 3) * e * f * t2 + c * d * pow(e, 2) * f * t2 + d * pow(e, 3) * f * t2 + pow(c, 3) * pow(f, 2) * t2 + c * pow(d, 2) * pow(f, 2) * t2 + pow(c, 2) * e * pow(f, 2) * t2 + pow(d, 2) * e * pow(f, 2) * t2 - 2 * c * pow(e, 2) * pow(f, 2) * t2 +
               c * d * pow(f, 3) * t2 + d * e * pow(f, 3) * t2 - 2 * c * pow(f, 4) * t2 - 231200 * pow(d, 2) * e * pow(t1, 2) * t2 + 578000 * c * d * f * pow(t1, 2) * t2 - 115600 * d * e * f * pow(t1, 2) * t2 - 578000 * c * pow(f, 2) * pow(t1, 2) * t2 +
               346800 * e * pow(f, 2) * pow(t1, 2) * t2 + 231200 * pow(d, 2) * e * t1 * pow(t2, 2) - 115600 * c * d * f * t1 * pow(t2, 2) - 346800 * d * e * f * t1 * pow(t2, 2) + 578000 * c * pow(f, 2) * t1 * pow(t2, 2) - 346800 * e * pow(f, 2) * t1 * pow(t2, 2) +
               231200 * d * e * f * pow(t2, 3) - 115600 * c * pow(f, 2) * pow(t2, 3) + 115600 * e * pow(f, 2) * pow(t2, 3) + pow(b, 3) * (c - e) * (d - f) * (t2 - t3) + 2 * pow(c, 2) * pow(d, 2) * e * t3 + 2 * pow(d, 4) * e * t3 - c * pow(d, 2) * pow(e, 2) * t3 -
               pow(d, 2) * pow(e, 3) * t3 - pow(c, 3) * d * f * t3 - c * pow(d, 3) * f * t3 - pow(c, 2) * d * e * f * t3 - pow(d, 3) * e * f * t3 + 2 * c * d * pow(e, 2) * f * t3 - c * pow(d, 2) * pow(f, 2) * t3 - pow(d, 2) * e * pow(f, 2) * t3 + 2 * c * d * pow(f, 3) * t3 -
               346800 * c * pow(d, 2) * pow(t1, 2) * t3 + 578000 * pow(d, 2) * e * pow(t1, 2) * t3 + 115600 * c * d * f * pow(t1, 2) * t3 - 578000 * d * e * f * pow(t1, 2) * t3 + 231200 * c * pow(f, 2) * pow(t1, 2) * t3 - 924800 * c * d * f * t1 * t2 * t3 +
               924800 * d * e * f * t1 * t2 * t3 - 231200 * pow(d, 2) * e * pow(t2, 2) * t3 + 115600 * c * d * f * pow(t2, 2) * t3 - 346800 * d * e * f * pow(t2, 2) * t3 - 231200 * c * pow(f, 2) * pow(t2, 2) * t3 + 346800 * c * pow(d, 2) * t1 * pow(t3, 2) -
               578000 * pow(d, 2) * e * t1 * pow(t3, 2) + 346800 * c * d * f * t1 * pow(t3, 2) + 115600 * d * e * f * t1 * pow(t3, 2) - 231200 * c * pow(f, 2) * t1 * pow(t3, 2) + 231200 * pow(d, 2) * e * t2 * pow(t3, 2) + 346800 * c * d * f * t2 * pow(t3, 2) -
               115600 * d * e * f * t2 * pow(t3, 2) + 231200 * c * pow(f, 2) * t2 * pow(t3, 2) - 115600 * c * pow(d, 2) * pow(t3, 3) + 115600 * pow(d, 2) * e * pow(t3, 3) - 231200 * c * d * f * pow(t3, 3) +
               340 * t2 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                               (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                               (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) -
               340 * t3 * sqrt((pow(a, 2) + pow(b, 2) - 2 * a * c + pow(c, 2) - 2 * b * d + pow(d, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t2 - 115600 * pow(t2, 2)) *
                               (pow(a, 2) + pow(b, 2) - 2 * a * e + pow(e, 2) - 2 * b * f + pow(f, 2) - 115600 * pow(t1, 2) + 231200 * t1 * t3 - 115600 * pow(t3, 2)) *
                               (pow(c, 2) + pow(d, 2) - 2 * c * e + pow(e, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2, 2) + 231200 * t2 * t3 - 115600 * pow(t3, 2)) * pow(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3), 2)) +
               pow(b, 2) * (pow(c, 3) * (t2 - t3) + pow(c, 2) * e * (-t2 + t3) + e * (pow(d, 2) * (t1 - t2) + pow(f, 2) * (t1 - t3) + (pow(e, 2) - 115600 * pow(t2 - t3, 2)) * (t2 - t3) + d * f * (-2 * t1 + t2 + t3)) -
                            c * (pow(d, 2) * (t1 - t2) + pow(f, 2) * (t1 - t3) + (pow(e, 2) + 115600 * pow(t2 - t3, 2)) * (t2 - t3) + d * f * (-2 * t1 + t2 + t3))) +
               b * (pow(c, 2) * e * (d * (t1 + 2 * t2 - 3 * t3) + f * (-t1 + t3)) + pow(c, 3) * (d * (-t1 + t3) + f * (t1 - 2 * t2 + t3)) -
                    c * (pow(d, 3) * (t1 - t3) - pow(d, 2) * f * (t1 - 2 * t2 + t3) - d * (t1 - t2) * (pow(e, 2) + pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)) +
                         f * (pow(e, 2) * (t1 - 3 * t2 + 2 * t3) + pow(f, 2) * (t1 - 3 * t2 + 2 * t3) - 115600 * (t2 - t3) * (pow(t1, 2) - 5 * t1 * t2 + 2 * pow(t2, 2) + 3 * t1 * t3 + t2 * t3 - 2 * pow(t3, 2)))) -
                    e * (-(pow(d, 3) * (t1 + 2 * t2 - 3 * t3)) + pow(d, 2) * f * (t1 - t3) - f * (t1 - t2) * (pow(e, 2) + pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)) +
                         d * (pow(e, 2) * (t1 + t2 - 2 * t3) + pow(f, 2) * (t1 + t2 - 2 * t3) - 115600 * (t2 - t3) * (pow(t1, 2) + 3 * t1 * t2 - 2 * pow(t2, 2) - 5 * t1 * t3 + t2 * t3 + 2 * pow(t3, 2))))))) /
         (2.*(f * (-t1 + t2) + d * (t1 - t3) + b * (-t2 + t3)) * (-(pow(d, 2) * pow(e, 2)) + 2 * c * d * e * f - pow(c, 2) * pow(f, 2) + 115600 * pow(c, 2) * pow(t1, 2) + 115600 * pow(d, 2) * pow(t1, 2) - 231200 * c * e * pow(t1, 2) +
             115600 * pow(e, 2) * pow(t1, 2) - 231200 * d * f * pow(t1, 2) + 115600 * pow(f, 2) * pow(t1, 2) + 231200 * c * e * t1 * t2 - 231200 * pow(e, 2) * t1 * t2 + 231200 * d * f * t1 * t2 - 231200 * pow(f, 2) * t1 * t2 + 115600 * pow(e, 2) * pow(t2, 2) +
             115600 * pow(f, 2) * pow(t2, 2) - pow(b, 2) * (pow(c, 2) - 2 * c * e + pow(e, 2) - 115600 * pow(t2 - t3, 2)) - pow(a, 2) * (pow(d, 2) - 2 * d * f + pow(f, 2) - 115600 * pow(t2 - t3, 2)) - 231200 * pow(c, 2) * t1 * t3 -
             231200 * pow(d, 2) * t1 * t3 + 231200 * c * e * t1 * t3 + 231200 * d * f * t1 * t3 - 231200 * c * e * t2 * t3 - 231200 * d * f * t2 * t3 + 115600 * pow(c, 2) * pow(t3, 2) + 115600 * pow(d, 2) * pow(t3, 2) +
             2 * b * (d * pow(e, 2) + a * (c - e) * (d - f) + pow(c, 2) * f - c * e * (d + f) - 115600 * d * t1 * t2 + 115600 * f * t1 * t2 - 115600 * f * pow(t2, 2) + 115600 * d * t1 * t3 - 115600 * f * t1 * t3 + 115600 * d * t2 * t3 + 115600 * f * t2 * t3 -
                      115600 * d * pow(t3, 2)) + 2 * a * (pow(d, 2) * e - d * (c + e) * f + 115600 * e * (t1 - t2) * (t2 - t3) + c * (pow(f, 2) + 115600 * (t1 - t3) * (-t2 + t3)))));
}


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  while (Serial.available() > 0) {

    double t1 = Serial.parseFloat();
    double t2 = Serial.parseFloat();
    double t3 = Serial.parseFloat();

    if (Serial.read() == '\n') {
      Serial.print("(");
      Serial.print(t1, 16);
      Serial.print(",");
      Serial.print(t2, 16);
      Serial.print(",");
      Serial.print(t3, 16);
      Serial.print(")\n");

      double x[2], y[2];
      timeToLoc(x, y, t1, t2, t3);
      Serial.print("(");
      Serial.print(x[0]);
      Serial.print(",");
      Serial.print(y[0]);
      Serial.print(") or (");
      Serial.print(x[1]);
      Serial.print(",");
      Serial.print(y[1]);
      Serial.print(")\n");
    }
  }
}
