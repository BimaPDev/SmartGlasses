; FUN_100f1174 @ 0x100f1174 size=28
  ldr r3,[0x100f1190]
  mov r2,r0
  ldr r0,[r3,#0x0]
  cbnz r0,0x100f1182
  b 0x100f118c
  ldr r0,[r0,#0x0]
  cbz r0,0x100f118e
  ldr r3,[r0,#0x4]
  ldrh r3,[r3,#0xc]
  cmp r3,r2
  bne 0x100f117e
  adds r0,#0x20
  bx lr
  bx lr
