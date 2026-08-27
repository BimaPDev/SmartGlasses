; FUN_14093034 @ 0x14093034 size=24
  cbz r0,0x14093058
  push {r4,lr}
  mov r4,r0
  ldr r2,[0x1409305c]
  ldrb.w r3,[r4,#0x22]
  ldr r1,[0x14093060]
  movs r0,#0x42
  bl 0x1402a64c
  movs r0,#0x1
  bx lr
