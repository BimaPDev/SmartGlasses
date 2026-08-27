; FUN_140045ee @ 0x140045ee size=36
  push {r4,lr}
  mov r1,r0
  mov r4,r0
  movs r0,#0x13
  bl 0x14005e70
  cbnz r0,0x14004608
  ldr r3,[0x14004614]
  ldr r0,[r3,#0x14]
  bl 0x14003c3c
  movs r0,#0x0
  pop {r4,pc}
  mov r0,r4
  bl 0x14003c38
  movs r0,#0x0
  pop {r4,pc}
