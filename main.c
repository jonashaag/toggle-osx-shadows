#include <stdio.h>

typedef enum _CGSDebugOptions {
    kCGSDebugOptionNone,
    kCGSDebugOptionNoShadows = 16384
} CGSDebugOptions;

extern void CGSGetDebugOptions(CGSDebugOptions *options);
extern void CGSSetDebugOptions(CGSDebugOptions options);

int main(int argc, char *argv[]) {
    CGSDebugOptions options;
    CGSGetDebugOptions(&options);
    options ^= kCGSDebugOptionNoShadows;
    CGSSetDebugOptions(options);
    return 0;
}
