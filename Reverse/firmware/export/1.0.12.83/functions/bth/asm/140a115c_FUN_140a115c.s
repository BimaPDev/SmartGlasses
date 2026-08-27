; FUN_140a115c @ 0x140a115c size=38
  push {r4,r5,lr}
  mov r4,r0
  mov r5,r1
  sub sp,#0xc
  bl 0x140a047c
  ldrb r3,[r4,#0x0]
  cmp r3,r5
  beq 0x140a1176
  str r0,[sp,#0x4]
  bl 0x140a0ebc
  ldr r0,[sp,#0x4]
  strb r5,[r4,#0x0]
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x140a04dc
