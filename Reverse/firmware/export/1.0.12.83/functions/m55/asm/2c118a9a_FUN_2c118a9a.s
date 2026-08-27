; FUN_2c118a9a @ 0x2c118a9a size=32
  push {r0,r2,lr}
  ldmia r3!,{r1,r4,r6,r7}
  strh r1,[r4,#0x18]
  movs r2,#0x69
  lsls r4,r5,#0x1
  cmp r2,#0x57
  cmp r6,#0xbd
  b 0x2c118e8e
  strh r3,[r0,#0x18]
  ldmia r3!,{r1,r2,r6,r7}
  str r2,[r4,#0x24]
  subs r6,#0x2
  movs r2,#0x18
  strh r0,[r1,#0x2]
  ldr r6,[r2,#0x68]
  b 0x2c1192bc
