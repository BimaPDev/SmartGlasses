; FUN_2c57fd9c @ 0x2c57fd9c size=36
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  cbz r0,0x2c57fdba
  ldr r3,[r4,#0xc]
  cbz r3,0x2c57fdba
  mov r5,r1
  bl 0x2c55fea0
  ldr r0,[r4,#0xc]
  mov r1,r5
  pop.w {r3,r4,r5,lr}
  b.w 0x2c580350
  pop {r3,r4,r5,pc}
  str r1,[r0,#0xc]
  bx lr
