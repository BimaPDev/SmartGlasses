; FUN_100a92f4 @ 0x100a92f4 size=28
  push {r4,r5}
  mov r4,r0
  mov r0,r1
  mov r1,r2
  mov r2,r3
  ldr r3,[0x100a9310]
  ldr r5,[r3,#0x0]
  cbz r5,0x100a930c
  mov r3,r4
  mov r12,r5
  pop {r4,r5}
  bx r12
  pop {r4,r5}
  bx lr
