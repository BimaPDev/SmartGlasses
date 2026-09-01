; FUN_100a60ec @ 0x100a60ec size=22
  push {r4,lr}
  bl 0x1012dca8
  mov r4,r0
  bl 0x100a6260
  movs r2,#0x6
  ldr r3,[0x100a6104]
  orrs r0,r4
  strb r2,[r3,#0x2]
  pop {r4,pc}
