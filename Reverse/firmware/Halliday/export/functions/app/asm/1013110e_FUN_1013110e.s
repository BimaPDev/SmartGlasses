; FUN_1013110e @ 0x1013110e size=30
  push {r0,r1,r4,lr}
  strb r1,[r0,#0x0]
  movs r1,#0x0
  str r3,[sp,#0x4]
  adds r3,r0,#0x3
  strb r2,[r0,#0x1]
  strb r1,[r0,#0x2]
  mov r0,r3
  add r1,sp,#0x4
  mov r4,r2
  bl 0x1011ea40
  add r0,r4
  add sp,#0x8
  pop {r4,pc}
