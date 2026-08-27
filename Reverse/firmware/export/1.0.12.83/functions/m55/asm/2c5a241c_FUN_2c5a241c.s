; FUN_2c5a241c @ 0x2c5a241c size=38
  push {r3,r4,r5,lr}
  ldr r5,[r0,#0x60]
  mov r4,r0
  cbz r5,0x2c5a2436
  mov r0,r5
  bl 0x2c5a422c
  mov r1,r5
  movs r0,#0x0
  bl 0x2c472680
  ldr r0,[r4,#0x68]
  cbz r0,0x2c5a2444
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x4]
  blx r3
  movs r3,#0x0
  str r3,[r4,#0x68]
  pop {r3,r4,r5,pc}
