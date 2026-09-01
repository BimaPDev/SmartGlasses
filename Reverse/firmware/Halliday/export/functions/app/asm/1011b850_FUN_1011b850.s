; FUN_1011b850 @ 0x1011b850 size=28
  push {r0,r1,r2,r3,r4,lr}
  lsls r3,r3,#0x9
  ldr r4,[r0,#0x8]
  str r3,[sp,#0x8]
  movs r3,#0x0
  lsls r1,r1,#0x9
  str r3,[sp,#0xc]
  str r2,[sp,#0x0]
  ldr r4,[r4,#0x0]
  mov r2,r1
  asrs r3,r1,#0x1f
  blx r4
  add sp,#0x10
  pop {r4,pc}
