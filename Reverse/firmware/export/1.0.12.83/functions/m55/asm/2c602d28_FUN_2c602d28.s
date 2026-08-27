; FUN_2c602d28 @ 0x2c602d28 size=44
  push {r4,lr}
  ldr r0,[0x2c602d54]
  bl 0x2c62c938
  mov r4,r0
  cbz r0,0x2c602d50
  movs r1,#0x4
  bl 0x2c62c928
  ldrb r3,[r4,#0x1c]
  movs r2,#0x0
  bic r3,r3,#0xf
  orr r3,r3,#0xc
  strd r2,r2,[r4,#0xc]
  strd r2,r2,[r4,#0x14]
  strb r3,[r4,#0x1c]
  mov r0,r4
  pop {r4,pc}
