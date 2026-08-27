; FUN_140de9d8 @ 0x140de9d8 size=24
  push {r0,r1,r2,lr}
  str r3,[sp,#0x0]
  mov r3,r2
  mov r2,r1
  mov r1,r0
  ldr r0,[0x140de9f0]
  ldr r0,[r0,#0x0]
  bl 0x140de980
  add sp,#0xc
  pop.w pc
