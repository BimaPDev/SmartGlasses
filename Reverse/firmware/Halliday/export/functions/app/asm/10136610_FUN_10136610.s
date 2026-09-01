; FUN_10136610 @ 0x10136610 size=18
  push {r3,lr}
  bl 0x100d4684
  cbz r0,0x1013661e
  ldrsb.w r0,[r0,#0x47]
  pop {r3,pc}
  movs r0,#0x7f
  b 0x1013661c
