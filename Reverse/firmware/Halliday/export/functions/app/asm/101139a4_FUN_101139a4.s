; FUN_101139a4 @ 0x101139a4 size=22
  mov r3,r0
  cbz r0,0x101139b4
  ldr r2,[0x101139bc]
  ldmia r2!,{r0,r1}
  str r0,[r3,#0x0]
  str r1,[r3,#0x4]
  movs r0,#0x0
  bx lr
  mvn r0,#0x15
  bx lr
