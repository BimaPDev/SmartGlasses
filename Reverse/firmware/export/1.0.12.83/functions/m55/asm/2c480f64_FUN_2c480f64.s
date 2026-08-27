; FUN_2c480f64 @ 0x2c480f64 size=60
  push {r4,r5,lr}
  ldr r5,[0x2c480fa8]
  sub sp,#0x1c
  mov r4,r0
  ldrb r3,[r5,#0x0]
  cmp r3,#0x4
  bhi 0x2c480fa0
  ldr r2,[0x2c480fac]
  ldr.w r1,[r2,r3,lsl #0x2]
  ldr.w r2,[r2,r4,lsl #0x2]
  movs r0,#0x4
  str r3,[sp,#0x8]
  str r2,[sp,#0x14]
  ldr r2,[0x2c480fb0]
  ldr r3,[0x2c480fb4]
  strd r1,r4,[sp,#0xc]
  ldr r1,[0x2c480fb8]
  strd r2,r1,[sp,#0x0]
  ldr r2,[0x2c480fbc]
  mov.w r1,#0x152
  bl 0x2c673d88
  ldr r1,[0x2c480fc0]
  ldr r2,[0x2c480fac]
  b 0x2c480f78
