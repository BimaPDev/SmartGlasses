; FUN_2c516868 @ 0x2c516868 size=38
  push {r4,lr}
  ldr r4,[r0,#0xc]
  bl 0x2c602410
  ldr r3,[0x2c516890]
  cmp r0,r3
  beq 0x2c516882
  mov r0,r4
  movs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c515b0c
  mov r0,r4
  movs r1,#0x2
  pop.w {r4,lr}
  b.w 0x2c515b0c
