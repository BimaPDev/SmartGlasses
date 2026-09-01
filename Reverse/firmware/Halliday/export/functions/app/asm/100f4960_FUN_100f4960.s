; FUN_100f4960 @ 0x100f4960 size=28
  cmp r0,#0x1
  push {r3,lr}
  bne 0x100f4970
  ldr r3,[0x100f497c]
  movs r0,#0x0
  strd r1,r2,[r3,#0x4]
  pop {r3,pc}
  movs r1,#0xc2
  ldr r3,[0x100f4980]
  ldr r2,[0x100f4984]
  ldr r0,[0x100f4988]
  bl 0x10117c88
