; FUN_10131274 @ 0x10131274 size=38
  push {r4,lr}
  movs r2,#0x4a
  movs r1,#0x0
  mov r4,r0
  bl 0x1011ea48
  bl 0x1005e048
  ldr r3,[r0,#0x4]
  str r3,[r4,#0x4]
  bl 0x1011bb2e
  clz r0,r0
  lsrs r0,r0,#0x5
  strb r0,[r4,#0x1]
  movs r0,#0x0
  strb r0,[r4,#0x3]
  pop {r4,pc}
