; FUN_2c4a9392 @ 0x2c4a9392 size=62
  push {r4,r5,lr}
  sub sp,#0x14
  bhi 0x2c4a93d0
  ldr r3,[0x2c4a93d8]
  ldr.w r5,[r3,r0,lsl #0x2]
  cbz r5,0x2c4a93d0
  ldr r0,[r5,#0x0]
  bl 0x2c4ad3e0
  subs r4,r0,#0x0
  blt 0x2c4a93b0
  mov r0,r4
  add sp,#0x14
  pop {r4,r5,pc}
  ldr r1,[0x2c4a93dc]
  ldr r2,[0x2c4a93e0]
  str r1,[sp,#0x8]
  movw r1,#0x5d3
  ldrb r0,[r5,#0xc]
  ldr r3,[0x2c4a93e4]
  str r2,[sp,#0x0]
  str r0,[sp,#0x4]
  movs r0,#0x4
  ldr r2,[0x2c4a93e8]
  bl 0x2c673d88
  mvn r4,#0x15
  b 0x2c4a93aa
