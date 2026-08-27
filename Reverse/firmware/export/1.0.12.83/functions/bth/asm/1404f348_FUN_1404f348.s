; FUN_1404f348 @ 0x1404f348 size=28
  push {r4,lr}
  mov r4,r1
  bl 0x1404a1b4
  cbz r0,0x1404f362
  mov r1,r4
  pop.w {r4,lr}
  ldr r2,[0x1404f364]
  ldr.w r0,[r0,#0xd4]
  b.w 0x14048958
  pop {r4,pc}
