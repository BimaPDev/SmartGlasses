; FUN_140a1134 @ 0x140a1134 size=38
  push {r4,r5,lr}
  mov r4,r0
  mov r5,r1
  sub sp,#0xc
  bl 0x140a047c
  ldrb r3,[r4,#0x2]
  cmp r3,r5
  beq 0x140a114e
  str r0,[sp,#0x4]
  bl 0x140a0ebc
  ldr r0,[sp,#0x4]
  strb r5,[r4,#0x2]
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x140a04dc
