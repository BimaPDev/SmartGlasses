; FUN_2c52613c @ 0x2c52613c size=32
  push {r4,r5,r6,lr}
  ldr r6,[0x2c526198]
  sub sp,#0x10
  mov r5,r1
  mov r4,r0
  str r6,[sp,#0x0]
  movs r2,#0xee
  ldrb.w r1,[r0,#0x45]
  movs r0,#0x4
  ldr r3,[0x2c52619c]
  strd r5,r1,[sp,#0x4]
  ldr r1,[0x2c5261a0]
  bl 0x2c62c82c
