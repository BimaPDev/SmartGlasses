; FUN_2c670c78 @ 0x2c670c78 size=56
  ldr r2,[r0,#0x10]
  push {r4,r5,lr}
  ldr r4,[r1,#0x10]
  subs r2,r2,r4
  bne 0x2c670ca0
  add.w r3,r0,#0x14
  adds r1,#0x14
  add.w r0,r3,r4, lsl #0x2
  add.w r1,r1,r4, lsl #0x2
  ldr.w r5,[r0,#-0x4]!
  ldr.w r4,[r1,#-0x4]!
  cmp r5,r4
  beq 0x2c670ca4
  bcc 0x2c670caa
  movs r2,#0x1
  mov r0,r2
  pop {r4,r5,pc}
  cmp r3,r0
  bcc 0x2c670c90
  b 0x2c670ca0
  mov.w r2,#0xffffffff
  b 0x2c670ca0
