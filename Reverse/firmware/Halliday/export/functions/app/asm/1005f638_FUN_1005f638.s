; FUN_1005f638 @ 0x1005f638 size=30
  push {r4,lr}
  ldr r4,[0x1005f658]
  movs r2,#0xa
  mov r1,r4
  ldr r0,[0x1005f65c]
  bl 0x1011be5a
  add.w r1,r4,#0x640
  movs r2,#0x3
  pop.w {r4,lr}
  ldr r0,[0x1005f660]
  b.w 0x1011be5a
