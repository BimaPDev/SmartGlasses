; FUN_2c49f434 @ 0x2c49f434 size=42
  push {r4,lr}
  ldr r3,[0x2c49f67c]
  sub sp,#0x10
  mov r4,r0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0xc]
  mov.w r3,#0x0
  cmp r0,#0x60
  bhi 0x2c49f50e
  tbh [pc,r0]
  ldr r0,[0x2c49f680]
  movw r1,#0x3c2
  ldr r3,[0x2c49f684]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r2,[0x2c49f688]
  bl 0x2c673d88
