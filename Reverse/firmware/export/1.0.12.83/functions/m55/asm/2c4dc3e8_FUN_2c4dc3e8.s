; FUN_2c4dc3e8 @ 0x2c4dc3e8 size=34
  push {r4,lr}
  ldr r3,[r0,#0x0]
  ldr.w r3,[r3,#-0xc]
  add r0,r3
  bl 0x2c4de5e2
  mov r4,r0
  bl 0x2c4dfa8c
  cmp r4,r0
  bne 0x2c4dc406
  bl 0x2c4dc3d8
  mov r4,r0
  mov r0,r4
  pop {r4,pc}
