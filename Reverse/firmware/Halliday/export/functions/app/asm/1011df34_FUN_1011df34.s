; FUN_1011df34 @ 0x1011df34 size=42
  movs r3,#0x0
  push {r0,r1,r4,lr}
  movs r2,#0x1
  add.w r1,sp,#0x7
  mov r4,r0
  strb.w r3,[sp,#0x7]
  bl 0x1011df0c
  cbnz r0,0x1011df56
  ldrb.w r3,[r4,#0xf0]
  orr r3,r3,#0x1
  strb.w r3,[r4,#0xf0]
  ldrb.w r0,[sp,#0x7]
  add sp,#0x8
  pop {r4,pc}
