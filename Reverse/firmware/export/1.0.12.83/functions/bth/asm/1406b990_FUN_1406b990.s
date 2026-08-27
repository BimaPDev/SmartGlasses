; FUN_1406b990 @ 0x1406b990 size=28
  push {r4,r5,lr}
  mov r5,r3
  sub sp,#0xc
  mov r4,r2
  movs r1,#0x5
  movs r2,#0x1c
  ldr r3,[0x1406b9ac]
  str r5,[sp,#0x0]
  bl 0x1406cd54
  ldr r3,[0x1406b9b0]
  str r3,[r4,#0x0]
  add sp,#0xc
  pop {r4,r5,pc}
