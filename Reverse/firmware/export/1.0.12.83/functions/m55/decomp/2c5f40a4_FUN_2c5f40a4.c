/* FUN_2c5f40a4 @ 0x2c5f40a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5f40a4(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  byte bVar7;
  
  bVar7 = *param_1;
  if (0xdf < bVar7) {
    if (0xef < bVar7) {
      if (bVar7 == 0xf0) {
        if (0x2f < (byte)(param_1[1] + 0x70)) {
          return 0;
        }
      }
      else if (bVar7 < 0xf4) {
        if (0x3f < (param_1[1] ^ 0x80)) {
          return 0;
        }
      }
      else {
        if (bVar7 != 0xf4) {
          return 0;
        }
        if (0xf < (param_1[1] ^ 0x80)) {
          return 0;
        }
      }
      pbVar1 = param_1 + 1;
      if (0x3f < (param_1[2] ^ 0x80)) {
        return 0;
      }
      pbVar3 = param_1 + 2;
      if (0x3f < (param_1[3] ^ 0x80)) {
        return 0;
      }
      bVar7 = 0;
      goto LAB_2c5f411a;
    }
    if (bVar7 == 0xe0) {
      bVar5 = param_1[1] + 0x60;
joined_r0x2c5f4174:
      if (0x1f < bVar5) {
        return 0;
      }
    }
    else {
      bVar5 = param_1[1] ^ 0x80;
      if (bVar7 == 0xed) goto joined_r0x2c5f4174;
      if (0x3f < bVar5) {
        return 0;
      }
    }
    if (0x3f < (param_1[2] ^ 0x80)) {
      return 0;
    }
    bVar7 = 0;
    pbVar3 = param_1 + 2;
    pbVar6 = param_1 + 1;
    goto LAB_2c5f4188;
  }
  if (bVar7 < 0x5d) {
    if (bVar7 == 0) {
      return 0;
    }
    if (bVar7 == 10) {
      return 0;
    }
LAB_2c5f40b6:
    uVar4 = (uint)param_1[1];
    pbVar1 = param_1 + 1;
    if (uVar4 < 0xb) {
      if (uVar4 == 10) {
        return 0;
      }
      if (uVar4 == 0) {
        return 0;
      }
      bVar5 = *(byte *)(_LAB_2c5f4310 + uVar4);
      goto LAB_2c5f415e;
    }
    pbVar6 = pbVar1;
    if ((int)(uVar4 << 0x18) < 0) {
      if (0x32 < (uVar4 + 0x3e & 0xff)) {
        return 0;
      }
      bVar7 = 0;
      bVar5 = *(byte *)(_LAB_2c5f4310 + uVar4);
      goto LAB_2c5f41b6;
    }
    bVar7 = *(byte *)(_LAB_2c5f4310 + uVar4) & 0x40;
    if ((*(byte *)(_LAB_2c5f4310 + uVar4) & 0x40) == 0) goto LAB_2c5f420e;
  }
  else {
    if (bVar7 != 0x5d) {
      if ((int)((uint)bVar7 << 0x18) < 0) {
        if (bVar7 < 0xc2) {
          return 0;
        }
        if (0x3f < (param_1[1] ^ 0x80)) {
          return 0;
        }
        bVar7 = 0;
        pbVar3 = param_1 + 1;
        pbVar6 = param_1 + 1;
        goto LAB_2c5f4188;
      }
      goto LAB_2c5f40b6;
    }
    uVar4 = (uint)param_1[1];
    pbVar1 = param_1 + 1;
    bVar5 = *(byte *)(_LAB_2c5f4310 + uVar4);
    if (*(char *)(_LAB_2c5f4310 + uVar4) < '\0') {
      bVar7 = 0;
      pbVar3 = pbVar1;
      goto LAB_2c5f4230;
    }
    if (10 < uVar4) {
      if (((int)(uVar4 << 0x18) < 0) && (0x32 < (uVar4 + 0x3e & 0xff))) {
        return 0;
      }
      bVar7 = 0;
      pbVar6 = pbVar1;
      goto LAB_2c5f41b6;
    }
    if (uVar4 == 0) {
      return 0;
    }
    if (uVar4 == 10) {
      return 0;
    }
LAB_2c5f415e:
    if ((bVar5 & 0x40) == 0) {
      return 0;
    }
  }
  bVar7 = 0;
  pbVar3 = param_1 + 1;
  pbVar6 = param_1 + 1;
LAB_2c5f4188:
  do {
    do {
      uVar4 = (uint)pbVar3[1];
      pbVar1 = pbVar3 + 1;
      bVar5 = *(byte *)(_LAB_2c5f4310 + uVar4);
LAB_2c5f41b6:
      pbVar3 = pbVar1;
    } while ((bVar5 & 0x40) != 0);
    if (uVar4 < 0xed) {
      if (0xc1 < uVar4) {
LAB_2c5f428c:
        pbVar3 = pbVar1;
        if (uVar4 < 0xe0) goto LAB_2c5f41d8;
        pbVar1 = pbVar6;
        if (uVar4 != 0xe0) goto LAB_2c5f41cc;
LAB_2c5f4294:
        pbVar6 = pbVar1;
        if ((byte)(pbVar3[1] + 0x60) < 0x20) goto LAB_2c5f41d6;
        goto LAB_2c5f41e2;
      }
LAB_2c5f420e:
      if (0x52 < uVar4 - 0xb) goto LAB_2c5f41e2;
      while( true ) {
        uVar4 = (uint)pbVar1[1];
        pbVar1 = pbVar1 + 1;
        pbVar3 = pbVar1;
        if ((*(byte *)(_LAB_2c5f4310 + uVar4) & 0x40) != 0) break;
        if (0xec < uVar4) goto LAB_2c5f41c0;
        if (0xc1 < uVar4) goto LAB_2c5f428c;
        pbVar1 = pbVar6;
        if (0x52 < uVar4 - 0xb) goto LAB_2c5f41e2;
LAB_2c5f4230:
        do {
          pbVar2 = pbVar3;
          pbVar3 = pbVar2 + 1;
          uVar4 = (uint)*pbVar3;
        } while (*(char *)(_LAB_2c5f4310 + uVar4) < '\0');
        pbVar6 = pbVar1;
        if (0xdf < uVar4) {
          if (0xef < uVar4) {
            if (uVar4 != 0xf0) goto LAB_2c5f425c;
            goto LAB_2c5f42c8;
          }
          if (uVar4 == 0xe0) goto LAB_2c5f4294;
          if (uVar4 == 0xed) goto LAB_2c5f42bc;
          goto LAB_2c5f41cc;
        }
        if (uVar4 < 0x3e) {
          if ((uVar4 == 10) || (uVar4 == 0)) goto LAB_2c5f41e2;
          break;
        }
        if (uVar4 != 0x3e) {
          if ((*pbVar3 & 0x80) != 0) {
            if (uVar4 < 0xc2) goto LAB_2c5f41e2;
            goto LAB_2c5f41d8;
          }
          break;
        }
        uVar4 = (uint)pbVar2[2];
        pbVar1 = pbVar2 + 2;
        bVar7 = 1;
        pbVar3 = pbVar1;
        pbVar6 = pbVar1;
        if ((int)((uint)*(byte *)(_LAB_2c5f4310 + uVar4) << 0x19) < 0) break;
        if (0xec < uVar4) {
          if (uVar4 < 0xf1) {
            if (uVar4 == 0xed) {
              if ((pbVar2[3] ^ 0x80) < 0x20) goto LAB_2c5f432e;
              goto LAB_2c5f41e8;
            }
            if (uVar4 != 0xf0) goto LAB_2c5f4320;
            if (0x2f < (byte)(pbVar2[3] + 0x70)) goto LAB_2c5f41e8;
          }
          else if (uVar4 < 0xf4) {
            if (0x3f < (pbVar2[3] ^ 0x80)) goto LAB_2c5f41e8;
          }
          else if ((uVar4 != 0xf4) || (0xf < (pbVar2[3] ^ 0x80))) goto LAB_2c5f41e8;
          pbVar3 = pbVar2 + 3;
          if (0x3f < (pbVar2[4] ^ 0x80)) goto LAB_2c5f41e8;
          bVar7 = 1;
          goto LAB_2c5f41d6;
        }
        if (0xc1 < uVar4) {
          if (0xdf < uVar4) {
            if (uVar4 == 0xe0) {
              if (0x1f < (byte)(pbVar2[3] + 0x60)) goto LAB_2c5f41e8;
            }
            else {
LAB_2c5f4320:
              if (0x3f < (pbVar2[3] ^ 0x80)) goto LAB_2c5f41e8;
            }
LAB_2c5f432e:
            pbVar3 = pbVar2 + 3;
            bVar7 = 1;
            if (0x3f < (pbVar2[4] ^ 0x80)) goto LAB_2c5f41e8;
            goto LAB_2c5f411a;
          }
          if (0x3f < (pbVar2[3] ^ 0x80)) goto LAB_2c5f41e8;
          pbVar3 = pbVar2 + 3;
          break;
        }
        if (0x52 < uVar4 - 0xb) goto LAB_2c5f41e8;
      }
      goto LAB_2c5f4188;
    }
LAB_2c5f41c0:
    pbVar3 = pbVar1;
    if (uVar4 < 0xf1) {
      if (uVar4 != 0xed) {
        pbVar1 = pbVar6;
        if (uVar4 != 0xf0) goto LAB_2c5f41cc;
LAB_2c5f42c8:
        pbVar6 = pbVar1;
        if ((byte)(pbVar3[1] + 0x70) < 0x30) goto LAB_2c5f426e;
        goto LAB_2c5f41e2;
      }
LAB_2c5f42bc:
      pbVar1 = pbVar6;
      pbVar6 = pbVar1;
      if (0x1f < (pbVar3[1] ^ 0x80)) goto LAB_2c5f41e2;
    }
    else {
LAB_2c5f425c:
      if (uVar4 < 0xf4) {
        if (0x3f < (pbVar3[1] ^ 0x80)) {
LAB_2c5f41e2:
          pbVar1 = pbVar6;
          if (bVar7 == 0) {
            return 0;
          }
LAB_2c5f41e8:
          return (int)pbVar1 - (int)param_1;
        }
      }
      else if ((uVar4 != 0xf4) || (0xf < (pbVar3[1] ^ 0x80))) goto LAB_2c5f41e2;
LAB_2c5f426e:
      pbVar3 = pbVar3 + 1;
      pbVar1 = pbVar6;
LAB_2c5f41cc:
      pbVar6 = pbVar1;
      if (0x3f < (pbVar3[1] ^ 0x80)) goto LAB_2c5f41e2;
    }
LAB_2c5f41d6:
    pbVar3 = pbVar3 + 1;
    pbVar6 = pbVar1;
LAB_2c5f41d8:
    pbVar1 = pbVar6;
    pbVar6 = pbVar1;
    if (0x3f < (pbVar3[1] ^ 0x80)) goto LAB_2c5f41e2;
LAB_2c5f411a:
    pbVar3 = pbVar3 + 1;
    pbVar6 = pbVar1;
  } while( true );
}

