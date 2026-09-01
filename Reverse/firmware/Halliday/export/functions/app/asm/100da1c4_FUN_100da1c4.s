; FUN_100da1c4 @ 0x100da1c4 size=38
  push {r3,lr}
  ldr r0,[0x100da1ec]
  bl 0x101165e0
  cbz r0,0x100da1d4
  ldr r0,[0x100da1ec]
  bl 0x10116598
  ldr r0,[0x100da1f0]
  bl 0x101165e0
  cbz r0,0x100da1e2
  ldr r0,[0x100da1f0]
  bl 0x10116598
  bl 0x100e78a8
  movs r0,#0x0
  pop {r3,pc}
