; FUN_1012d552 @ 0x1012d552 size=32
  push {r3,r4,r5,lr}
  mov r5,r0
  cbz r0,0x1012d56c
  ldr r3,[r0,#0xc]
  ldr r4,[r3,#0x4]
  cbz r4,0x1012d562
  blx r4
  mov r4,r0
  mov r0,r5
  bl 0x1012d1f4
  mov r0,r4
  pop {r3,r4,r5,pc}
  mvn r4,#0x15
  b 0x1012d568
