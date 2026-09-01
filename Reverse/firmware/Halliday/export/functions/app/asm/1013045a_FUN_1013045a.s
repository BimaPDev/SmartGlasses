; FUN_1013045a @ 0x1013045a size=24
  push {r3,lr}
  cbz r0,0x1013046c
  cmp r1,#0x1
  bne 0x10130468
  adds r0,#0x78
  bl 0x10130456
  movs r0,#0x0
  b 0x10130470
  mov.w r0,#0xffffffff
  pop {r3,pc}
