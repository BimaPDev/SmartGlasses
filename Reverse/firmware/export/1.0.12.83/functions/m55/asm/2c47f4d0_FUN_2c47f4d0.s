; FUN_2c47f4d0 @ 0x2c47f4d0 size=130
  subs r3,r1,#0x1
  sxtb r3,r3
  cmp r3,#0x0
  blt 0x2c47f52a
  add.w r12,r3,#0x1
  sxtb r2,r3
  add.w r12,r0,r12, lsl #0x2
  push {r4,lr}
  b 0x2c47f4ec
  sxtb r2,r3
  cmp r2,#0x0
  blt 0x2c47f502
  ldr.w r4,[r12,#-0x4]!
  uxtb.w lr,r3
  mov r1,r2
  subs r3,#0x1
  cmp r4,#0x0
  beq 0x2c47f4e6
  add.w r1,lr,#0x1
  sxtb r1,r1
  cbz r1,0x2c47f526
  mvn r3,#0xc0000000
  add r3,r1
  ldr.w r3,[r0,r3,lsl #0x2]
  cbz r3,0x2c47f51c
  movs r0,#0x0
  lsrs r3,r3,#0x1
  add.w r0,r0,#0x1
  bne 0x2c47f512
  uxth r3,r0
  subs r0,r1,#0x1
  add.w r0,r3,r0, lsl #0x5
  sxth r0,r0
  pop {r4,pc}
  mov r0,r1
  pop {r4,pc}
  cbz r1,0x2c47f54e
  mvn r3,#0xc0000000
  add r3,r1
  ldr.w r3,[r0,r3,lsl #0x2]
  cbz r3,0x2c47f544
  movs r0,#0x0
  lsrs r3,r3,#0x1
  add.w r0,r0,#0x1
  bne 0x2c47f53a
  uxth r3,r0
  subs r0,r1,#0x1
  add.w r0,r3,r0, lsl #0x5
  sxth r0,r0
  bx lr
  mov r0,r1
  bx lr
