#include <stdio.h>
int enbuyuk(int a[], int n) {

if(n==1) {

return a[0];

}
else {

int enbuyugu=enbuyuk(a, n-1);

if (a[n-1] > enbuyugu)
return a[n-1];
return enbuyugu;

}

}
int main()
{
int dizi[5] = {13,63,89,29,93};
printf("Dizinin en buyuk elemani= %d", enbuyuk(dizi, 5));
return 0;
}
