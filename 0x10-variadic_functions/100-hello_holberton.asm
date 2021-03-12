segment .data                   ;section declaration
    msg db     "Hello, Holberton", 0xA, 0x0 ;our NULL-terminated string, ending with 0xA (lf) or 0xD (CR)
    len equ     $ - msg             ;length of our dear string

segment .text                   ;section declaration
    global  main            ;we must export the entry point to the ELF linker or loader
main: 
    enter 0,0 
    call pushaq 
 
                                ;write string to stdout 
    mov     rdx,len             ;third argument: message length 
    mov     rsi,msg             ;second argument: pointer to message to write 
    mov     rdi,1               ;first argument: file handle (stdout) 
    mov     rax,1               ;system call number (sys_write) 
    syscall                ;call kernel 
 
    call popaq 
    xor rax, rax                      ; doing same as `mov rax, 0` 
    leave 
    ret 
