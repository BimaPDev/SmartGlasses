; FUN_2c46a434 @ 0x2c46a434 size=34
  push {r4,lr}
  mov r4,r2
  bl 0x2c46a3d4
  cbz r0,0x2c46a448
  cbz r4,0x2c46a44e
  ldr r3,[r0,#0x4]
  movs r0,#0x1
  str r3,[r4,#0x0]
  pop {r4,pc}
  cbz r4,0x2c46a452
  str r0,[r4,#0x0]
  pop {r4,pc}
  movs r0,#0x1
  pop {r4,pc}
  mov r0,r4
  pop {r4,pc}
