include macros.asm

.model small 
.stack 64h
.data
   acumulador db 0;es de tipo byte
   lista1 db 2,4,6
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
        mov al,64
        ;ah= 0h
        ImprimirNumero lista1[bx]
        ;ah = 2
        inc bx
        cmp bx,3
    jne inicio
    mov al,13
    Imprimir al
    mov al,10
    Imprimir al

    mov ax,4C00H;AX = 4C00H
    INT 21H

main endp
end main