; FUN_10057940 @ 0x10057940 size=28
  push {r3,r4,r5,lr}
  movs r4,#0x0
  ldr r5,[0x1005795c]
  ldr r3,[r5,#0x0]
  cmp r3,r4
  bgt 0x1005794e
  pop {r3,r4,r5,pc}
  add.w r3,r5,r4, lsl #0x3
  ldr r3,[r3,#0x8]
  cbz r3,0x10057958
  blx r3
  adds r4,#0x1
  b 0x10057946
