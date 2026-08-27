; FUN_2c6522a8 @ 0x2c6522a8 size=94
  push {r4,r5,r6,r7,r8,lr}
  mov r7,r0
  ldr r0,[0x2c652308]
  bl 0x2c64cf04
  mov r6,r0
  ldr r3,[r7,#0x0]
  ldr.w r8,[r3,#0xc]
  ldr.w r5,[r8,r0,lsl #0x2]
  cbnz r5,0x2c6522fe
  movs r0,#0x44
  bl 0x2c64ca5c
  ldr r3,[0x2c65230c]
  mov r4,r0
  mov r1,r7
  strh r5,[r0,#0x10]
  strb r5,[r0,#0x12]
  str r5,[r0,#0x34]
  strb.w r5,[r0,#0x43]
  strd r3,r5,[r0,#0x0]
  strd r5,r5,[r0,#0x8]
  strd r5,r5,[r0,#0x14]
  strd r5,r5,[r0,#0x1c]
  strd r5,r5,[r0,#0x24]
  strd r5,r5,[r0,#0x2c]
  bl 0x2c659748
  mov r2,r6
  mov r1,r4
  ldr r0,[r7,#0x0]
  bl 0x2c64d090
  ldr.w r0,[r8,r6,lsl #0x2]
  pop.w {r4,r5,r6,r7,r8,pc}
