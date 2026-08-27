/* FUN_2c01304c @ 0x2c01304c */

void FUN_2c01304c(ushort *param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  
  uVar2 = *DAT_2c0131a8;
  if ((int)(uVar2 << 0x10) < 0) {
    cVar1 = *DAT_2c0131ac;
    if (cVar1 == '\x02') {
      uVar6 = 0x18;
      uVar3 = 0x45;
LAB_2c0130d2:
      uVar5 = 0x14;
      goto LAB_2c0130d6;
    }
    if (cVar1 == '\x01') {
      uVar6 = 0x1a;
      uVar3 = 0x98;
      goto LAB_2c01311c;
    }
    if (cVar1 == '\x03') {
      uVar5 = 0x14;
      uVar3 = 0x90;
    }
    else {
      uVar3 = 0xb0;
      uVar5 = 0x18;
    }
    uVar6 = 0xc0;
  }
  else if ((uVar2 & 0x4020) == 0) {
    if (-1 < (int)(uVar2 << 0x14)) {
      if ((uVar2 & DAT_2c0131b0) != 0) {
        cVar1 = *DAT_2c0131ac;
        goto LAB_2c0130b8;
      }
      cVar1 = *DAT_2c0131ac;
      if ((uVar2 & 0x1008) == 0) {
        if (cVar1 == '\x02') {
          uVar3 = 0x40;
          uVar6 = 0x11;
          goto LAB_2c0130d2;
        }
        if (cVar1 == '\x01') {
          uVar6 = 0x13;
          uVar3 = 0x80;
          goto LAB_2c01311c;
        }
        uVar6 = 0x88;
        uVar3 = 0x80;
        uVar5 = 0x11;
        goto LAB_2c013090;
      }
      if (cVar1 == '\x02') {
        uVar6 = 0x14;
        uVar3 = 0x4c;
        uVar5 = 0x14;
        goto LAB_2c0130d6;
      }
      if (cVar1 != '\x01') {
        uVar6 = 0xa0;
        uVar3 = 0x98;
        uVar5 = 0x14;
        goto LAB_2c013090;
      }
      uVar6 = 0x16;
      uVar3 = 0x98;
LAB_2c01311c:
      uVar5 = 0x19;
      goto LAB_2c0130d6;
    }
    cVar1 = *DAT_2c0131ac;
    if ((uVar2 & 0x20000) == 0) {
LAB_2c0130b8:
      if (cVar1 == '\x02') {
        uVar6 = 0x16;
        uVar3 = 0x54;
        uVar5 = 0x16;
        goto LAB_2c0130d6;
      }
      if (cVar1 == '\x01') {
        uVar6 = 0x18;
        uVar3 = 0xa8;
        goto LAB_2c01311c;
      }
      uVar5 = 0x16;
      uVar6 = 0xb0;
      uVar3 = 0xa8;
    }
    else {
      if (cVar1 == '\x02') {
        uVar3 = 0x3d;
        uVar6 = 0x10;
        goto LAB_2c0130d2;
      }
      if (cVar1 == '\x01') {
        uVar6 = 0x12;
        uVar3 = 0x78;
        goto LAB_2c01311c;
      }
      uVar6 = 0x80;
      uVar3 = 0x78;
      uVar5 = 0x10;
    }
  }
  else {
    cVar1 = *DAT_2c0131ac;
    if (cVar1 == '\x02') {
      uVar6 = 0x1a;
      uVar3 = 0x73;
      uVar5 = 0x1e;
      goto LAB_2c0130d6;
    }
    if (cVar1 == '\x01') {
      uVar6 = 0x1c;
      uVar3 = 0xe8;
      uVar5 = 0x20;
      goto LAB_2c0130d6;
    }
    uVar6 = 0xd0;
    uVar3 = 0xe8;
    uVar5 = 0x1e;
  }
LAB_2c013090:
  if (cVar1 == '\x03') {
    uVar4 = 0x14;
  }
  else {
    uVar4 = 0x18;
  }
  if (uVar5 < uVar4) {
    if (cVar1 == '\x03') {
      uVar5 = 0x14;
    }
    else {
      uVar5 = 0x18;
    }
  }
LAB_2c0130d6:
  *param_1 = uVar5;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = uVar3;
  }
  *param_3 = uVar6;
  return;
}

