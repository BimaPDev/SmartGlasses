; FUN_100de9ac @ 0x100de9ac size=40
  push {r4,lr}
  ldr r0,[0x100de9d4]
  bl 0x100e1fe8
  subs r4,r0,#0x0
  bge 0x100de9d0
  ldr r2,[0x100de9d8]
  ldr r3,[0x100de9dc]
  ldr r0,[0x100de9e0]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  mov r2,r4
  ldr r1,[0x100de9e4]
  orrs r0,r3
  bl 0x100a5b78
  mov r0,r4
  pop {r4,pc}
