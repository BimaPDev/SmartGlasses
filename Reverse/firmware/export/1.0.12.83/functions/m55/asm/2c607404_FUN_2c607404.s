; FUN_2c607404 @ 0x2c607404 size=58
  push {r4,r5,r6,lr}
  mov r5,r0
  movs r2,#0x12
  movs r1,#0x0
  bl 0x2c6033b4
  movs r2,#0x13
  mov r4,r0
  movs r1,#0x0
  mov r0,r5
  bl 0x2c6033b4
  mov r6,r0
  movs r2,#0x32
  movs r1,#0x0
  add r4,r6
  mov r0,r5
  bl 0x2c6033b4
  ldrh r2,[r5,#0x18]
  rsb.w r4,r4,#0x1
  ldrh r3,[r5,#0x14]
  sub.w r0,r4,r0, lsl #0x1
  add r0,r2
  subs r0,r0,r3
  sxth r0,r0
  pop {r4,r5,r6,pc}
