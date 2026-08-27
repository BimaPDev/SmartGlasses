; FUN_1403dffc @ 0x1403dffc size=38
  push {r4,lr}
  ldr r4,[0x1403e024]
  movs r2,#0x40
  movs r1,#0x0
  mov r0,r4
  bl 0x140e5658
  movs r2,#0x0
  ldr r0,[0x1403e028]
  mov r1,r2
  bl 0x140e52f8
  mov r3,r0
  ldr r0,[0x1403e02c]
  str r3,[r4,#0x38]
  bl 0x140e5138
  str r0,[r4,#0x3c]
  pop {r4,pc}
