; FUN_14041e80 @ 0x14041e80 size=86
  push {r4,r5,r6,lr}
  ldr r4,[0x14041ed8]
  sub sp,#0x18
  ldrb.w r3,[r4,#0x407]
  cmp r3,#0x4
  beq 0x14041ea8
  ldr r5,[0x14041edc]
  ldr.w r2,[r5,r3,lsl #0x2]
  cbz r2,0x14041eae
  blx r2
  movs r0,#0x1
  ldrb.w r3,[r4,#0x407]
  add r3,r0
  strb.w r3,[r4,#0x407]
  add sp,#0x18
  pop {r4,r5,r6,pc}
  movs r0,#0x0
  add sp,#0x18
  pop {r4,r5,r6,pc}
  movw r1,#0x51c
  movs r6,#0x1
  str r3,[sp,#0xc]
  ldr r3,[0x14041ee0]
  ldr r2,[0x14041ee4]
  str r3,[sp,#0x8]
  ldr r3,[0x14041ee8]
  movs r0,#0x4
  str r3,[sp,#0x0]
  str r1,[sp,#0x4]
  ldr r3,[0x14041eec]
  str r6,[sp,#0x10]
  bl 0x1402a6e8
  ldrb.w r3,[r4,#0x407]
  ldr.w r2,[r5,r3,lsl #0x2]
  b 0x14041e96
