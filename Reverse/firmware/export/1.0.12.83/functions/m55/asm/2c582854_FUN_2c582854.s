; FUN_2c582854 @ 0x2c582854 size=22
  push {r4,lr}
  ldr r3,[0x2c58286c]
  mov r4,r0
  ldr r0,[r0,#0x4]
  str r3,[r4,#0x0]
  cbz r0,0x2c582866
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0xc]
  blx r3
  mov r0,r4
  pop {r4,pc}
