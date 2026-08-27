; FUN_14087c80 @ 0x14087c80 size=24
  movs r2,#0x0
  push {r3,lr}
  movw r0,#0x402
  mov r1,r2
  bl 0x1407772c
  cbz r0,0x14087c96
  bl 0x1407780c
  sxtb r0,r0
  pop {r3,pc}
