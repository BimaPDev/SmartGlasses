; FUN_2c476968 @ 0x2c476968 size=34
  cbz r0,0x2c47697c
  ldr r2,[0x2c47698c]
  push {r3,lr}
  ldr r3,[r0,#0x0]
  cmp r3,r2
  bne 0x2c47697e
  pop.w {r3,lr}
  b.w 0x2c47573c
  bx lr
  ldr r3,[0x2c476990]
  movs r1,#0x34
  ldr r2,[0x2c476994]
  ldr r0,[0x2c476998]
  bl 0x2c668484
