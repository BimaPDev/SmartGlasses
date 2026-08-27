; FUN_14050b34 @ 0x14050b34 size=46
  push {r4,lr}
  sub sp,#0x8
  bl 0x1404a1b4
  movs r1,#0x1
  movw r12,#0x602
  ldr r2,[0x14050b64]
  ldr r3,[0x14050b68]
  ldr r4,[0x14050b6c]
  str.w r3,[r2,#0x2]
  ldr r0,[r0,#0x34]
  movs r3,#0x0
  strd r1,r4,[sp,#0x0]
  strb r1,[r2,#0xa]
  strh.w r12,[r2,#0x0]
  bl 0x14093198
  add sp,#0x8
  pop {r4,pc}
