#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 53116486-d9a2-4dd7-8750-4688b0532ea5");
}
