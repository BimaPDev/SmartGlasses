; FUN_140950e4 @ 0x140950e4 size=32
  ldr r3,[0x1408dd50]
  str r0,[r3,#0x0]
  bx lr
  push {r3,r4,r5,lr}
  mov r5,r1
  mov r4,r2
  bl 0x1408dd18
  mov r0,r5
  bl 0x1408dd28
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x1408dd48
