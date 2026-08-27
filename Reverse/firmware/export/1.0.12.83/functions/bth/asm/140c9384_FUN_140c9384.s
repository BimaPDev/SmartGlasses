; FUN_140c9384 @ 0x140c9384 size=96
  push {r4,r5,r6,r7,r8,lr}
  mov r7,r0
  ldr r0,[0x140c93e4]
  bl 0x140c03c0
  mov r6,r0
  ldr r3,[r7,#0x0]
  ldr.w r8,[r3,#0xc]
  ldr.w r5,[r8,r0,lsl #0x2]
  cbnz r5,0x140c93dc
  movs r0,#0x70
  bl 0x140bff34
  ldr r3,[0x140c93e8]
  mov r4,r0
  mov r1,r7
  str r5,[r0,#0x4]
  str r3,[r0,#0x0]
  strb r5,[r0,#0x10]
  str r5,[r0,#0x3c]
  strb.w r5,[r0,#0x6c]
  strd r5,r5,[r0,#0x8]
  strd r5,r5,[r0,#0x14]
  strd r5,r5,[r0,#0x1c]
  strd r5,r5,[r0,#0x24]
  strd r5,r5,[r0,#0x2c]
  strd r5,r5,[r0,#0x34]
  bl 0x140d3008
  mov r2,r6
  mov r1,r4
  ldr r0,[r7,#0x0]
  bl 0x140c054c
  ldr.w r0,[r8,r6,lsl #0x2]
  pop.w {r4,r5,r6,r7,r8,pc}
