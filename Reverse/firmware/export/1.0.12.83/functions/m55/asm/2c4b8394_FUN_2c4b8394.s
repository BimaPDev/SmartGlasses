; FUN_2c4b8394 @ 0x2c4b8394 size=30
  push {r3,lr}
  cbz r1,0x2c4b83aa
  ldr r2,[0x2c4b83b4]
  movs r0,#0x0
  ldr.w r3,[r2,#0x80]
  bic r3,r3,#0x1
  str.w r3,[r2,#0x80]
  pop {r3,pc}
  bl 0x2c4b82d8
  movs r0,#0x0
  pop {r3,pc}
