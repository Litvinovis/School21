global      _ft_read
extern      ___error
section     .text

_ft_read:
    mov     rax, 0x2000003
    syscall
    jc      .error
    jmp     .exit

.error:
    mov     r12, rax            ;сохранение errno
    call    ___error            ;получить адрес памяти на ошибку errno
    mov     [rax], r12          ;поместить errno в адрес памяти
    mov     rax, -1
    ret

.exit:
    ret