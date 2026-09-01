; FUN_100652c4 @ 0x100652c4 size=24
  mov r2,r0
  cbz r0,0x100652da
  ldr r3,[0x100652dc]
  ldrb r0,[r3,#0x0]
  cbnz r0,0x100652da
  ldr r3,[0x100652e0]
  ldr r0,[r3,#0x0]
  subs r0,r0,r2
  it ne
  mov.ne r0,#0x1
  bx lr
  bx lr
