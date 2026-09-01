; FUN_100b9870 @ 0x100b9870 size=34
  push {r3,r4,r5,lr}
  movs r3,#0x0
  ldr r4,[0x100b9894]
  ldr r5,[0x100b9898]
  strd r3,r3,[r4,#0xc]
  strd r3,r3,[r4,#0x4]
  strb r3,[r4,#0x0]
  adds r4,#0x18
  mov r0,r4
  adds r4,#0x2
  bl 0x100b9d20
  cmp r4,r5
  bne 0x100b9884
  pop {r3,r4,r5,pc}
