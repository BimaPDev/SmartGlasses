; FUN_2c476ac8 @ 0x2c476ac8 size=34
  cbz r0,0x2c476adc
  ldr r2,[0x2c476aec]
  push {r3,lr}
  ldr r3,[r0,#0x0]
  cmp r3,r2
  bne 0x2c476ade
  pop.w {r3,lr}
  b.w 0x2c47573c
  bx lr
  ldr r3,[0x2c476af0]
  movs r1,#0x34
  ldr r2,[0x2c476af4]
  ldr r0,[0x2c476af8]
  bl 0x2c668484
