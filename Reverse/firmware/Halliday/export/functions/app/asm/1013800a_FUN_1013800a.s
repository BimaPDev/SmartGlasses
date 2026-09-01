; FUN_1013800a @ 0x1013800a size=40
  push {r4,lr}
  mov r4,r1
  bl 0x100e0e08
  cbz r0,0x1013802c
  mov r1,r4
  add.w r3,r0,#0x8
  adds r0,#0x18
  ldr.w r2,[r3],#0x4
  cmp r3,r0
  str.w r2,[r1],#0x4
  bne 0x1013801c
  movs r0,#0x0
  pop {r4,pc}
  mvn r0,#0x12
  b 0x1013802a
