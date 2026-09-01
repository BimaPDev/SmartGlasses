; FUN_100f8340 @ 0x100f8340 size=108
  ldr r3,[r0,#0x24]
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  cmp r3,#0x0
  mov r8,r0
  mov r10,r1
  ble 0x100f83a8
  movs r4,#0x0
  mov r9,r4
  ldr r1,[r0,#0x28]
  ldr.w r5,[r1,r4,lsl #0x2]
  ldr r2,[r5,#0xc]
  ldr r3,[r5,#0x0]
  ldr r6,[r2,#0x8]
  ldr r7,[r3,#0x64]
  cbz r6,0x100f8390
  mov r0,r5
  blx r6
  mov r1,r5
  mov r0,r7
  ldr r3,[r7,#0x8]
  blx r3
  ldrd r2,r1,[r8,#0x24]
  str.w r9,[r1,r4,lsl #0x2]
  adds r4,#0x1
  cmp r2,r4
  bgt 0x100f8354
  cbz r1,0x100f8386
  mov r0,r10
  ldr.w r3,[r10,#0x8]
  blx r3
  movs r3,#0x0
  strd r3,r3,[r8,#0x24]
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  mov r1,r5
  mov r0,r7
  ldr r3,[r7,#0x8]
  blx r3
  ldrd r2,r1,[r8,#0x24]
  str.w r6,[r1,r4,lsl #0x2]
  adds r4,#0x1
  cmp r4,r2
  blt 0x100f8354
  b 0x100f837c
  ldr r1,[r0,#0x28]
  b 0x100f837c
