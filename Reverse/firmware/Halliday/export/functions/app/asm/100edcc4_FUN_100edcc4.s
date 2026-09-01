; FUN_100edcc4 @ 0x100edcc4 size=30
  push {r4,lr}
  mov r4,r0
  mov.w r1,#0xffffffff
  ldr r0,[0x100edce4]
  bl 0x1011dbf4
  mov r1,r4
  ldr r0,[0x100edce8]
  bl 0x10053ea0
  pop.w {r4,lr}
  b.w 0x100edc14
