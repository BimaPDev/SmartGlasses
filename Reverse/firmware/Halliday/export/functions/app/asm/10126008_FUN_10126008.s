; FUN_10126008 @ 0x10126008 size=10
  ldr r0,[r0,#0x8]
  cbz r0,0x10126010
  ldr r0,[r0,#0x14]
  rsbs r0,r0
  bx lr
