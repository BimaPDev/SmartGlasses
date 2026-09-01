; FUN_10070a84 @ 0x10070a84 size=54
  movs r2,#0xa
  sdiv r1,r0,r2
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x10070abc]
  mls r2,r2,r1,r0
  ldr r0,[0x10070ac0]
  bl 0x10119dc2
  ldr r3,[r5,#0x0]
  bic r3,r3,#0x1fe0000
  orr.w r3,r3,r4, lsl #0x11
  str r3,[r5,#0x0]
  bl 0x10070810
  ldr r3,[0x10070ac4]
  ldr r1,[r5,#0x0]
  ldr r0,[0x10070ac8]
  ldr r2,[r3,#0x0]
  pop.w {r3,r4,r5,lr}
  b.w 0x10119dc2
