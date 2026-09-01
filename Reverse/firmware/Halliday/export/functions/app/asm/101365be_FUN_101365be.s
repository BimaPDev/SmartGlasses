; FUN_101365be @ 0x101365be size=18
  push {r3,lr}
  bl 0x100d4684
  cbz r0,0x101365ce
  ldrb.w r0,[r0,#0x3c]
  and r0,r0,#0x1
  pop {r3,pc}
