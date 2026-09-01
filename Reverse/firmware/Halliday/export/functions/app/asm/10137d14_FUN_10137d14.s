; FUN_10137d14 @ 0x10137d14 size=40
  push {r3,lr}
  cbz r0,0x10137d36
  ldrb.w r2,[r0,#0x41]
  cmp r2,#0x4
  bne 0x10137d2e
  movs r2,#0x7
  strb.w r2,[r0,#0x41]
  bl 0x101378f0
  movs r0,#0x0
  pop {r3,pc}
  pop.w {r3,lr}
  b.w 0x10137b70
  mvn r0,#0x15
  b 0x10137d2c
