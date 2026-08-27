; FUN_14074d80 @ 0x14074d80 size=56
  push {r3,r4,r5,lr}
  bl 0x140756d0
  ldr r5,[0x14074db8]
  mov r4,r0
  ldr r3,[r5,#0x0]
  cmp r3,r0
  bhi 0x14074da0
  ldr r1,[0x14074dbc]
  subs r3,r0,r3
  ldr r2,[r1,#0x0]
  str r4,[r5,#0x0]
  add.w r3,r2,r3, lsr #0x4
  str r3,[r1,#0x0]
  pop {r3,r4,r5,pc}
  bl 0x140756d4
  ldr r1,[0x14074dbc]
  ldr r3,[r5,#0x0]
  ldr r2,[r1,#0x0]
  subs r3,r4,r3
  add r3,r0
  add.w r3,r2,r3, lsr #0x4
  str r3,[r1,#0x0]
  str r4,[r5,#0x0]
  pop {r3,r4,r5,pc}
