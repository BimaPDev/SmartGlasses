; FUN_2c4c1c84 @ 0x2c4c1c84 size=32
  push {r3,r4,r5,lr}
  ldrb.w r3,[r0,#0x35]
  cbz r3,0x2c4c1ca2
  mov r5,r0
  movs r4,#0x0
  mov r1,r4
  mov r0,r5
  bl 0x2c4c1a94
  adds r4,#0x1
  ldrb.w r3,[r5,#0x35]
  cmp r3,r4
  bhi 0x2c4c1c90
  pop {r3,r4,r5,pc}
