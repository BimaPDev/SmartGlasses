; FUN_2c4d7104 @ 0x2c4d7104 size=36
  mov r2,r0
  adds r1,#0x4
  movs r0,#0x1
  add r1,r2
  push {r3,lr}
  bl 0x2c4dc50c
  mov r2,r0
  cbz r0,0x2c4d7126
  rsb.w r3,r0,#0x4
  and r3,r3,#0x7
  adds r3,#0x4
  add r0,r3
  str.w r2,[r0,#-0x4]
  pop {r3,pc}
