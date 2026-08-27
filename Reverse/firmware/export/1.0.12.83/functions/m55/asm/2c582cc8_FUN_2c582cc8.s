; FUN_2c582cc8 @ 0x2c582cc8 size=20
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  cbz r0,0x2c582cda
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0xc]
  blx r3
  movs r3,#0x0
  str r3,[r4,#0x4]
  pop {r4,pc}
