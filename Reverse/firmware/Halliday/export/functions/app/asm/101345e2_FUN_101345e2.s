; FUN_101345e2 @ 0x101345e2 size=24
  push {r4,lr}
  mov r4,r2
  movs r1,#0x4
  adds r0,#0x8
  bl 0x100c1fe4
  ldrh r3,[r4,#0x8]
  strh r3,[r0,#0x0]
  ldrh r3,[r4,#0xe]
  strh r3,[r0,#0x2]
  movs r0,#0x0
  pop {r4,pc}
