; FUN_2c5d4974 @ 0x2c5d4974 size=32
  push {r3,lr}
  bl 0x2c621080
  cbz r0,0x2c5d4982
  ldrb.w r3,[r0,#0x260]
  cbz r3,0x2c5d4986
  pop {r3,pc}
  add.w r0,r0,#0x148
  bl 0x2c5d3568
  pop.w {r3,lr}
  b.w 0x2c5cfefc
