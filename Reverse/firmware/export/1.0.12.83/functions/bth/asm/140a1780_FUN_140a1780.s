; FUN_140a1780 @ 0x140a1780 size=42
  push {r4,r5,lr}
  mov r4,r0
  mov r5,r1
  sub sp,#0xc
  bl 0x140a047c
  ldrb.w r3,[r4,#0x112]
  cmp r5,r3
  beq 0x140a17a0
  str r0,[sp,#0x4]
  bl 0x140a0ebc
  ldr r0,[sp,#0x4]
  strb.w r5,[r4,#0x112]
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x140a04dc
