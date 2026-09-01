; FUN_100722bc @ 0x100722bc size=28
  push {r3,lr}
  ldr r3,[0x100722d8]
  bl 0x1011c672
  mov r1,r0
  cbnz r0,0x100722d4
  ldr r0,[0x100722dc]
  bl 0x10119dc2
  mvn r0,#0x15
  pop {r3,pc}
  movs r0,#0x0
  b 0x100722d2
