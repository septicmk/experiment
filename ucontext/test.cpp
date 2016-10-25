#include <ucontext.h>
#include <cstdio>

void func1(ucontext_t* main, ucontext_t* me){
    puts("hello 1");
    swapcontext(me, main);
    puts("hello 2");
    swapcontext(me, main);
    puts("hello 3");
    swapcontext(me, main);
    puts("hello 4");
    swapcontext(me, main);
    puts("hello 5");
}

void context_test(){
    char stack[1<<20];
    ucontext_t child, main;

    getcontext(&child);
    child.uc_stack.ss_sp = stack;
    child.uc_stack.ss_size = sizeof(stack);
    child.uc_stack.ss_flags = 0;
    child.uc_link = &main;

    makecontext(&child, (void (*)(void))(func1), 2, &main, &child);
    swapcontext(&main, &child);
    puts("welcome back 1");
    swapcontext(&main, &child);
    puts("welcome back 2");
    swapcontext(&main, &child);
    puts("welcome back 3");
    swapcontext(&main, &child);
    puts("welcome back 4");
    swapcontext(&main, &child);
    puts("welcome back over");
}

int main(){
    context_test();
    return 0;
}
