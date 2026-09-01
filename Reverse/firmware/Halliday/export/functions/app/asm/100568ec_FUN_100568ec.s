; FUN_100568ec @ 0x100568ec size=30
  push {r4,lr}
  movs r4,#0x0
  ldr r3,[0x1005690c]
  movs r0,#0x10
  str r4,[r3,#0x0]
  bl 0x10055be0
  movs r0,#0x10
  bl 0x1011a68e
  movs r2,#0x8
  ldr r3,[0x10056910]
  mov r0,r4
  str r2,[r3,#0x0]
  pop {r4,pc}
