; FUN_140c02b8 @ 0x140c02b8 size=36
  movs r2,#0x0
  ldr r1,[0x140c02c4]
  ldr r0,[0x140c02c8]
  b.w 0x140d86d8
  push {r3,lr}
  movs r2,#0x0
  mov r3,r0
  mov r0,r1
  ldr r1,[0x140d86f4]
  str r2,[r3,#0x0]
  bl 0x140dc518
  cbz r0,0x140d86f0
  ldr r0,[0x140d86f8]
  bl 0x140cb844
  pop {r3,pc}
