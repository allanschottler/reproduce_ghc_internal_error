#include "HsFFI.h"
#include "FFIInterpreter_stub.h"
#include <stdio.h>

void* ctx;

extern "C" {
    void HsStart();
    void HsEnd();
}

int main()
{
    HsStart();
    char name[] = {"Test"};
    printf("Creating module...");
    ctx = createContext((void*)name);

    char process10[] = {"process 10"};
    printf("Executing...");
    printf("Result is %s\n", (char*)runExpr(ctx, (void*)process10));
    printf("Done!");

    freeContext(ctx);
    HsEnd();
    return 0;
}
