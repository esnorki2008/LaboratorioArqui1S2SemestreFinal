include macros.asm

.model small 
.stack 64h
.data
   acumulador db 0;es de tipo byte
   lista1 dw 200,300,6
   lista2 dw 100,300,6

.code
main proc
    mov ax,@data; mover donde empieza el segemento de datos
    mov ds,ax; guardar el segmento de datos en DS
    ;ax
    ;bx
    ;cx
    ;dx

    mov ax,55
    mov bx,ax;tiene 55

    xor ax,ax;limpiar el registro AX
    mov ax,bx;mover bx a ax
    mov dl,30;mover 30 a dl
    div dl; bx / 30
    mov acumulador,ah; al es donde se guarda el valor
    Imprimir8bits acumulador

    ;Salto de linea
    mov al,13
    Imprimir al
    mov al,10
    Imprimir al


    
    mov bx,0
    inicio:
        mov ax,2
        mul bl
        mov si,ax
        mov cx,lista1[si]
        cmp cx,lista2[si]
        jz esigual
        jnz noigual
        retorno:

        inc bx
        cmp bx,3
    jne inicio
    mov al,13
    Imprimir al
    mov al,10
    Imprimir al
    
    jmp salir
    esigual:
        mov dl,'1'
        Imprimir dl 
        jmp retorno
    noigual:
        mov dl,'0'
        Imprimir dl 
        jmp retorno

    salir:
    ;recibo char
    mov ah, 1
	int 21h
    mov dl,al
    Imprimir dl 

    mov ax,4C00H;AX = 4C00H
    INT 21H

main endp
end main