; FUN_2c480ef0 @ 0x2c480ef0 size=48
  push {r4,lr}
  sub sp,#0x18
  bhi 0x2c480f22
  ldr r3,[0x2c480f4c]
  ldr.w r2,[r3,r1,lsl #0x2]
  ldr r3,[0x2c480f50]
  ldr r4,[0x2c480f54]
  str r1,[sp,#0x4]
  mov.w r1,#0x170
  str r4,[sp,#0x0]
  strd r2,r0,[sp,#0x8]
  ldr.w r0,[r3,r0,lsl #0x2]
  ldr r2,[0x2c480f58]
  str r0,[sp,#0x10]
  movs r0,#0x4
  ldr r3,[0x2c480f5c]
  bl 0x2c673d88
  ldr r2,[0x2c480f60]
  b 0x2c480efc
