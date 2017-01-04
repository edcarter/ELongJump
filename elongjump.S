.section .text
.globl esetjmp
.type esetjmp, @function
.globl elongjmp
.type elongjmp, @function

# Parmaters
# 
# %rdi: address of jmp_buf struct
# (%rsp): return address
esetjmp:
mov (%rsp), %rax     # set rax to return address
mov %rax, (%rdi)     # set jmp_buf.pc to return address
mov %rsp, %rax       # set rax to sp
add $8, %rax         # add 8 to rax so it contains top of calling stack
mov %rax, 8(%rdi)    # set jmp_buf.sp to top of calling stack
mov %rbp, 16(%rdi)   # set jmp_buf.bp to base pointer
mov $0, %rax         # set return value to 0
ret

# Parameters
# %rdi: address of jmp_buf struct
elongjmp: 
mov 8(%rdi), %rsp    # set stack pointer to jmp_buf.sp
mov 16(%rdi), %rbp   # set base pointer to jmp_buf.bp
mov $1, %rax         # set return value to 1
jmp *(%rdi)          # jump to saved pc value
