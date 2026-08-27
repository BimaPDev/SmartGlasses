; FUN_2c4db28c @ 0x2c4db28c size=28
  push {r4,lr}
  mov r4,r1
  cbz r1,0x2c4db29a
  adds r3,r0,r1
  movs r2,#0x0
  strb.w r2,[r3,#-0x1]
  mov r2,r0
  ldr r1,[0x2c4db2a8]
  movs r0,#0x41
  bl 0x2c6741e8
  mov r0,r4
  pop {r4,pc}
