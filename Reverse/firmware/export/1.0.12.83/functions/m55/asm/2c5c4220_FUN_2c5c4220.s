; FUN_2c5c4220 @ 0x2c5c4220 size=42
  push {r3,r4,r5,lr}
  ldr r4,[r0,#0xc]
  ldr r3,[r4,#0x4c]
  ldrb.w r5,[r3,#0xbc]
  cbnz r5,0x2c5c4236
  ldr r0,[r4,#0x44]
  cbz r0,0x2c5c4236
  bl 0x2c62be1c
  str r5,[r4,#0x44]
  mov r0,r4
  bl 0x2c5c359c
  ldr r2,[r4,#0x4c]
  ldrb.w r3,[r2,#0xbc]
  subs r3,#0x1
  strb.w r3,[r2,#0xbc]
  pop {r3,r4,r5,pc}
