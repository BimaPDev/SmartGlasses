; FUN_1013b40a @ 0x1013b40a size=30
  ldr r3,[r0,#0x10]
  push {r0,r1,r4,lr}
  mov r4,r0
  cbz r3,0x1013b424
  movs r0,#0x9
  add r1,sp,#0x4
  str r3,[sp,#0x4]
  bl 0x10062a28
  cbnz r0,0x1013b420
  str r0,[r4,#0x10]
  add sp,#0x8
  pop {r4,pc}
  movs r0,#0x1
  b 0x1013b420
