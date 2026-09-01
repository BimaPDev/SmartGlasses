; FUN_101386ac @ 0x101386ac size=68
  push {r4,r5,r6,lr}
  mov r6,r2
  mov r4,r3
  bl 0x100e4184
  mov r5,r0
  cbz r0,0x101386ec
  movs r1,#0x5
  adds r0,#0x8
  bl 0x100c1fe4
  movs r3,#0x0
  movs r2,#0x9
  str r3,[r0,#0x0]
  strb r3,[r0,#0x4]
  ldrb r3,[r0,#0x0]
  and r4,r4,#0x7f
  bfi r3,r6,#0x0,#0x4
  strb r3,[r0,#0x0]
  ldrb r3,[r0,#0x1]
  bfi r3,r2,#0x3,#0x5
  strb r3,[r0,#0x1]
  movs r3,#0x7c
  strb r3,[r0,#0x2]
  ldrb.w r3,[sp,#0x10]
  orr.w r4,r4,r3, lsl #0x7
  strb r4,[r0,#0x3]
  mov r0,r5
  pop {r4,r5,r6,pc}
