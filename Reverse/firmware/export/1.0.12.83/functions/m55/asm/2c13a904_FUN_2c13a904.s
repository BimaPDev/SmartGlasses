; FUN_2c13a904 @ 0x2c13a904 size=60
  push {r4,r5,r6,lr}
  ldrb r4,[r0,#0x1]
  cmp r4,#0x4
  bls 0x2c13a90e
  pop {r4,r5,r6,pc}
  ldr r6,[0x2c13a940]
  mov.w r1,#0xffffffff
  mov r5,r0
  ldr r0,[r6,#0x0]
  bl 0x2c13f29c
  ldr r3,[0x2c13a944]
  add.w r4,r4,r4, lsl #0x1
  lsls r1,r4,#0x2
  add.w r4,r3,r4, lsl #0x2
  ldrb r2,[r4,#0x4]
  cbz r2,0x2c13a936
  ldr r3,[r3,r1]
  ldr r3,[r3,#0x14]
  cbz r3,0x2c13a936
  mov r0,r5
  blx r3
  ldr r0,[r6,#0x0]
  pop.w {r4,r5,r6,lr}
  b.w 0x2c13f2d8
