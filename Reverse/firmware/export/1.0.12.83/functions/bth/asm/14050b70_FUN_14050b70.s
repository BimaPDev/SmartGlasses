; FUN_14050b70 @ 0x14050b70 size=44
  push {r4,lr}
  mov.w r4,#0x400
  sub sp,#0x8
  bl 0x1404a1b4
  movs r3,#0x0
  movs r1,#0x1
  ldr r2,[0x14050b9c]
  ldr r0,[r0,#0x34]
  strh r4,[r2,#0x0]
  ldr r4,[0x14050ba0]
  strd r3,r4,[sp,#0x0]
  ldr r4,[0x14050ba4]
  strb r1,[r2,#0xa]
  str.w r4,[r2,#0x2]
  bl 0x14093198
  add sp,#0x8
  pop {r4,pc}
