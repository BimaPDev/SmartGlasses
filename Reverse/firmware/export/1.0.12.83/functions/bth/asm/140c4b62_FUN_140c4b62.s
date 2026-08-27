; FUN_140c4b62 @ 0x140c4b62 size=22
  push {r3,lr}
  ldr r3,[r0,#0x8]
  cmp r3,#0x0
  blt 0x140c4b70
  bl 0x140c4938
  pop {r3,pc}
  movs r2,#0x0
  bl 0x140c4954
  b 0x140c4b6e
