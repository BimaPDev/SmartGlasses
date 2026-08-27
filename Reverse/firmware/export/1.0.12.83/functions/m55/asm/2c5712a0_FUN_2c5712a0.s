; FUN_2c5712a0 @ 0x2c5712a0 size=26
  push {r4,lr}
  ldr r3,[0x2c5712c0]
  mov r4,r0
  ldr r0,[r0,#0x4]
  str r3,[r4,#0x0]
  cbz r0,0x2c5712b2
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0xc]
  blx r3
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
