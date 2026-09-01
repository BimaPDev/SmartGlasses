; FUN_100bed38 @ 0x100bed38 size=40
  ldr r3,[0x100bed44]
  ldr r0,[r3,#0x0]
  cbz r0,0x100bed42
  b.w 0x1013245a
  bx lr
  push {r3,r4,r5,lr}
  mov r4,r0
  bl 0x10131956
  mov r5,r0
  mov r0,r4
  bl 0x10134bfc
  mov r4,r0
  mov r0,r5
  bl 0x1013197e
  mov r0,r4
  pop {r3,r4,r5,pc}
