; FUN_2c4b9d8c @ 0x2c4b9d8c size=42
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr.w r9,[0x2c4ba0a0]
  mov r5,r1
  ldr r2,[0x2c4ba060]
  ldr r3,[0x2c4ba064]
  vpush {d8}
  sub sp,#0x1c
  strd r9,r0,[sp,#0x4]
  ldr r1,[r1,#0x14]
  movs r0,#0x4
  str r2,[sp,#0x0]
  str r1,[sp,#0xc]
  movw r1,#0x1ad7
  ldr r2,[0x2c4ba068]
  bl 0x2c673d88
