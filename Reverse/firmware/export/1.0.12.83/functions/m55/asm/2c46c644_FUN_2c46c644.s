; FUN_2c46c644 @ 0x2c46c644 size=32
  push {r4,lr}
  movs r1,#0x1
  mov r4,r0
  movs r0,#0x28
  bl 0x2c6685b4
  cbz r0,0x2c46c662
  movs r3,#0x1
  ldr r1,[0x2c46c664]
  ldr r2,[0x2c46c668]
  str r4,[r0,#0x18]
  strb r3,[r0,#0x0]
  str r3,[r0,#0xc]
  strd r1,r2,[r0,#0x4]
  pop {r4,pc}
