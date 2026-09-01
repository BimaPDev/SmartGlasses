; FUN_101069fc @ 0x101069fc size=26
  push {r3,r4,r5,lr}
  mov r3,r0
  mov r0,r1
  ldr r1,[0x10106a18]
  mov r4,r2
  ldr r5,[r3,#0x40]
  bl 0x1011ea18
  cbz r0,0x10106a12
  movs r0,#0xc
  pop {r3,r4,r5,pc}
  str r5,[r4,#0x0]
  pop {r3,r4,r5,pc}
