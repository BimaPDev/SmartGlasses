; FUN_1011c8a4 @ 0x1011c8a4 size=30
  movs r3,#0x0
  mov r2,r3
  push {r4,lr}
  sxtb r4,r3
  cmp r1,r4
  bgt 0x1011c8b8
  clz r0,r2
  lsrs r0,r0,#0x5
  pop {r4,pc}
  ldr.w r4,[r0,r3,lsl #0x2]
  adds r3,#0x1
  orrs r2,r4
  b 0x1011c8aa
