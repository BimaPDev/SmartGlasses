; FUN_1406da30 @ 0x1406da30 size=44
  mov r3,r0
  push {r4,lr}
  ldr r4,[0x1406da5c]
  strh r1,[r3,#-0x2]
  str.w r2,[r3,#-0x8]
  sub.w r1,r3,#0xc
  add.w r0,r4,#0x8
  bl 0x140739f0
  ldrb r3,[r4,#0x19]
  cbz r3,0x1406da50
  pop {r4,pc}
  mov r1,r4
  pop.w {r4,lr}
  movs r0,#0x1
  b.w 0x14072a44
