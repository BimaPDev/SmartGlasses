; FUN_2c51f4f8 @ 0x2c51f4f8 size=46
  push {r4,lr}
  mov r4,r0
  bl 0x2c51ea10
  movs r3,#0x0
  ldr r0,[0x2c51f528]
  mov r2,r4
  movw r1,#0x2710
  str r0,[r4,#0x0]
  strb r3,[r4,#0x1c]
  ldr r0,[0x2c51f52c]
  strd r3,r3,[r4,#0xc]
  strd r3,r3,[r4,#0x14]
  bl 0x2c62bdd8
  str r0,[r4,#0x20]
  bl 0x2c62be40
  mov r0,r4
  pop {r4,pc}
