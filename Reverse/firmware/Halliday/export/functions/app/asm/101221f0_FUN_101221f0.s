; FUN_101221f0 @ 0x101221f0 size=38
  push {r0,r1,r2,r4,r5,lr}
  ldrb r3,[r0,#0x0]
  ldrh r5,[r0,#0x6]
  mov r4,r1
  ldrb r1,[r0,#0x4]
  str r3,[sp,#0x4]
  ldrb r3,[r0,#0x1]
  adds r1,#0x1
  str r3,[sp,#0x0]
  ldrb r3,[r0,#0x2]
  ldrb r2,[r0,#0x3]
  addw r0,r5,#0x76c
  bl 0x100832fc
  str r0,[r4,#0x0]
  movs r0,#0x0
  add sp,#0xc
  pop {r4,r5,pc}
