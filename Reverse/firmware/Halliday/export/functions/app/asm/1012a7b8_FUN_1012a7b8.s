; FUN_1012a7b8 @ 0x1012a7b8 size=54
  push {r0,r1,r2,r4,r5,lr}
  mov.w r5,#0x400
  movs r3,#0x0
  mov r4,r0
  str r5,[sp,#0x0]
  mov r1,r3
  ldr r2,[r0,#0x2c]
  ldr r0,[r0,#0x30]
  bl 0x1012b19a
  movw r3,#0x3b6
  mov.w r2,#0x384
  movs r1,#0x0
  str r5,[sp,#0x0]
  bl 0x1012b0b6
  ldr r2,[r4,#0x20]
  ldr r3,[r4,#0x28]
  subs r3,r3,r2
  muls r0,r3
  add.w r0,r2,r0, asr #0xa
  add sp,#0xc
  pop {r4,r5,pc}
