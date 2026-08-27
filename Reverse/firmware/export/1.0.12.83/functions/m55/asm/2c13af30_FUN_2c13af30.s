; FUN_2c13af30 @ 0x2c13af30 size=32
  push {r4,lr}
  ldr r3,[0x2c13af50]
  ldr r3,[r3,#0x18]
  ldr r3,[r3,#0x10]
  ldr r4,[r3,#0x4]
  cbz r4,0x2c13af4c
  blx r4
  ldr r3,[0x2c13af54]
  mov r4,r0
  ldr r3,[r3,#0x0]
  cbz r3,0x2c13af4c
  mov r0,r3
  bl 0x2c13f9c8
  mov r0,r4
  pop {r4,pc}
