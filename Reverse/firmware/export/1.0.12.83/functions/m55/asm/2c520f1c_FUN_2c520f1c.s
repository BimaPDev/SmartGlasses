; FUN_2c520f1c @ 0x2c520f1c size=40
  push {r4,lr}
  mov r4,r0
  ldrsb.w r1,[r0,#0x14]
  ldr r0,[r0,#0x10]
  bl 0x2c5fd428
  ldr r0,[r4,#0x4]
  bl 0x2c62be1c
  ldrb r3,[r4,#0x0]
  cbnz r3,0x2c520f38
  mov r0,r4
  pop {r4,pc}
  ldr r1,[0x2c520f44]
  ldr r0,[0x2c520f48]
  bl 0x2c5e8fb4
  mov r0,r4
  pop {r4,pc}
