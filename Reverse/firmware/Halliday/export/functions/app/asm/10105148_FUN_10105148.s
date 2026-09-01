; FUN_10105148 @ 0x10105148 size=28
  push {r4,lr}
  mov r4,r0
  ldr r3,[r1,#0x4]
  sub sp,#0x8
  str r3,[sp,#0x0]
  mov r0,r2
  ldr r3,[r1,#0x0]
  ldrd r1,r2,[r4,#0x0]
  bl 0x10105038
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
