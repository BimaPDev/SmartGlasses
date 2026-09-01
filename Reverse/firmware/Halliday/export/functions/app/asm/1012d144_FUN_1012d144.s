; FUN_1012d144 @ 0x1012d144 size=40
  push {r0,r1,r2,r3,r4,lr}
  movs r3,#0x0
  mov r4,r1
  movs r2,#0x10
  mov r1,sp
  strd r3,r3,[sp,#0x0]
  strd r3,r3,[sp,#0x8]
  bl 0x1009efa0
  cmp r0,#0x0
  ble 0x1012d168
  mov r0,sp
  bl 0x1013d036
  add sp,#0x10
  pop {r4,pc}
  mov r0,r4
  b 0x1012d164
