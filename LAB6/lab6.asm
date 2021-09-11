.model small 
.stack 64h
.data
    mensaje db 'Hola :)','$'
    mensaje2 db 'otro  mensaje','$'
    dolar db '$'
.code
main proc
    mov ax,@data; mover donde empieza el segemento de datos
    mov ds,ax; guardar el segmento de datos en DS

    mov dx,offset mensaje; mover donde empieza el mensaje
    mov ah,09h; para imprimir una cadena en pantalla
    INT 21H

    mov dl,dolar; mover el valor que contiene dolar
    mov ah,02h; para imprimir un caracter en pantalla
    INT 21h



    mov ax,4C00H;AX = 4C00H
    INT 21H

main endp
end main