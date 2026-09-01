; FUN_1005a05c @ 0x1005a05c size=32
  push {r4,lr}
  ldr r1,[0x1005a07c]
  mov r4,r0
  bl 0x1011ea18
  cbz r0,0x1005a078
  mov r0,r4
  ldr r1,[0x1005a080]
  bl 0x1011ea18
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r4,pc}
  movs r0,#0x1
  b 0x1005a076
