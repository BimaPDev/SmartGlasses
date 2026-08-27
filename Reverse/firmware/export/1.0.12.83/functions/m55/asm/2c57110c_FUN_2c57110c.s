; FUN_2c57110c @ 0x2c57110c size=22
  push {r4,lr}
  ldr r3,[0x2c571124]
  mov r4,r0
  ldr r0,[r0,#0x4]
  str r3,[r4,#0x0]
  cbz r0,0x2c57111e
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0xc]
  blx r3
  mov r0,r4
  pop {r4,pc}
