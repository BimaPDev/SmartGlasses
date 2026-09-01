; FUN_1008ca4c @ 0x1008ca4c size=58
  movs r3,#0x0
  push {r0,r1,r4,r5,r6,lr}
  ldr r4,[0x1008ca88]
  ldr.w r6,[r4,r3,lsl #0x3]
  uxtb r2,r3
  add.w r5,r4,r3, lsl #0x3
  cbz r6,0x1008ca7c
  adds r3,#0x1
  cmp r3,#0x10
  bne 0x1008ca52
  ldr r3,[0x1008ca8c]
  movs r0,#0x2
  str r3,[sp,#0x0]
  movs r2,#0x5a
  ldr r3,[0x1008ca90]
  ldr r1,[0x1008ca94]
  bl 0x10094174
  mov.w r0,#0xffffffff
  add sp,#0x8
  pop {r4,r5,r6,pc}
  str.w r0,[r4,r3,lsl #0x3]
  str r1,[r5,#0x4]
  sxth r0,r2
  b 0x1008ca78
