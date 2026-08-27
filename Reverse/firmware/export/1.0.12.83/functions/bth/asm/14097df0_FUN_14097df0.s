; FUN_14097df0 @ 0x14097df0 size=40
  push {r4,lr}
  sub sp,#0x8
  cbz r0,0x14097e0e
  mov r4,r0
  bl 0x140755e4
  mov r0,r4
  bl 0x140819f8
  str r0,[sp,#0x4]
  bl 0x1407561c
  ldr r0,[sp,#0x4]
  add sp,#0x8
  pop {r4,pc}
  movs r2,#0xaf
  ldr r1,[0x14097e18]
  ldr r0,[0x14097e1c]
  bl 0x1402b0f8
