/* atan example */
#include <stdio.h>      /* printf */
#include <math.h>       /* atan */

#define PI 3.14159265

typedef struct
{
    double x;
    double y;
}POINT_S;

double CalcVectorAngle(POINT_S &start, POINT_S &end)
{
    POINT_S p0;
    p0.x = 1;
    p0.y = 0;

    double sign;
    double p0pv;
    double p0p0, pvpv;
    double thea, thea_new;
    POINT_S pv;

    static double thea_old = 0;

    pv.x = end.x - start.x;
    pv.y = end.y - start.y;

    p0pv = p0.x * pv.x + p0.y * pv.y;

    p0p0 = p0.x * p0.x + p0.y * p0.y;
    pvpv = pv.x * pv.x + pv.y * pv.y;

    (pv.y >= 0) ? (sign = 1) : (sign = -1);

    thea_new = sign * acos(p0pv / (sqrt(p0p0)*sqrt(pvpv)) );
    thea = thea_new - thea_old;

    printf("thea_new = %lf, thea_old = %lf, thea = %lf\n", thea_new, thea_old, thea);
    thea_old = thea;

    return thea;
}

double CalcVectorDistance(POINT_S &start, POINT_S &end)
{
    double distance;
    POINT_S pv;

    pv.x = end.x - start.x;
    pv.y = end.y - start.y;

    distance = sqrt(pv.x * pv.x + pv.y * pv.y);
    printf("distance = %lf\n", distance);
    return distance;
}

int main ()
{
    POINT_S o, a, b, c;

    o.x = 0;
    o.y = 0;

    a.x = 1;
    a.y = 0;

    b.x = 1;
    b.y = -1;

    c.x = 0;
    c.y = -1;

    CalcVectorAngle(o, a);
    CalcVectorDistance(o, a);

    CalcVectorAngle(a, b);
    CalcVectorDistance(a, b);

    CalcVectorAngle(b, c);
    CalcVectorDistance(b, c);
    return 0;
}
