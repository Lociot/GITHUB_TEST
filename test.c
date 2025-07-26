
#include <stdio.h>
struct Example1 {
    
    
    char b; // 1byte
    int c;  // 4 byte
    char a; // 1 byte 
};
struct Example2 { // optimization
  
    char b; // 1 byte
    char a; // 1 byte 
    int c;  // 4 byte
};
int main() {
    int n;
    printf("%lu\n", sizeof(struct Example1)); // 12
     printf("%lu\n", sizeof(struct Example2)); // 8 
    scanf("%d",&n);
    printf("địa chỉ của biến n: %x", &n);
}
