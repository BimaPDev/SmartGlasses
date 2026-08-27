; FUN_1405db18 @ 0x1405db18 size=34
  push {r3,r4,r5,lr}
  mov r5,r1
  mov r4,r3
  movs r1,#0x0
  movs r3,#0x4
  movw r0,#0xd01
  bl 0x14074378
  ldrh.w r3,[r5,#-0x2]
  strh r4,[r0,#0x2]
  strh r3,[r0,#0x0]
  bl 0x140743d0
  movs r0,#0x0
  pop {r3,r4,r5,pc}
