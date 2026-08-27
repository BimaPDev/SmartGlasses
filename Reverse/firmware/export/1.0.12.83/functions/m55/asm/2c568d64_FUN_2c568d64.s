; FUN_2c568d64 @ 0x2c568d64 size=38
  push {r4,lr}
  ldr r3,[r0,#0x0]
  ldr r1,[0x2c568d8c]
  ldr.w r3,[r3,#-0x50]
  ldr r2,[0x2c568d90]
  adds r4,r0,r3
  str r1,[r0,r3]
  add.w r3,r4,#0x18
  ldr r1,[r4,#0x10]
  str r2,[r4,#0x4]
  cmp r1,r3
  beq 0x2c568d86
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
