; FUN_100bf488 @ 0x100bf488 size=28
  ldr r3,[0x100bf4a4]
  ldr r1,[r3,#0x0]
  mov r2,r3
  cbz r1,0x100bf496
  ldrb r3,[r3,#0x12]
  cmp r3,#0x2
  bne 0x100bf4a0
  ldrb r0,[r2,#0x14]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
  movs r0,#0x1
  bx lr
