; FUN_100f1570 @ 0x100f1570 size=42
  ldr r3,[0x100f159c]
  push {r4}
  mov r4,r0
  ldr r0,[r3,#0x0]
  cbnz r0,0x100f1580
  b 0x100f1590
  ldr r0,[r0,#0x0]
  cbz r0,0x100f1590
  ldr r3,[r0,#0x4]
  ldrh r3,[r3,#0xc]
  cmp r3,r4
  bne 0x100f157c
  pop.w r4
  b.w 0x100f1034
  mvn r0,#0x2
  pop.w r4
  bx lr
