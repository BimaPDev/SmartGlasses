; FUN_2c504acc @ 0x2c504acc size=34
  push {r4,lr}
  bl 0x2c5ee748
  cbz r0,0x2c504adc
  mov r4,r0
  bl 0x2c5efa10
  cbnz r0,0x2c504ae0
  movs r0,#0x0
  pop {r4,pc}
  mov r0,r4
  bl 0x2c5ef904
  eor r0,r0,#0x1
  uxtb r0,r0
  pop {r4,pc}
