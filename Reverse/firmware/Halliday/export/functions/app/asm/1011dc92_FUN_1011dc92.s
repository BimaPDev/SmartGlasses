; FUN_1011dc92 @ 0x1011dc92 size=28
  push {r0,r1,r4,lr}
  strd r2,r1,[sp,#0x0]
  bl 0x10064b38
  mov r4,r0
  cbz r0,0x1011dca8
  ldrd r2,r1,[sp,#0x0]
  bl 0x1012d220
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
