; FUN_2c4e67d0 @ 0x2c4e67d0 size=24
  push {lr}
  sub sp,#0xc
  cbnz r0,0x2c4e67e0
  str r0,[sp,#0x4]
  ldr r3,[sp,#0x4]
  adds r3,#0x1
  str r3,[sp,#0x4]
  b 0x2c4e67d6
  mov r1,r0
  ldr r0,[0x2c4e67e8]
  bl 0x2c673ca8
