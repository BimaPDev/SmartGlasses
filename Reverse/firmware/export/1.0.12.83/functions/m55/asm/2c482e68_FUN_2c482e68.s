; FUN_2c482e68 @ 0x2c482e68 size=36
  push {r4,r5,r6,lr}
  ldr r5,[0x2c482ec0]
  sub sp,#0x10
  ldr r6,[0x2c482ec4]
  mov r4,r0
  ldrb r2,[r5,#0x0]
  ldr r3,[0x2c482ec8]
  str r0,[sp,#0xc]
  movs r0,#0x4
  str r3,[sp,#0x0]
  ldr r3,[0x2c482ecc]
  strd r6,r2,[sp,#0x4]
  ldr r2,[0x2c482ed0]
  mov r6,r1
  movs r1,#0xce
  bl 0x2c673d88
