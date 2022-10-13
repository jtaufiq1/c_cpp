0000000000400586 <main>:
  400586:	55                   	push   rbp
  400587:	48 89 e5             	mov    rbp,rsp
  40058a:	48 83 ec 10          	sub    rsp,0x10
  40058e:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [rbp-0x4],0x0
  400595:	eb 0e                	jmp    4005a5 <main+0x1f>
  400597:	bf 58 06 40 00       	mov    edi,0x400658
  40059c:	e8 ef fe ff ff       	call   400490 <puts@plt>
  4005a1:	83 45 fc 01          	add    DWORD PTR [rbp-0x4],0x1
  4005a5:	83 7d fc 09          	cmp    DWORD PTR [rbp-0x4],0x9
  4005a9:	7e ec                	jle    400597 <main+0x11>
  4005ab:	b8 00 00 00 00       	mov    eax,0x0
  4005b0:	c9                   	leave  
  4005b1:	c3                   	ret    
  4005b2:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  4005b9:	00 00 00 
  4005bc:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
