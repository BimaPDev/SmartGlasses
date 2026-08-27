; FUN_14064228 @ 0x14064228 size=22
  ldr r3,[0x14064240]
  ldrh r0,[r3,#0x30]
  adds r0,#0x1
  uxth r0,r0
  cbz r0,0x14064236
  strh r0,[r3,#0x30]
  bx lr
  movs r2,#0x1
  mov r0,r2
  strh r2,[r3,#0x30]
  bx lr
