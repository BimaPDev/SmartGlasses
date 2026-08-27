; FUN_2c48e738 @ 0x2c48e738 size=30
  ldr r3,[0x2c48e758]
  movs r0,#0x28
  push {r4,lr}
  ldr r3,[r3,#0x0]
  blx r3
  mov r4,r0
  cbz r0,0x2c48e752
  movs r2,#0x28
  movs r1,#0x0
  bl 0x2c674268
  movs r3,#0x40
  str r3,[r4,#0xc]
  mov r0,r4
  pop {r4,pc}
