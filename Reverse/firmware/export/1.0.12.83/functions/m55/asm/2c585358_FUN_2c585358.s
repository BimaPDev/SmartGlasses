; FUN_2c585358 @ 0x2c585358 size=54
  push {r4,r5,r6,r7,r8,r9,lr}
  ldr r4,[r0,#0x28]
  sub sp,#0x2c
  mov r7,r3
  ldr r3,[0x2c585480]
  add.w r4,r1,r4, lsl #0x1
  mov r5,r0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x24]
  mov.w r3,#0x0
  ldr r3,[0x2c585484]
  subs r4,#0x3
  mov r6,r1
  str r3,[sp,#0x0]
  mov r9,r2
  ldr r3,[0x2c585488]
  movs r2,#0xbd
  ldr r1,[0x2c58548c]
  movs r0,#0x4
  str r4,[sp,#0x4]
  ldr.w r8,[sp,#0x48]
  bl 0x2c62c82c
