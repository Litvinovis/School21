global      _ft_write
extern      ___error
section     .text

_ft_write:
    mov     rax, 0x2000004
    syscall
    jc      .error
    jmp     .exit

.error:
    mov     r12, rax
    call    ___error
    mov     [rax], r12
    mov     rax, -1
    ret

.exit:
    ret