; FUN_2c43f61c @ 0x2c43f61c size=14
  push {r3,r4,r7,lr}
  adds r4,#0x1f
  ldrb r7,[r1,#0x7]
  asrs r1,r3,#0x13
  it mi
  str.mi r5,[sp,#0x32c]
  strh r3,[r1,#0x1c]
