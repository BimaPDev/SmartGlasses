; FUN_2c13a992 @ 0x2c13a992 size=60
  push {r4,r5,r6,lr}
  bls 0x2c13a99c
  movs r5,#0x0
  mov r0,r5
  pop {r4,r5,r6,pc}
  mov r4,r0
  ldr r6,[0x2c13a9d0]
  mov.w r1,#0xffffffff
  ldr r0,[r6,#0x0]
  bl 0x2c13f29c
  ldr r3,[0x2c13a9d4]
  add.w r4,r4,r4, lsl #0x1
  add.w r2,r3,r4, lsl #0x2
  ldrb r5,[r2,#0x4]
  lsls r4,r4,#0x2
  cbz r5,0x2c13a9c4
  ldr r3,[r3,r4]
  ldr r5,[r3,#0x8]
  cbz r5,0x2c13a9c4
  blx r5
  mov r5,r0
  ldr r0,[r6,#0x0]
  bl 0x2c13f2d8
  mov r0,r5
  pop {r4,r5,r6,pc}
