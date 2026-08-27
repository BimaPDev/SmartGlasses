; FUN_2c485770 @ 0x2c485770 size=22
  cbz r0,0x2c48577c
  ldr r0,[r0,#0x8]
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
  ldr r1,[0x2c485788]
  ldr r0,[0x2c48578c]
  push {r3,lr}
  bl 0x2c673ca8
