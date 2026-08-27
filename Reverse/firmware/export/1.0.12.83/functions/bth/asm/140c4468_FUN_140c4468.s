; FUN_140c4468 @ 0x140c4468 size=24
  push {r0,r1,r4,lr}
  mov r4,r0
  ldr r0,[r1,#0x0]
  add r2,sp,#0x4
  mov r1,sp
  subs r0,#0xc
  bl 0x140c4452
  str r0,[r4,#0x0]
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
