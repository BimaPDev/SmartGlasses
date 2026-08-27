; FUN_140d7d34 @ 0x140d7d34 size=44
  push {r3,r4,r5,lr}
  add.w r3,r0,#0x8
  mov r4,r0
  mov r5,r1
  str r3,[r0,#0x0]
  cbz r1,0x140d7d5c
  mov r0,r1
  bl 0x140df568
  add.w r2,r5,r0, lsl #0x2
  mov r0,r4
  mov.w r3,#0x0
  mov r1,r5
  bl 0x140d7cec
  mov r0,r4
  pop {r3,r4,r5,pc}
  movs r2,#0x4
  b 0x140d7d4c
