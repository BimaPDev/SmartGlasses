; FUN_2c4bb636 @ 0x2c4bb636 size=34
  push {r4,lr}
  bhi 0x2c4bb650
  ldr r3,[0x2c4bb658]
  ldr r4,[0x2c4bb65c]
  str.w r1,[r3,r0,lsl #0x2]
  ldr r3,[0x2c4bb660]
  ldr r1,[0x2c4bb664]
  str.w r2,[r4,r0,lsl #0x2]
  str.w r1,[r3,r0,lsl #0x2]
  pop {r4,pc}
  mov r1,r0
  ldr r0,[0x2c4bb668]
  bl 0x2c673ca8
