/* FUN_2c5f3724 @ 0x2c5f3724 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5f3724(byte *param_1)

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
      goto LAB_2c5f379a;
    }
    if (bVar7 == 0xe0) {
      bVar5 = param_1[1] + 0x60;
joined_r0x2c5f37f4:
      if (0x1f < bVar5) {
        return 0;
      }
    }
    else {
      bVar5 = param_1[1] ^ 0x80;
      if (bVar7 == 0xed) goto joined_r0x2c5f37f4;
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
    goto LAB_2c5f3808;
  }
  if (bVar7 < 0x2d) {
    if (bVar7 == 0) {
      return 0;
    }
    if (bVar7 == 10) {
      return 0;
    }
LAB_2c5f3736:
    uVar4 = (uint)param_1[1];
    pbVar1 = param_1 + 1;
    if (uVar4 < 0xb) {
      if (uVar4 == 10) {
        return 0;
      }
      if (uVar4 == 0) {
        return 0;
      }
      bVar5 = *(byte *)(_LAB_2c5f3990 + uVar4);
      goto LAB_2c5f37de;
    }
    pbVar6 = pbVar1;
    if ((int)(uVar4 << 0x18) < 0) {
      if (0x32 < (uVar4 + 0x3e & 0xff)) {
        return 0;
      }
      bVar7 = 0;
      bVar5 = *(byte *)(_LAB_2c5f3990 + uVar4);
      goto LAB_2c5f3836;
    }
    bVar7 = *(byte *)(_LAB_2c5f3990 + uVar4) & 0x40;
    if ((*(byte *)(_LAB_2c5f3990 + uVar4) & 0x40) == 0) goto LAB_2c5f388e;
  }
  else {
    if (bVar7 != 0x2d) {
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
        goto LAB_2c5f3808;
      }
      goto LAB_2c5f3736;
    }
    uVar4 = (uint)param_1[1];
    pbVar1 = param_1 + 1;
    bVar5 = *(byte *)(_LAB_2c5f3990 + uVar4);
    if (*(char *)(_LAB_2c5f3990 + uVar4) < '\0') {
      bVar7 = 0;
      pbVar3 = pbVar1;
      goto LAB_2c5f38b0;
    }
    if (10 < uVar4) {
      if (((int)(uVar4 << 0x18) < 0) && (0x32 < (uVar4 + 0x3e & 0xff))) {
        return 0;
      }
      bVar7 = 0;
      pbVar6 = pbVar1;
      goto LAB_2c5f3836;
    }
    if (uVar4 == 0) {
      return 0;
    }
    if (uVar4 == 10) {
      return 0;
    }
LAB_2c5f37de:
    if ((bVar5 & 0x40) == 0) {
      return 0;
    }
  }
  bVar7 = 0;
  pbVar3 = param_1 + 1;
  pbVar6 = param_1 + 1;
LAB_2c5f3808:
  do {
    do {
      uVar4 = (uint)pbVar3[1];
      pbVar1 = pbVar3 + 1;
      bVar5 = *(byte *)(_LAB_2c5f3990 + uVar4);
LAB_2c5f3836:
      pbVar3 = pbVar1;
    } while ((bVar5 & 0x40) != 0);
    if (uVar4 < 0xed) {
      if (0xc1 < uVar4) {
LAB_2c5f390c:
        pbVar3 = pbVar1;
        if (uVar4 < 0xe0) goto LAB_2c5f3858;
        pbVar1 = pbVar6;
        if (uVar4 != 0xe0) goto LAB_2c5f384c;
LAB_2c5f3914:
        pbVar6 = pbVar1;
        if ((byte)(pbVar3[1] + 0x60) < 0x20) goto LAB_2c5f3856;
        goto LAB_2c5f3862;
      }
LAB_2c5f388e:
      if (0x22 < uVar4 - 0xb) goto LAB_2c5f3862;
      while( true ) {
        uVar4 = (uint)pbVar1[1];
        pbVar1 = pbVar1 + 1;
        pbVar3 = pbVar1;
        if ((*(byte *)(_LAB_2c5f3990 + uVar4) & 0x40) != 0) break;
        if (0xec < uVar4) goto LAB_2c5f3840;
        if (0xc1 < uVar4) goto LAB_2c5f390c;
        pbVar1 = pbVar6;
        if (0x22 < uVar4 - 0xb) goto LAB_2c5f3862;
LAB_2c5f38b0:
        do {
          pbVar2 = pbVar3;
          pbVar3 = pbVar2 + 1;
          uVar4 = (uint)*pbVar3;
        } while (*(char *)(_LAB_2c5f3990 + uVar4) < '\0');
        pbVar6 = pbVar1;
        if (0xdf < uVar4) {
          if (0xef < uVar4) {
            if (uVar4 != 0xf0) goto LAB_2c5f38dc;
            goto LAB_2c5f3948;
          }
          if (uVar4 == 0xe0) goto LAB_2c5f3914;
          if (uVar4 == 0xed) goto LAB_2c5f393c;
          goto LAB_2c5f384c;
        }
        if (uVar4 < 0x3e) {
          if ((uVar4 == 10) || (uVar4 == 0)) goto LAB_2c5f3862;
          break;
        }
        if (uVar4 != 0x3e) {
          if ((*pbVar3 & 0x80) != 0) {
            if (uVar4 < 0xc2) goto LAB_2c5f3862;
            goto LAB_2c5f3858;
          }
          break;
        }
        uVar4 = (uint)pbVar2[2];
        pbVar1 = pbVar2 + 2;
        bVar7 = 1;
        pbVar3 = pbVar1;
        pbVar6 = pbVar1;
        if ((int)((uint)*(byte *)(_LAB_2c5f3990 + uVar4) << 0x19) < 0) break;
        if (0xec < uVar4) {
          if (uVar4 < 0xf1) {
            if (uVar4 == 0xed) {
              if ((pbVar2[3] ^ 0x80) < 0x20) goto LAB_2c5f39ae;
              goto LAB_2c5f3868;
            }
            if (uVar4 != 0xf0) goto LAB_2c5f39a0;
            if (0x2f < (byte)(pbVar2[3] + 0x70)) goto LAB_2c5f3868;
          }
          else if (uVar4 < 0xf4) {
            if (0x3f < (pbVar2[3] ^ 0x80)) goto LAB_2c5f3868;
          }
          else if ((uVar4 != 0xf4) || (0xf < (pbVar2[3] ^ 0x80))) goto LAB_2c5f3868;
          pbVar3 = pbVar2 + 3;
          if (0x3f < (pbVar2[4] ^ 0x80)) goto LAB_2c5f3868;
          bVar7 = 1;
          goto LAB_2c5f3856;
        }
        if (0xc1 < uVar4) {
          if (0xdf < uVar4) {
            if (uVar4 == 0xe0) {
              if (0x1f < (byte)(pbVar2[3] + 0x60)) goto LAB_2c5f3868;
            }
            else {
LAB_2c5f39a0:
              if (0x3f < (pbVar2[3] ^ 0x80)) goto LAB_2c5f3868;
            }
LAB_2c5f39ae:
            pbVar3 = pbVar2 + 3;
            bVar7 = 1;
            if (0x3f < (pbVar2[4] ^ 0x80)) goto LAB_2c5f3868;
            goto LAB_2c5f379a;
          }
          if (0x3f < (pbVar2[3] ^ 0x80)) goto LAB_2c5f3868;
          pbVar3 = pbVar2 + 3;
          break;
        }
        if (0x22 < uVar4 - 0xb) goto LAB_2c5f3868;
      }
      goto LAB_2c5f3808;
    }
LAB_2c5f3840:
    pbVar3 = pbVar1;
    if (uVar4 < 0xf1) {
      if (uVar4 != 0xed) {
        pbVar1 = pbVar6;
        if (uVar4 != 0xf0) goto LAB_2c5f384c;
LAB_2c5f3948:
        pbVar6 = pbVar1;
        if ((byte)(pbVar3[1] + 0x70) < 0x30) goto LAB_2c5f38ee;
        goto LAB_2c5f3862;
      }
LAB_2c5f393c:
      pbVar1 = pbVar6;
      pbVar6 = pbVar1;
      if (0x1f < (pbVar3[1] ^ 0x80)) goto LAB_2c5f3862;
    }
    else {
LAB_2c5f38dc:
      if (uVar4 < 0xf4) {
        if (0x3f < (pbVar3[1] ^ 0x80)) {
LAB_2c5f3862:
          pbVar1 = pbVar6;
          if (bVar7 == 0) {
            return 0;
          }
LAB_2c5f3868:
          return (int)pbVar1 - (int)param_1;
        }
      }
      else if ((uVar4 != 0xf4) || (0xf < (pbVar3[1] ^ 0x80))) goto LAB_2c5f3862;
LAB_2c5f38ee:
      pbVar3 = pbVar3 + 1;
      pbVar1 = pbVar6;
LAB_2c5f384c:
      pbVar6 = pbVar1;
      if (0x3f < (pbVar3[1] ^ 0x80)) goto LAB_2c5f3862;
    }
LAB_2c5f3856:
    pbVar3 = pbVar3 + 1;
    pbVar6 = pbVar1;
LAB_2c5f3858:
    pbVar1 = pbVar6;
    pbVar6 = pbVar1;
    if (0x3f < (pbVar3[1] ^ 0x80)) goto LAB_2c5f3862;
LAB_2c5f379a:
    pbVar3 = pbVar3 + 1;
    pbVar6 = pbVar1;
  } while( true );
}

