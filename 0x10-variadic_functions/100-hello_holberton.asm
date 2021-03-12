segment .data                   ;section declaration
    msg db     "Hello, Holberton", 0xA, 0x0 ;our NULL-terminated string, ending with 0xA (lf) or 0xD (CR)
    len equ     $ - msg             ;length of our dear string

segment .text                   ;section declaration
    global  main            ;we must export the entry point to the ELF linker or loader
main:
    enter 0,0
    pusha
                                ;write our string to stdout
    mov     edx,len             ;third argument: message length
    mov     ecx,msg             ;second argument: pointer to message to write
    mov     ebx,1               ;first argument: file handle (stdout)
    mov     eax,4               ;system call number (sys_write)
    int     0x80                ;call kernel
 
    popa
    xor eax, eax  ; set eax 0
    leave
    ret
