; FUN_2c5377d0 @ 0x2c5377d0 size=90
  push {r4,r5,r6,lr}
  ldr r3,[0x2c53796c]
  sub sp,#0x28
  ldr.w r2,[r0,#0xc8]
  mov r5,r0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x24]
  mov.w r3,#0x0
  ldr r1,[0x2c537970]
  ldrd r4,r3,[r0,#0xb8]
  subs r4,r2,r4
  asrs r4,r4,#0x2
  subs r4,#0x1
  add.w r2,r4,r4, lsl #0x3
  ldr.w r4,[r0,#0xc0]
  subs r4,r3,r4
  ldr.w r3,[r0,#0xb4]
  asrs r4,r4,#0x2
  mul r4,r1,r4
  add.w r4,r4,r2, lsl #0x1
  ldr.w r2,[r0,#0xac]
  ldr r0,[0x2c537974]
  subs r3,r3,r2
  str r0,[sp,#0x0]
  movs r0,#0x4
  asrs r2,r3,#0x2
  ldr r3,[0x2c537978]
  mla r4,r1,r2,r4
  movw r2,#0x331
  ldr r1,[0x2c53797c]
  str r4,[sp,#0x4]
  ldr r4,[0x2c537980]
  bl 0x2c62c82c
