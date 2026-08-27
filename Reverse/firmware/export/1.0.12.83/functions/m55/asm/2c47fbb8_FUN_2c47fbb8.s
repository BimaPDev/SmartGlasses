; FUN_2c47fbb8 @ 0x2c47fbb8 size=94
  push {r4,r5,lr}
  sub sp,#0xc
  mov r5,r3
  mov r4,r0
  ldrsb.w r3,[sp,#0x18]
  str r3,[sp,#0x4]
  bl 0x2c47f410
  ldr r3,[sp,#0x4]
  cbnz r0,0x2c47fc06
  add.w r12,r3,#0xffffffff
  sxtb.w r12,r12
  cmp.w r12,#0x0
  blt 0x2c47fc06
  add.w lr,r12,#0x1
  add.w r2,r5,lr, lsl #0x2
  add.w lr,r4,lr, lsl #0x2
  b 0x2c47fbf2
  bcc 0x2c47fc06
  tst r12,#0x80
  bne 0x2c47fc06
  ldr.w r0,[r2,#-0x4]!
  add.w r12,r12,#0xffffffff
  ldr.w r1,[lr,#-0x4]!
  cmp r0,r1
  bls 0x2c47fbea
  add sp,#0xc
  pop {r4,r5,pc}
  mov r2,r5
  mov r1,r4
  mov r0,r4
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x2c47f470
