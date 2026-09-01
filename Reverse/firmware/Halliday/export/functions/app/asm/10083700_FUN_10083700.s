; FUN_10083700 @ 0x10083700 size=54
  add.w r1,r0,r1, lsl #0x3
  push {r4,lr}
  ldr r4,[r1,#0x28]
  adds r3,r4,#0x1
  bne 0x10083728
  ldr r2,[0x10083738]
  ldr r3,[0x1008373c]
  ldr r0,[0x10083740]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orrs r0,r3
  ldr r2,[0x10083744]
  ldr r1,[0x10083748]
  bl 0x100a5b78
  mov r0,r4
  pop {r4,pc}
  movs r2,#0x1
  mov r0,r4
  ldr r1,[r1,#0x2c]
  bl 0x100836b8
  movs r0,#0x0
  b 0x10083726
