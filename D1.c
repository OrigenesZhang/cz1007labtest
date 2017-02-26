#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct circle {
    double radius;
    double x;
    double y;
};
int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);
int main(){
    struct circle c1, c2;
    printf("Enter circle 1 (radius x y): \n");
    scanf("%lf %lf %lf", &c1.radius, &c1.x, &c1.y);
    printf("Enter circle 2 (radius x y): \n");
    scanf("%lf %lf %lf", &c2.radius, &c2.x, &c2.y);
    printf("intersect(): %d\n", intersect(c1, c2));
    printf("contain(): %d\n", contain(&c1, &c2));
    return 0;
}
int intersect(struct circle c1, struct circle c2){
    double eps=1e-8;
    return c1.radius+c2.radius+eps>sqrt((c2.x-c1.x)*(c2.x-c1.x)+(c2.y-c1.y)*(c2.y-c1.y));
}
int contain(struct circle *c1, struct circle *c2){
    double eps=1e-8;
    return fabs((*c1).radius-(*c2).radius)+eps>sqrt(((*c2).x-(*c1).x)*((*c2).x-(*c1).x)+((*c2).y-(*c1).y)*((*c2).y-(*c1).y));
}
