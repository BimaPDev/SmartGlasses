; FUN_2c4fc002 @ 0x2c4fc002 size=30
  push {r3,lr}
  bne 0x2c4fc016
  bl 0x2c4f6904
  bl 0x2c4ad728
  ldr r3,[0x2c4fc020]
  movs r0,#0x0
  strb r0,[r3,#0x0]
  pop {r3,pc}
  mov r2,r0
  ldr r1,[0x2c4fc024]
  ldr r0,[0x2c4fc028]
  bl 0x2c673ca8
