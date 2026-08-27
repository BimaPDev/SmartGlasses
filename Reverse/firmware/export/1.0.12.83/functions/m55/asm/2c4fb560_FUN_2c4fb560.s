; FUN_2c4fb560 @ 0x2c4fb560 size=16
  push {r3,lr}
  ldr r3,[0x2c4fb570]
  ldr r0,[r3,#0x0]
  cbz r0,0x2c4fb56c
  bl 0x2c64723c
  movs r0,#0x0
  pop {r3,pc}
