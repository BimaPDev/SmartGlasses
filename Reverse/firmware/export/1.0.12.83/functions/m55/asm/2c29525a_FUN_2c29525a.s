; FUN_2c29525a @ 0x2c29525a size=40
  adr r0,[0x2c295078]
  movs r0,r0
  movs r0,r0
  add r6,sp,#0x0
  mcr p14,0x7,lr,cr14,cr15,0x7
  cdp p1,0xe,cr0,cr14,cr0,0x0
  movs r2,#0x22
  cmp r4,#0x22
  movs r2,#0xb2
  movs r2,#0x22
  ldr r6,[sp,#0x40]
  cdp p14,0xf,cr14,cr14,cr14,0x7
  b 0x2c295044
  push {r2,r3,r6,r7,lr}
  ldmia r4!,{r2,r3,r6,r7}
  movs r0,r6
  b 0x2c295064
