; FUN_100a4614 @ 0x100a4614 size=52
  push {r4,r5,r6,lr}
  ldr r4,[0x100a4648]
  movs r3,#0x0
  mov r5,r4
  cbz r0,0x100a4636
  ldr.w r6,[r4,#0xcc]
  cmp r6,#0x1
  bgt 0x100a463c
  adds r3,#0x19
  add.w r0,r5,r3, lsl #0x3
  str r2,[r0,#0x4]
  str.w r1,[r5,r3,lsl #0x3]
  movs r0,#0x0
  pop {r4,r5,r6,pc}
  ldr r6,[r4,#0x4]
  cmp r6,#0x1
  ble 0x100a4628
  adds r3,#0x1
  cmp r3,#0x19
  add.w r4,r4,#0x8
  bne 0x100a461c
  b 0x100a4632
