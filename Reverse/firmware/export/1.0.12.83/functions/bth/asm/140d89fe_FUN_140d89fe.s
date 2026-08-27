; FUN_140d89fe @ 0x140d89fe size=44
  movs r2,#0x6
  movs r3,#0x0
  push {r0,r1,r4,lr}
  strd r2,r3,[r0,#0x4]
  movw r3,#0x1002
  mov r4,r0
  str r3,[r0,#0xc]
  add r0,sp,#0x4
  bl 0x140c0d60
  add r1,sp,#0x4
  add.w r0,r4,#0x6c
  bl 0x140c0394
  add r0,sp,#0x4
  bl 0x140c0378
  add sp,#0x8
  pop {r4,pc}
