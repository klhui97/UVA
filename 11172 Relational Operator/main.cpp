#include <iostream>
using namespace std;

int main() {
    int a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else
            printf("=\n");
    }
    
    return 0;
}
