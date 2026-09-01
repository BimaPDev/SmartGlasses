; FUN_100f1c7c @ 0x100f1c7c size=34
  push {r4,lr}
  ldr r4,[0x100f1ca0]
  ldr r3,[r4,#0x40]
  cbz r3,0x100f1c8c
  movs r2,#0x0
  strd r2,r3,[r4,#0x40]
  pop {r4,pc}
  bl 0x100f0898
  cbz r0,0x100f1c98
  ldrb r3,[r0,#0x0]
  cmp r3,#0x0
  bne 0x100f1c8a
  movs r3,#0x0
  str r3,[r4,#0x44]
  pop {r4,pc}
