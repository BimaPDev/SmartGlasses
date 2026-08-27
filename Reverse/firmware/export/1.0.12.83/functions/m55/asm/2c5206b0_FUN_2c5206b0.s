; FUN_2c5206b0 @ 0x2c5206b0 size=32
  push {r4,r5,r6,lr}
  ldr r6,[0x2c520790]
  sub sp,#0x10
  mov r5,r1
  mov r4,r0
  str r6,[sp,#0x0]
  movs r2,#0xa4
  ldrb.w r1,[r0,#0x1fc]
  movs r0,#0x4
  ldr r3,[0x2c520794]
  strd r1,r5,[sp,#0x4]
  ldr r1,[0x2c520798]
  bl 0x2c62c82c
