; FUN_100e2fd4 @ 0x100e2fd4 size=36
  lsls r3,r0,#0x3
  push {r4,lr}
  mov r4,r1
  bmi 0x100e2ff4
  ldr r0,[0x100e2ff8]
  bl 0x1011ea10
  ldr r1,[0x100e2ff8]
  mov r2,r0
  mov r0,r4
  bl 0x1011ea30
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r4,pc}
  movs r0,#0x0
  b 0x100e2ff2
