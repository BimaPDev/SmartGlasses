; FUN_2c5ef5e8 @ 0x2c5ef5e8 size=34
  push {r4,lr}
  ldr r4,[0x2c5ef60c]
  movs r3,#0x0
  ldr r1,[0x2c5ef610]
  mov r2,r4
  ldr r0,[0x2c5ef614]
  strb r3,[r4,#0xc]
  str r3,[r4,#0x8]
  strd r3,r3,[r4,#0x0]
  bl 0x2c62bdd8
  str r0,[r4,#0x10]
  bl 0x2c62be40
  mov r0,r4
  pop {r4,pc}
