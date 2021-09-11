ImprimirNumero macro registro
    push ax
    push dx


    mov dl,registro
    ;ah = 2
    add dl,48
    mov ah,02h
    int 21h


    pop dx
    pop ax
endm
Imprimir macro registro
    push ax
    push dx


    mov dl,registro
    ;ah = 2
    mov ah,02h
    int 21h


    pop dx
    pop ax
endm

Imprimir8bits macro registro
    local cualquiera,noz
    xor ax,ax
    mov al,registro
    mov cx,10
    mov bx,2
    cualquiera:
    xor dx,dx
    div cx
    push dx
    dec bx
    jnz cualquiera
    mov bx,2
    noz:
    pop dx
    ImprimirNumero dl
    dec bx
    jnz noz
endm


