; FUN_10094ab8 @ 0x10094ab8 size=30
  mov r1,r0
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x10094ad8]
  bl 0x1012b018
  movs r2,#0x1
  ldr r3,[0x10094adc]
  mov r0,r4
  pop.w {r4,lr}
  ldr r1,[0x10094ae0]
  strb r2,[r3,#0x0]
  b.w 0x10094268
