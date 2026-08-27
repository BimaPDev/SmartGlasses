; FUN_1409e794 @ 0x1409e794 size=32
  push {r4,lr}
  ldr r4,[0x1409e7b4]
  ldr r3,[r4,#0x0]
  cbz r3,0x1409e7aa
  pop.w {r4,lr}
  movs r2,#0x0
  ldr r0,[0x1409e7b8]
  mov r1,r2
  b.w 0x140b4ca8
  ldr r0,[0x1409e7bc]
  bl 0x140e5668
  str r0,[r4,#0x0]
  b 0x1409e79c
