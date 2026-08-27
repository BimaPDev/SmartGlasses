; FUN_2c4e6cd0 @ 0x2c4e6cd0 size=32
  push {r4,lr}
  bl 0x2c4e94fc
  mov r4,r0
  bl 0x2c4e9354
  mov r2,r0
  ldr r3,[r4,#0x14]
  movs r0,#0x2
  ldr r4,[r2,#0x58]
  blx r3
  mov r1,r0
  ldr r0,[0x2c4e6cf0]
  blx r4
  ldr r0,[0x2c4e6cf4]
  pop {r4,pc}
