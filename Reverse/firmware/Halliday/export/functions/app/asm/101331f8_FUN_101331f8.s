; FUN_101331f8 @ 0x101331f8 size=18
  push {r3,lr}
  bl 0x100e0b10
  cbz r0,0x10133208
  ldrh r0,[r0,#0xe]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
