; FUN_10119ba8 @ 0x10119ba8 size=32
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x10119bc8]
  mov r0,r1
  mov r1,r2
  movs r2,#0x0
  str r2,[r5,#0x0]
  mov r2,r3
  bl 0x1011e9b4
  adds r3,r0,#0x1
  bne 0x10119bc6
  ldr r3,[r5,#0x0]
  cbz r3,0x10119bc6
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
