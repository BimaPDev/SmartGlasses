; FUN_100de970 @ 0x100de970 size=40
  push {r4,lr}
  ldr r0,[0x100de998]
  bl 0x100e1f7c
  subs r4,r0,#0x0
  bge 0x100de994
  ldr r2,[0x100de99c]
  ldr r3,[0x100de9a0]
  ldr r0,[0x100de9a4]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  mov r2,r4
  ldr r1,[0x100de9a8]
  orrs r0,r3
  bl 0x100a5b78
  mov r0,r4
  pop {r4,pc}
