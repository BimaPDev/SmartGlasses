; FUN_140be4ac @ 0x140be4ac size=40
  ldr r0,[0x140be4e8]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x140be984
  ldrb r3,[r4,#0x1]
  cmp r3,#0x66
  bne 0x140be4a0
  ldrb r3,[r4,#0x2]
  rsbs.w r4,r3,#0x66
  bne 0x140be4a0
  ldr r0,[0x140be4ec]
  bl 0x140be984
  ldr r3,[0x140be4e4]
  strb r4,[r3,#0x1]
  add sp,#0x8
  pop {r4,pc}
