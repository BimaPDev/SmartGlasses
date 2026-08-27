; FUN_2c504af0 @ 0x2c504af0 size=30
  push {r4,lr}
  bl 0x2c5ee748
  cbz r0,0x2c504b00
  mov r4,r0
  bl 0x2c5efa10
  cbnz r0,0x2c504b04
  movs r0,#0x0
  pop {r4,pc}
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c5ef9d8
