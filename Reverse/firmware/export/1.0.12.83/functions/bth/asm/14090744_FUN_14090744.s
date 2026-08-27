; FUN_14090744 @ 0x14090744 size=28
  push {r3,lr}
  mov r2,r0
  mov r3,r1
  cbz r0,0x14090758
  cmp r1,#0x0
  ble 0x14090758
  pop.w {r3,lr}
  b.w 0x1408f6a0
  ldr r1,[0x14090764]
  movs r0,#0x42
  bl 0x1402a64c
