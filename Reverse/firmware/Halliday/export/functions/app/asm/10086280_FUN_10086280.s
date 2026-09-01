; FUN_10086280 @ 0x10086280 size=34
  cmp r0,#0x4
  push {r3,lr}
  bhi 0x1008629a
  ldr r3,[0x100862a4]
  ldr.w r0,[r3,r0,lsl #0x2]
  bl 0x1011b4be
  cmp r0,#0x16
  bhi 0x1008629e
  ldr r3,[0x100862a8]
  ldrb r0,[r3,r0]
  pop {r3,pc}
  movs r0,#0x2
  b 0x10086298
  movs r0,#0x1
  b 0x10086298
