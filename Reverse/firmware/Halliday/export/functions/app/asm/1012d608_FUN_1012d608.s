; FUN_1012d608 @ 0x1012d608 size=40
  push {r4,lr}
  movs r1,#0x2
  mov r4,r0
  bl 0x100a0310
  cbz r0,0x1012d62a
  ldr r3,[r4,#0x50]
  ldr r3,[r3,#0x14]
  cbz r3,0x1012d622
  mov r0,r4
  pop.w {r4,lr}
  bx r3
  ldrd r3,r0,[r4,#0x4]
  subs r0,r0,r3
  pop {r4,pc}
  mvn r0,#0x57
  b 0x1012d628
