; FUN_1009f374 @ 0x1009f374 size=32
  push {r0,r1,r2,r4,r5,lr}
  mov r5,r0
  str r1,[sp,#0x4]
  movs r0,#0x20
  ldr r1,[0x1009f394]
  bl 0x1012d1f0
  mov r4,r0
  cbz r0,0x1009f38e
  mov r1,r5
  ldr r2,[sp,#0x4]
  bl 0x1012d220
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
