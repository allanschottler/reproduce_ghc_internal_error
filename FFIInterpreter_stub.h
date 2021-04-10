#include "HsFFI.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern HsPtr runExpr(HsStablePtr a1, HsPtr a2);
extern void freeContext(HsStablePtr a1);
extern HsStablePtr createContext(HsPtr a1);
#if defined(__cplusplus)
}
#endif

