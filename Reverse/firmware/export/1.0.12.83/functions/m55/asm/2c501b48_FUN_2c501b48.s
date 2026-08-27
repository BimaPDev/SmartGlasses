; FUN_2c501b48 @ 0x2c501b48 size=46
  push {r4,lr}
  mov r4,r0
  ldr r1,[0x2c501b78]
  bl 0x2c62e838
  movs r2,#0x0
  ldrb.w r3,[r4,#0x60]
  strb.w r2,[r4,#0x61]
  cbz r3,0x2c501b6a
  ldr r1,[r4,#0x0]
  ldr r0,[r4,#0x18]
  pop.w {r4,lr}
  b.w 0x2c63140c
  ldr r1,[r4,#0x4]
  ldr r0,[r4,#0x18]
  pop.w {r4,lr}
  b.w 0x2c63140c
