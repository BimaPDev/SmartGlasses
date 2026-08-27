; FUN_2c44d892 @ 0x2c44d892 size=22
  push {r1,r2,r3,r4,r6,lr}
  ldr r6,[sp,#0x250]
  adds r2,#0xa3
  strb r3,[r6,#0x9]
  add r1,sp,#0x2f0
  str r6,[sp,#0x3ec]
  ldmia r0!,{r1,r2,r5,r6,r7}
  eor pc,r2,#0xcacacaca
  mov r5,r1
  asrs r7,r6,#0x13
