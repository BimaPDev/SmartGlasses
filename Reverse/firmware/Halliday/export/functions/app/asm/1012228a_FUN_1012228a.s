; FUN_1012228a @ 0x1012228a size=44
  push {r4,r5,lr}
  ldr r3,[r0,#0x4]
  ldrb r4,[r0,#0x3]
  orr.w r1,r4,r3, lsl #0x8
  ldrb r4,[r0,#0x2]
  lsrs r3,r3,#0x10
  orr.w r1,r4,r1, lsl #0x8
  ldrb r4,[r0,#0x1]
  lsls r3,r3,#0x8
  orr.w r3,r3,r1, lsr #0x18
  orr.w r1,r4,r1, lsl #0x8
  ldrb r4,[r0,#0x0]
  lsls r3,r3,#0x8
  orr.w r0,r4,r1, lsl #0x8
  orr.w r1,r3,r1, lsr #0x18
  pop {r4,r5,pc}
