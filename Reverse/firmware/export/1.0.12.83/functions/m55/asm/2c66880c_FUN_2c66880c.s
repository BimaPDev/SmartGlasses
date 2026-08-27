; FUN_2c66880c @ 0x2c66880c size=44
  push {r4,r5,r6,lr}
  movs r2,#0x68
  subs r5,r1,#0x1
  mov r6,r1
  muls r5,r2
  add.w r1,r5,#0x74
  bl 0x2c669c14
  mov r4,r0
  cbz r0,0x2c668834
  movs r1,#0x0
  add.w r2,r5,#0x68
  strd r1,r6,[r0,#0x0]
  adds r0,#0xc
  str r0,[r4,#0x8]
  bl 0x2c674268
  mov r0,r4
  pop {r4,r5,r6,pc}
