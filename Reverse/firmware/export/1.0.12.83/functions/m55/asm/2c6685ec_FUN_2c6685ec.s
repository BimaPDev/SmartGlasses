; FUN_2c6685ec @ 0x2c6685ec size=32
  push {r3,lr}
  ldr r3,[0x2c66860c]
  mov r4,r0
  cbz r3,0x2c6685fa
  movs r1,#0x0
  bl 0x2c66ef00
  ldr r3,[0x2c668610]
  ldr r0,[r3,#0x0]
  ldr r3,[r0,#0x28]
  cbz r3,0x2c668604
  blx r3
  mov r0,r4
  bl 0x2c4e67d0
  nop
