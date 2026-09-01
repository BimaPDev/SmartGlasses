; FUN_100b9960 @ 0x100b9960 size=36
  push {r4,lr}
  mov r4,r0
  sub sp,#0x8
  add r1,sp,#0x4
  movs r0,#0x0
  bl 0x100b93e4
  ldr r2,[0x100b9984]
  ldr r3,[sp,#0x4]
  ldr r1,[r2,#0x0]
  subs r3,r3,r1
  str r3,[r4,#0x0]
  ldr r0,[r2,#0xc]
  clz r0,r0
  lsrs r0,r0,#0x5
  add sp,#0x8
  pop {r4,pc}
