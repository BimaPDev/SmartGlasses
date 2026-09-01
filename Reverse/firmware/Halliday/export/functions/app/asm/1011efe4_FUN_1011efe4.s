; FUN_1011efe4 @ 0x1011efe4 size=30
  push {r0,r1,r4,lr}
  ldr r4,[r0,#0x10]
  mov r2,sp
  ldrb r1,[r4,#0x19]
  ldr r0,[r4,#0x14]
  bl 0x1011ee5e
  ldr r0,[r4,#0x14]
  ldrb r1,[r4,#0x19]
  ldr r3,[r0,#0x8]
  ldr r3,[r3,#0xc]
  blx r3
  ldr r0,[sp,#0x4]
  add sp,#0x8
  pop {r4,pc}
