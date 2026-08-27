; FUN_2c4b4ece @ 0x2c4b4ece size=32
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  mov r5,r1
  cbz r0,0x2c4b4edc
  bl 0x2c64730c
  cmp r5,#0x80
  bhi 0x2c4b4eec
  movs r2,#0x0
  mov r1,r5
  movs r0,#0x80
  bl 0x2c647174
  str r0,[r4,#0x0]
  pop {r3,r4,r5,pc}
