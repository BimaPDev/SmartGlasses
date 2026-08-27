; FUN_2c5e41ac @ 0x2c5e41ac size=32
  push {r4,lr}
  ldr r3,[0x2c5e41cc]
  sub sp,#0x8
  mov r4,r0
  str r1,[sp,#0x4]
  strb r0,[r3,#0xc]
  bl 0x2c5e4128
  mov r3,r0
  ldr r1,[sp,#0x4]
  mov r0,r4
  ldr r3,[r3,#0x50]
  add sp,#0x8
  pop.w {r4,lr}
  bx r3
