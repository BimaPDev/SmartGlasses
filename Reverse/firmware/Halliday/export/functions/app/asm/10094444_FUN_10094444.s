; FUN_10094444 @ 0x10094444 size=56
  movs r3,#0x0
  push {r0,r1,r4,lr}
  ldr r2,[0x1009447c]
  ldr.w r4,[r2,r3,lsl #0x3]
  add.w r1,r2,r3, lsl #0x3
  cmp r4,r0
  bne 0x10094462
  ldrb r3,[r1,#0x6]
  bfc r3,#0x0,#0x1
  strb r3,[r1,#0x6]
  add sp,#0x8
  pop {r4,pc}
  adds r3,#0x1
  cmp r3,#0x10
  bne 0x1009444a
  ldr r3,[0x10094480]
  movw r2,#0x157
  str r3,[sp,#0x0]
  movs r0,#0x3
  ldr r3,[0x10094484]
  ldr r1,[0x10094488]
  bl 0x10094174
  b 0x1009445e
