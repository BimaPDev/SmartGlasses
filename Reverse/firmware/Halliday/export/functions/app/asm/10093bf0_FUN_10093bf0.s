; FUN_10093bf0 @ 0x10093bf0 size=44
  cmp r0,#0x12
  push {r0,r1,r2,lr}
  bls 0x10093c14
  ldr r3,[0x10093c1c]
  str r0,[sp,#0x4]
  str r3,[sp,#0x0]
  movs r0,#0x2
  movw r2,#0x11d
  ldr r3,[0x10093c20]
  ldr r1,[0x10093c24]
  bl 0x10094174
  mov.w r0,#0x0
  add sp,#0xc
  pop.w pc
  ldr r3,[0x10093c28]
  ldrh.w r0,[r3,r0,lsl #0x1]
  b 0x10093c0e
