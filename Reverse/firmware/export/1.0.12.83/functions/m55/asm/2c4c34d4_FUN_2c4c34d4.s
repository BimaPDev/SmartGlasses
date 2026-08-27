; FUN_2c4c34d4 @ 0x2c4c34d4 size=36
  push {r4,r5,r6,lr}
  ldr r5,[0x2c4c3528]
  sub sp,#0x10
  ldr r3,[0x2c4c352c]
  mov r4,r0
  ldrb r1,[r5,#0x0]
  ldr r2,[0x2c4c3530]
  ldr r6,[0x2c4c3534]
  str r3,[sp,#0x4]
  str r2,[sp,#0x0]
  ldr r3,[0x2c4c3538]
  ldr r2,[0x2c4c353c]
  strd r1,r0,[sp,#0x8]
  movs r1,#0x22
  movs r0,#0x4
  bl 0x2c673d88
