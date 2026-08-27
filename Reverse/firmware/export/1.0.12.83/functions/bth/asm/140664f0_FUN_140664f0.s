; FUN_140664f0 @ 0x140664f0 size=80
  ldr r3,[0x14066540]
  ldr.w r3,[r3,#0x84]
  cbz r3,0x1406653c
  push {lr}
  b 0x1406650a
  ldrb.w r12,[r3,#0x6]
  add r12,lr
  cmp r12,r0
  bgt 0x14066518
  ldr r3,[r3,#0x0]
  cbz r3,0x14066512
  ldrh.w lr,[r3,#0x4]
  cmp r0,lr
  bcs 0x140664fc
  movs r0,#0x1
  pop.w pc
  ldrb.w r12,[r3,#0xa]
  ands r12,r12,#0x10
  bne 0x14066512
  sub.w lr,r0,lr
  add.w lr,lr,lr, lsl #0x1
  add.w lr,r3,lr, lsl #0x1
  add.w r0,lr,#0xc
  str r0,[r2,#0x0]
  mov r0,r12
  str r3,[r1,#0x0]
  pop.w pc
  movs r0,#0x1
  bx lr
