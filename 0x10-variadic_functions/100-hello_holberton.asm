extern printf 
 
segment .data 
    msg db     "Hello, Holberton", 0x0 
    len equ     $ - msg 
    formatstr: 
              dd formatstring 
 
segment .rodata 
    formatstring: db 25H, 73H, 0AH, 00H   ; "%s\n" 
 
 
segment .text                   ;section declaration 
    global  main 
 
printstring:; Function int printstring(char*) 
    push    dword [esp + 4] ; char* 
    push    dword [formatstr] 
    call    printf  ; printf("%s\n", char*) 
    add     esp, 8 
    ret 
 
main: 
    enter 0,0 
    pusha 
                                ;write our string to stdout 
    push msg 
    call printstring 
 
    popa 
    xor eax, eax  ; set eax 0 
    leave 
    ret 
