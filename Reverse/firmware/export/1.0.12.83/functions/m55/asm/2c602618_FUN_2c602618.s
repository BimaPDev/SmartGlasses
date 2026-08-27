; FUN_2c602618 @ 0x2c602618 size=18
  ldrb r3,[r0,#0x8]
  cmp r3,#0xd
  bne 0x2c602626
  ldr r0,[r0,#0x10]
  cbz r0,0x2c602628
  ldr r0,[r0,#0x0]
  bx lr
  movs r0,#0x0
  bx lr
