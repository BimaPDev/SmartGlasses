; FUN_100c97e4 @ 0x100c97e4 size=36
  ldr r3,[0x100c9808]
  push {r4,lr}
  strb r0,[r3,#0x0]
  ldr r4,[0x100c980c]
  ldr r3,[0x100c9810]
  ldr r2,[0x100c9814]
  subs r4,r4,r3
  lsls r4,r4,#0x5
  mov r3,r0
  ldr r0,[0x100c9818]
  and r4,r4,#0xff00
  orrs r0,r4
  ldr r1,[0x100c981c]
  bl 0x100a5b78
  movs r0,#0x0
  pop {r4,pc}
