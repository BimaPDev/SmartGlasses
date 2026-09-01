; FUN_100862e0 @ 0x100862e0 size=34
  cmp r0,#0x4
  push {r4,lr}
  bhi 0x100862fa
  ldr r4,[0x10086304]
  ldr.w r0,[r4,r0,lsl #0x2]
  bl 0x1008679c
  cmp r0,#0x16
  bhi 0x100862fe
  ldr r3,[0x10086308]
  ldrb r0,[r3,r0]
  pop {r4,pc}
  movs r0,#0x2
  b 0x100862f8
  movs r0,#0x1
  b 0x100862f8
