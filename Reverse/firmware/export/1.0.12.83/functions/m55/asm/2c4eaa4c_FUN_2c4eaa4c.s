; FUN_2c4eaa4c @ 0x2c4eaa4c size=32
  push {r4,r5,r6,lr}
  sub sp,#0x10
  mov r5,r0
  mov r6,r1
  bl 0x2c4e9504
  ldr r1,[0x2c4eaa98]
  movs r0,#0x4
  ldr r3,[0x2c4eaa9c]
  ldr r2,[0x2c4eaaa0]
  str r1,[sp,#0x0]
  movs r1,#0xf8
  strd r5,r6,[sp,#0x4]
  bl 0x2c673d88
