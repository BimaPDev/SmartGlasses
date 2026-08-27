; FUN_2c62e574 @ 0x2c62e574 size=42
  push {r4,lr}
  movs r3,#0x0
  sub sp,#0x8
  mov.w r2,#0x400
  mov r4,r0
  mov r1,r3
  str r2,[sp,#0x0]
  ldrd r2,r0,[r0,#0x2c]
  bl 0x2c62e4a8
  ldr r2,[r4,#0x20]
  ldr r3,[r4,#0x28]
  subs r3,r3,r2
  mul r0,r3,r0
  add.w r0,r2,r0, asr #0xa
  add sp,#0x8
  pop {r4,pc}
