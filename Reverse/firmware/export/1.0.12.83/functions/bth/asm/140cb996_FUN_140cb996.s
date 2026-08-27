; FUN_140cb996 @ 0x140cb996 size=44
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  bl 0x140d89fe
  add.w r1,r4,#0x6c
  mov r0,r4
  bl 0x140cb958
  str r5,[r4,#0x7c]
  clz r5,r5
  movs r3,#0x0
  lsrs r5,r5,#0x5
  str r3,[r4,#0x74]
  strb.w r3,[r4,#0x78]
  str r3,[r4,#0x70]
  str r3,[r4,#0x10]
  str r5,[r4,#0x14]
  pop {r3,r4,r5,pc}
