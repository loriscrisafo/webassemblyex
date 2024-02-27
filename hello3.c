#include <stdio.h>
#include <time.h>
#include <emscripten/emscripten.h>

int main() {
    printf("Hello World\n");
    return 0;
}

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif

EXTERN EMSCRIPTEN_KEEPALIVE void myFunction(int argc, char ** argv) {
    printf("MyFunction Called\n");
    
    clock_t start = clock(); // Start measuring time
    
    //Bucle va aquí

    
    clock_t end = clock(); // Stop measuring time
    
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("Time taken: %f seconds\n", time_taken);

    
    }

