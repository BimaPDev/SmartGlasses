; FUN_2c432848 @ 0x2c432848 size=54
  push {r0,r1,r2,r4,r5,r7,lr}
  bics.w r12,r2,sp, lsl #0x16
  ldrh r6,[r1,#0x16]
  blt 0x2c4328e6
  eors r11,r11,#0x460000
  svc 0x24
  adr r7,[0x2c4328ac]
  lsls r5,r7,#0x2
  movs r0,r0
  movs r0,r0
  movs r0,r0
  lsls r3,r0,#0x18
  sbcs r7,lr,#0x79000
  ldmia r3,{r2,r3,r4}
  str r6,[r7,#0x40]
  asrs r1,r6,#0x4
  ldr r2,[r5,r6]
  asrs r7,r0,#0x1e
  cmp r11,r5
  lsls r6,r3,#0x1
  movs r0,r0
  movs r0,r0
  ldrb r1,[r5,r4]
  asrs r6,r3,#0xd
