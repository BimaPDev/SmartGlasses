; FUN_2c5ef61a @ 0x2c5ef61a size=36
  push {r3,r4,r5,lr}
  mov r4,r0
  movs r5,#0x0
  ldr r0,[r0,#0x8]
  strb r5,[r4,#0xc]
  strd r5,r5,[r4,#0x0]
  cbz r0,0x2c5ef630
  bl 0x2c6043d8
  str r5,[r4,#0x8]
  ldr r0,[r4,#0x10]
  cbz r0,0x2c5ef63c
  bl 0x2c62be1c
  movs r3,#0x0
  str r3,[r4,#0x10]
  pop {r3,r4,r5,pc}
