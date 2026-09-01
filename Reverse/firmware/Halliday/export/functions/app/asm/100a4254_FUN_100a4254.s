; FUN_100a4254 @ 0x100a4254 size=40
  ldr r3,[0x100a427c]
  push {r4,lr}
  ldr r4,[r3,#0x0]
  cbnz r4,0x100a4276
  ldr r0,[0x100a4280]
  movs r2,#0x18
  mov r1,r4
  str r0,[r3,#0x0]
  bl 0x1011ea48
  bl 0x100a42c0
  ldr r0,[0x100a4284]
  bl 0x100a1c48
  mov r0,r4
  pop {r4,pc}
  mvn r0,#0x10
  b 0x100a4274
