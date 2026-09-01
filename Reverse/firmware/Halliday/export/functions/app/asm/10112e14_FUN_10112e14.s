; FUN_10112e14 @ 0x10112e14 size=80
  push {r3,r4,r5,r6,r7,lr}
  ldr r3,[0x10112e64]
  ldr r7,[0x10112e68]
  ldr.w r4,[r3,r0,lsl #0x2]
  adds r0,#0x1
  ldr.w r6,[r3,r0,lsl #0x2]
  cmp r6,r4
  bhi 0x10112e2a
  pop {r3,r4,r5,r6,r7,pc}
  ldrd r2,r5,[r4,#0x0]
  cbz r5,0x10112e5e
  ldr r1,[r5,#0x0]
  ldr r0,[0x10112e6c]
  bl 0x10119dc2
  mov r0,r5
  ldr r3,[r4,#0x0]
  blx r3
  cbz r5,0x10112e5a
  ldr r3,[r5,#0xc]
  cbz r0,0x10112e52
  cmp r0,#0x0
  it lt
  rsb.lt r0,r0
  cmp r0,#0xff
  it ge
  mov.ge r0,#0xff
  strb r0,[r3,#0x0]
  ldrb r2,[r3,#0x1]
  orr r2,r2,#0x1
  strb r2,[r3,#0x1]
  adds r4,#0x8
  b 0x10112e24
  mov r1,r4
  mov r0,r7
  b 0x10112e34
