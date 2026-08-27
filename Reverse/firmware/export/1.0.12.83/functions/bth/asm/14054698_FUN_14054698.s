; FUN_14054698 @ 0x14054698 size=32
  push {r4,r5,r6,lr}
  ldr r3,[0x140546b8]
  ldr r4,[r3,#0x18]
  cbz r4,0x140546b6
  mov r6,r0
  mov r5,r1
  ldr r3,[r4,#0x4]
  ldr r3,[r3,#0x0]
  cbz r3,0x140546b0
  mov r1,r5
  mov r0,r6
  blx r3
  ldr r4,[r4,#0x0]
  cmp r4,#0x0
  bne 0x140546a4
  pop {r4,r5,r6,pc}
