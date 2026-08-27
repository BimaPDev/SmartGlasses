; FUN_2c4fd344 @ 0x2c4fd344 size=82
  push {r4,r5,r6,lr}
  ldrb r2,[r0,#0x0]
  sub sp,#0x10
  cmp r2,#0x5
  bhi 0x2c4fd422
  ldr r5,[0x2c4fd428]
  add.w r3,r2,r2, lsl #0x1
  add.w r3,r5,r3, lsl #0x3
  ldr r1,[r3,#0x4]
  cmp r1,#0x0
  bne 0x2c4fd406
  ldr r3,[r3,#0x8]
  mov r4,r0
  str r1,[sp,#0x8]
  movs r0,#0x4
  ldr r1,[0x2c4fd42c]
  str r2,[sp,#0x4]
  str r3,[sp,#0xc]
  str r1,[sp,#0x0]
  movs r1,#0x65
  ldr r3,[0x2c4fd430]
  ldr r2,[0x2c4fd434]
  bl 0x2c673d88
  ldr r0,[r3,#0x8]
  ldr r4,[0x2c4fd42c]
  str r2,[sp,#0x4]
  ldr r3,[0x2c4fd430]
  ldr r2,[0x2c4fd434]
  str r4,[sp,#0x0]
  strd r1,r0,[sp,#0x8]
  movs r1,#0x65
  movs r0,#0x4
  bl 0x2c673d88
  ldr r0,[0x2c4fd444]
  bl 0x2c673ca8
