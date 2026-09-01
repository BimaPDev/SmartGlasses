; FUN_10132808 @ 0x10132808 size=28
  push {r4,lr}
  mov r4,r1
  movs r1,#0x4
  bl 0x100c1fe4
  lsrs r3,r4,#0x10
  lsrs r2,r4,#0x18
  strb r3,[r0,#0x1]
  ubfx r3,r4,#0x8,#0x8
  strb r2,[r0,#0x0]
  strb r3,[r0,#0x2]
  strb r4,[r0,#0x3]
  pop {r4,pc}
