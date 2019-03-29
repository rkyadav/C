void	usePtr	(int*	iPtr)
{
  *iPtr	= 25;
}

int	main	()
{
  int	i;

  usePtr(&i);
  return(0);
}

/*********
 Our code:
 usePtr: push rbp
         mov  rsp,rbp
         mov     0x19,(rdi)
         leave
         ret

 main:   push rbp
         mov rsp,rbp
         sub  0x10,rsp
         mov     rbp,rax
         sub     0x4,rax
         mov     rax,rdi
         call    usePtr
         mov     0x0,eax
         leave
         ret


Their code:
(gdb) disass main
Dump of assembler code for function main:
   0x00000000004004e1 <+0>:     push   %rbp
   0x00000000004004e2 <+1>:     mov    %rsp,%rbp
   0x00000000004004e5 <+4>:     sub    $0x10,%rsp
   0x00000000004004e9 <+8>:     lea    -0x4(%rbp),%rax
   0x00000000004004ed <+12>:    mov    %rax,%rdi
   0x00000000004004f0 <+15>:    callq  0x4004cd <usePtr>
   0x00000000004004f5 <+20>:    mov    $0x0,%eax
   0x00000000004004fa <+25>:    leaveq
   0x00000000004004fb <+26>:    retq

(gdb) disass usePtr
Dump of assembler code for function usePtr:
   0x00000000004004cd <+0>:     push   %rbp
   0x00000000004004ce <+1>:     mov    %rsp,%rbp
   0x00000000004004d1 <+4>:     mov    %rdi,-0x8(%rbp)
   0x00000000004004d5 <+8>:     mov    -0x8(%rbp),%rax
   0x00000000004004d9 <+12>:    movl   $0x19,(%rax)
   0x00000000004004df <+18>:    pop    %rbp
   0x00000000004004e0 <+19>:    retq
 ******/
