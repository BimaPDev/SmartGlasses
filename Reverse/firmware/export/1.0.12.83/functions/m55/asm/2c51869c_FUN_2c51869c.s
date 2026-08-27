; FUN_2c51869c @ 0x2c51869c size=20
  push {r4,lr}
  ldr r3,[0x2c5186b0]
  mov r4,r0
  ldr r0,[r0,#0x4]
  str r3,[r4,#0x0]
  cbz r0,0x2c5186ac
  bl 0x2c48dea0
  mov r0,r4
  pop {r4,pc}
