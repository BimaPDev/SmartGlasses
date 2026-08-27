; FUN_2c64c9c4 @ 0x2c64c9c4 size=34
  mov r3,r1
  mov r1,r0
  mov r0,r3
  b.w 0x2c6685c4
  push {r4,lr}
  ldr r4,[0x2c6685dc]
  mov r3,r2
  cbz r4,0x2c6685d8
  mov r2,r1
  mov r1,r0
  movs r0,#0x2
  bl 0x2c66ee38
  pop {r4,pc}
  mov r0,r4
  b 0x2c6685d6
