; FUN_140982f4 @ 0x140982f4 size=42
  push {r4,lr}
  sub sp,#0x8
  cbz r0,0x14098312
  mov r4,r0
  bl 0x140755e4
  mov r0,r4
  bl 0x14085cd4
  str r0,[sp,#0x4]
  bl 0x1407561c
  ldr r0,[sp,#0x4]
  add sp,#0x8
  pop {r4,pc}
  movw r2,#0x3be
  ldr r1,[0x14098320]
  ldr r0,[0x14098324]
  bl 0x1402b0f8
