 80484ad <main>:
 80484ad:	8d 4c 24 04          	lea    ecx,[esp+0x4]
 80484b1:	83 e4 f0             	and    esp,0xfffffff0
 80484b4:	ff 71 fc             	push   DWORD PTR [ecx-0x4]
 80484b7:	55                   	push   ebp
 80484b8:	89 e5                	mov    ebp,esp
 80484ba:	51                   	push   ecx
 80484bb:	83 ec 14             	sub    esp,0x14
 80484be:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
 80484c5:	eb 14                	jmp    80484db <main+0x2e>
 80484c7:	83 ec 0c             	sub    esp,0xc
 80484ca:	68 7c 85 04 08       	push   0x804857c
 80484cf:	e8 7c fe ff ff       	call   8048350 <puts@plt>
 80484d4:	83 c4 10             	add    esp,0x10
 80484d7:	83 45 f4 01          	add    DWORD PTR [ebp-0xc],0x1
 80484db:	83 7d f4 09          	cmp    DWORD PTR [ebp-0xc],0x9
 80484df:	7e e6                	jle    80484c7 <main+0x1a>
 80484e1:	b8 00 00 00 00       	mov    eax,0x0
 80484e6:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 80484e9:	c9                   	leave  
 80484ea:	8d 61 fc             	lea    esp,[ecx-0x4]
 80484ed:	c3                   	ret    
 80484ee:	66 90                	xchg   ax,ax
