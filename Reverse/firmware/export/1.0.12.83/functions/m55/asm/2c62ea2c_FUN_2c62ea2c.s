; FUN_2c62ea2c @ 0x2c62ea2c size=58
  push {r4,r5,lr}
  movs r3,#0x0
  sub sp,#0xc
  mov.w r5,#0x400
  mov r4,r0
  mov r1,r3
  str r5,[sp,#0x0]
  ldrd r2,r0,[r0,#0x2c]
  bl 0x2c62e4a8
  movw r3,#0x3b6
  mov.w r2,#0x384
  movs r1,#0x0
  str r5,[sp,#0x0]
  bl 0x2c62e27c
  ldr r2,[r4,#0x20]
  ldr r3,[r4,#0x28]
  subs r3,r3,r2
  mul r0,r3,r0
  add.w r0,r2,r0, asr #0xa
  add sp,#0xc
  pop {r4,r5,pc}
