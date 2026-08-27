; FUN_2c501b0c @ 0x2c501b0c size=46
  push {r4,lr}
  mov r4,r0
  ldr r1,[0x2c501b3c]
  bl 0x2c62e838
  movs r2,#0x1
  ldrb.w r3,[r4,#0x60]
  strb.w r2,[r4,#0x61]
  cbz r3,0x2c501b2e
  ldr r1,[r4,#0x8]
  ldr r0,[r4,#0x18]
  pop.w {r4,lr}
  b.w 0x2c63140c
  ldr r1,[r4,#0xc]
  ldr r0,[r4,#0x18]
  pop.w {r4,lr}
  b.w 0x2c63140c
