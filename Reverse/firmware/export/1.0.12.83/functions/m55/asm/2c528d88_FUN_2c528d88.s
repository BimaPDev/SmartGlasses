; FUN_2c528d88 @ 0x2c528d88 size=54
  push {r4,lr}
  ldr r2,[r3,#0x1c]
  sub sp,#0x8
  add.w r3,r3,r2, lsl #0x3
  ldrb.w r3,[r3,#0x35]
  cmp r3,#0x64
  beq 0x2c528dbc
  ldr r4,[0x2c528de0]
  movw r2,#0x187
  ldr r1,[0x2c528de4]
  movs r0,#0x4
  ldr r3,[0x2c528de8]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
  ldr r4,[0x2c528dec]
  mov.w r2,#0x184
  ldr r1,[0x2c528de4]
  movs r0,#0x4
  ldr r3,[0x2c528de8]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
