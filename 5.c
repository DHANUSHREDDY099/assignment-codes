// Program to find the maximum
// number of handshakes

int main() {
int num;
scanf("%d"
, &num);
int total = num * (num - 1) / 2;
printf("%d"
, total);
return 0;
}