; FUN_1012d4d4 @ 0x1012d4d4 size=34
  movs r2,#0x0
  push {r0,r1,r4,lr}
  mov r4,r1
  str r2,[sp,#0x4]
  ldr r1,[r0,#0x0]
  ldr r2,[r0,#0x8]
  ldr r3,[r0,#0x4]
  add r2,r1
  subs r2,r2,r3
  add r1,sp,#0x4
  bl 0x1012d352
  cbz r4,0x1012d4f0
  str r0,[r4,#0x0]
  ldr r0,[sp,#0x4]
  add sp,#0x8
  pop {r4,pc}
