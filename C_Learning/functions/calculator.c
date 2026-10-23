#include <stdio.h>
#include <conio.h>

double add(float a,float b){
    double ans=a+b;
    return (ans);
}
double sub(float a,float b){
    double ans=a-b;
    return (ans);
}
double multi(float a,float b){
    long double ans=a*b;
    return (ans);
}
double div(float a,float b){
    double ans=a/b;
    return(ans);
}

int main(){
    float a,b;
    char c;
    printf("enter the expression (eg. 2+3)\n");
    scanf("%f%c%f",&a,&c,&b);
    if(c=='+'){
        printf("%lf",add(a,b));
    }
    else if(c=='-'){
        printf("%lf",sub(a,b));
    }
    else if(c=='*'){
        printf("%Lf",multi(a,b));
    }
    else if(c=='/'){
        printf("%lf",div(a,b));
    }
    return (0);
}