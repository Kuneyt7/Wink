#include "memory.h"
#include "scheduler.h"
#include "interrupts.h"

void kernel_main() {
    init_memory();
    init_interrupts();
    init_scheduler();

    while (1) {
        schedule();
    }
}
