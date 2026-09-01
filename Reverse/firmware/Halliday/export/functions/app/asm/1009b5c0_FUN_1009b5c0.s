; FUN_1009b5c0 @ 0x1009b5c0 size=32
  push {r3,r4,r5,lr}
  ldr r5,[0x1009b5e0]
  movs r1,#0xff
  mov r0,r5
  bl 0x10065364
  mov r4,r0
  cbnz r0,0x1009b5dc
  strb.w r0,[r5,#0x2d]
  ldr r1,[0x1009b5e4]
  mov r0,r5
  bl 0x1011de72
  mov r0,r4
  pop {r3,r4,r5,pc}
