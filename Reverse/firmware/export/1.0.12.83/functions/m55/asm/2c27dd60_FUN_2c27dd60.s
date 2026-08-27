; FUN_2c27dd60 @ 0x2c27dd60 size=24
  push {r0,r1,r2,r3,r4,r5,r6,lr}
  stmia r6!,{r0,r1,r3}
  cmn r5,r3
  movs r0,r0
  movs r0,r0
  movs r0,r0
  vabd.f32 d12,d23,d1
  movs r0,r2
  movs r0,r0
  ldr r5,[sp,#0x94]
  str r4,[r7,#0x1c]
