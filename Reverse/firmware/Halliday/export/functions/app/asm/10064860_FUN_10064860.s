; FUN_10064860 @ 0x10064860 size=32
  push {r3,lr}
  ldr r2,[0x10064880]
  ldr r3,[0x10064884]
  ldr r0,[0x10064888]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orrs r0,r3
  ldr r2,[0x1006488c]
  ldr r1,[0x10064890]
  bl 0x100a5b78
  mov.w r0,#0xffffffff
  pop {r3,pc}
