; FUN_1007cae0 @ 0x1007cae0 size=42
  push {r4,lr}
  mov r4,r0
  bl 0x1007c4fc
  mov.w r3,#0x3e8
  mul r0,r3,r4
  movs r3,#0xc8
  udiv r0,r0,r3
  ldr r2,[0x1007cb0c]
  ldrb.w r3,[r2,#0x13c]
  strh.w r0,[r2,#0x15c]
  orr r3,r3,#0x8
  strb.w r3,[r2,#0x13c]
  pop {r4,pc}
