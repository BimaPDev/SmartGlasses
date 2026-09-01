; FUN_10131f56 @ 0x10131f56 size=38
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  strd r2,r1,[sp,#0x0]
  bl 0x10131956
  ldrd r2,r1,[sp,#0x0]
  mov r5,r0
  mov r0,r4
  bl 0x100ddc04
  mov r4,r0
  mov r0,r5
  bl 0x1013197e
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
