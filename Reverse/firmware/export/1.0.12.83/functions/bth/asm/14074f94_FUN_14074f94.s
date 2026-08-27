; FUN_14074f94 @ 0x14074f94 size=82
  push {r4,r5,r6,lr}
  ldrb r2,[r0,#0x0]
  sub sp,#0x8
  subs r4,r2,#0x1
  uxtb r3,r4
  cmp r3,#0x27
  bhi 0x14074fce
  ldr r5,[0x14074fe8]
  add.w r4,r4,r4, lsl #0x2
  lsls r6,r4,#0x3
  add.w r4,r5,r4, lsl #0x3
  ldr r3,[r4,#0x20]
  cmp r3,r0
  bne 0x14074fd8
  bl 0x140756c0
  movs r3,#0x0
  ldr r2,[r4,#0x20]
  strb r3,[r5,r6]
  strb r3,[r2,#0x0]
  strd r3,r3,[r4,#0x20]
  add sp,#0x8
  pop.w {r4,r5,r6,lr}
  b.w 0x140756b4
  mov r3,lr
  ldr r1,[0x14074fec]
  ldr r0,[0x14074ff0]
  bl 0x1402b0f8
  mov r2,r0
  ldr r1,[0x14074fec]
  ldr r0,[0x14074ff4]
  str.w lr,[sp,#0x0]
  bl 0x1402b0f8
