; FUN_2c5768f0 @ 0x2c5768f0 size=20
  push {r3,r4,r5,lr}
  mov r4,r0
  movs r3,#0x0
  ldr r0,[r0,#0x34]
  str r3,[r4,#0x34]
  cbz r0,0x2c576902
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0xc]
  blx r3
  ldr r5,[0x2c576940]
