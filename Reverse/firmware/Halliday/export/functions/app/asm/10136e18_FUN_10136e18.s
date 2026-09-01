; FUN_10136e18 @ 0x10136e18 size=28
  push {r4,lr}
  ldr r4,[r0,#0x54]
  bl 0x100dcc30
  cbz r4,0x10136e2e
  cbz r0,0x10136e28
  bl 0x10136dee
  ldrh r3,[r4,#0x2]
  muls r0,r3
  pop {r4,pc}
  mvn r0,#0xc
  b 0x10136e2c
