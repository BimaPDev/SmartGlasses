; FUN_1011fe46 @ 0x1011fe46 size=42
  push {r0,r1,r4,lr}
  movs r4,#0x0
  movs r0,#0x1
  add r1,sp,#0x4
  strd r4,r4,[sp,#0x0]
  bl 0x10056b90
  ldr r3,[sp,#0x4]
  cbz r3,0x1011fe6a
  mov r1,sp
  mov r0,r4
  bl 0x10056b90
  mov r1,r4
  movs r0,#0x1
  bl 0x10056ae4
  ldr r0,[sp,#0x0]
  add sp,#0x8
  pop {r4,pc}
