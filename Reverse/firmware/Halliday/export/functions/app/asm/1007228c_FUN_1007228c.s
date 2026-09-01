; FUN_1007228c @ 0x1007228c size=26
  push {r3,lr}
  ldr r2,[0x100722a8]
  bl 0x1011c5d8
  cbnz r0,0x100722a2
  ldr r0,[0x100722ac]
  bl 0x10119dc2
  mvn r0,#0x15
  pop {r3,pc}
  movs r0,#0x0
  b 0x100722a0
