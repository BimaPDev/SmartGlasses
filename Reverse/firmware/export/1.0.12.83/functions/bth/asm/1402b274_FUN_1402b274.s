; FUN_1402b274 @ 0x1402b274 size=26
  cmp r0,#0x3
  mov r2,r0
  push {r3,lr}
  bhi 0x1402b286
  ldr r3,[0x1402b290]
  movs r0,#0x0
  str.w r1,[r3,r2,lsl #0x2]
  pop {r3,pc}
  ldr r1,[0x1402b294]
  ldr r0,[0x1402b298]
  bl 0x1402b0f8
