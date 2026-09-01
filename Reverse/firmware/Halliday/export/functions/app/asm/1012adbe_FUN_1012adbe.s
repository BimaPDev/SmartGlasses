; FUN_1012adbe @ 0x1012adbe size=28
  push {r4,r5,lr}
  movs r4,#0x0
  uxth r5,r4
  adds r3,r2,r5
  cmp r1,r5
  uxth r3,r3
  bhi 0x1012adce
  pop {r4,r5,pc}
  ubfx r3,r3,#0x0,#0xf
  strh.w r3,[r0,r4,lsl #0x1]
  adds r4,#0x1
  b 0x1012adc2
