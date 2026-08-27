; FUN_2c5207a0 @ 0x2c5207a0 size=66
  push {r4,r5,r6,lr}
  mov.w r6,#0x400
  sub sp,#0x8
  mov r4,r1
  mov r5,r0
  ldr r2,[r0,#0x2c]
  mov r1,r3
  str r6,[sp,#0x0]
  ldr r0,[r0,#0x30]
  bl 0x2c62e4a8
  ldr r3,[r4,#0xc]
  str r3,[sp,#0x0]
  ldm.w r4,{r1,r2,r3}
  bl 0x2c62e2d0
  ldr r3,[r4,#0xc]
  ldr r2,[r4,#0x4]
  movs r1,#0x0
  str r6,[sp,#0x0]
  bl 0x2c62e27c
  ldr r2,[r5,#0x20]
  ldr r3,[r5,#0x28]
  subs r3,r3,r2
  mul r0,r3,r0
  add.w r0,r2,r0, asr #0xa
  add sp,#0x8
  pop {r4,r5,r6,pc}
