/* FUN_2c5f2fb8 @ 0x2c5f2fb8 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c5f2fb8(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  bVar2 = *param_1;
  if (bVar2 < 0xe0) {
    if (bVar2 < 0x3c) {
      if (bVar2 == 0) {
        return 0;
      }
      if (bVar2 == 10) {
        return 0;
      }
LAB_2c5f2fca:
      uVar3 = (uint)param_1[1];
      pbVar1 = param_1 + 1;
      pbVar5 = pbVar1;
      if (10 < uVar3) {
        if (((int)(uVar3 << 0x18) < 0) && (0x32 < (uVar3 + 0x3e & 0xff))) {
          return 0;
        }
        bVar2 = 0;
        goto LAB_2c5f30ca;
      }
      if (uVar3 == 10) {
        return 0;
      }
      if (uVar3 == 0) {
        return 0;
      }
      if ((*(byte *)(_LAB_2c5f3250 + uVar3) & 0x40) == 0) {
        return *(byte *)(_LAB_2c5f3250 + uVar3) & 0x40;
      }
      bVar2 = 0;
      pbVar7 = pbVar1;
    }
    else if (bVar2 == 0x3c) {
      uVar3 = (uint)param_1[1];
      pbVar1 = param_1 + 1;
      pbVar5 = pbVar1;
      if (uVar3 < 0x2f) {
        if (uVar3 == 0) {
          return 0;
        }
        if (uVar3 == 10) {
          return 0;
        }
      }
      else {
        if ((int)(uVar3 << 0x18) < 0) {
          if (0x32 < (uVar3 + 0x3e & 0xff)) {
            return 0;
          }
          bVar2 = 0;
          goto LAB_2c5f30ca;
        }
        if (uVar3 == 0x2f) {
          bVar2 = 0;
          pbVar6 = pbVar1;
          goto LAB_2c5f31b0;
        }
      }
      bVar2 = *(byte *)(_LAB_2c5f3250 + uVar3) & 0x40;
      pbVar7 = pbVar1;
      if ((*(byte *)(_LAB_2c5f3250 + uVar3) & 0x40) == 0) {
        if (uVar3 - 0xb < 0x32) goto LAB_2c5f3180;
        return 0;
      }
      bVar2 = 0;
    }
    else {
      if (-1 < (int)((uint)bVar2 << 0x18)) goto LAB_2c5f2fca;
      if (bVar2 < 0xc2) {
        return 0;
      }
      if (0x3f < (param_1[1] ^ 0x80)) {
        return 0;
      }
      bVar2 = 0;
      pbVar5 = param_1 + 1;
      pbVar7 = param_1 + 1;
    }
  }
  else {
    if (0xef < bVar2) {
      if (bVar2 == 0xf0) {
        if (0x2f < (byte)(param_1[1] + 0x70)) {
          return 0;
        }
      }
      else if (bVar2 < 0xf4) {
        if (0x3f < (param_1[1] ^ 0x80)) {
          return 0;
        }
      }
      else {
        if (bVar2 != 0xf4) {
          return 0;
        }
        if (0xf < (param_1[1] ^ 0x80)) {
          return 0;
        }
      }
      pbVar5 = param_1 + 1;
      if (0x3f < (param_1[2] ^ 0x80)) {
        return 0;
      }
      pbVar7 = param_1 + 2;
      if (0x3f < (param_1[3] ^ 0x80)) {
        return 0;
      }
      bVar2 = 0;
      goto LAB_2c5f3036;
    }
    if (bVar2 == 0xe0) {
      bVar4 = param_1[1] + 0x60;
joined_r0x2c5f308a:
      if (0x1f < bVar4) {
        return 0;
      }
    }
    else {
      bVar4 = param_1[1] ^ 0x80;
      if (bVar2 == 0xed) goto joined_r0x2c5f308a;
      if (0x3f < bVar4) {
        return 0;
      }
    }
    if (0x3f < (param_1[2] ^ 0x80)) {
      return 0;
    }
    bVar2 = 0;
    pbVar5 = param_1 + 1;
    pbVar7 = param_1 + 2;
  }
LAB_2c5f30a0:
  do {
    pbVar1 = pbVar7 + 1;
    uVar3 = (uint)pbVar7[1];
LAB_2c5f30ca:
    pbVar7 = pbVar1;
  } while ((*(byte *)(_LAB_2c5f3250 + uVar3) & 0x40) != 0);
  if (uVar3 < 0xed) {
    if (uVar3 < 0xc2) {
      if (uVar3 - 0xb < 0x32) {
LAB_2c5f3180:
        do {
          pbVar7 = pbVar7 + 1;
          uVar3 = (uint)*pbVar7;
        } while (*(char *)(_LAB_2c5f3250 + uVar3) < '\0');
        if (0xdf < uVar3) {
          if (0xef < uVar3) goto LAB_2c5f33e8;
          if (uVar3 != 0xe0) goto joined_r0x2c5f3224;
          goto LAB_2c5f320a;
        }
        if (uVar3 < 0x2f) {
          if (uVar3 != 10) goto joined_r0x2c5f3198;
          goto LAB_2c5f313a;
        }
        pbVar6 = pbVar7;
        if (uVar3 == 0x2f) goto LAB_2c5f31b0;
        goto LAB_2c5f3258;
      }
    }
    else {
LAB_2c5f311a:
      pbVar7 = pbVar1;
      if (uVar3 < 0xe0) goto LAB_2c5f312e;
      if (uVar3 != 0xe0) goto LAB_2c5f3122;
LAB_2c5f320a:
      if ((byte)(pbVar7[1] + 0x60) < 0x20) goto LAB_2c5f312c;
    }
    goto LAB_2c5f313a;
  }
LAB_2c5f30da:
  if (uVar3 < 0xf1) {
    if (uVar3 != 0xed) {
joined_r0x2c5f34f6:
      if (uVar3 != 0xf0) goto LAB_2c5f3122;
LAB_2c5f30e8:
      if ((byte)(pbVar7[1] + 0x70) < 0x30) goto LAB_2c5f30f2;
      goto LAB_2c5f313a;
    }
LAB_2c5f3228:
    if (0x1f < (pbVar7[1] ^ 0x80)) goto LAB_2c5f313a;
  }
  else {
joined_r0x2c5f33f0:
    if (uVar3 < 0xf4) {
      if (0x3f < (*(byte *)((int)pbVar7 + 1) ^ 0x80)) {
LAB_2c5f313a:
        if (bVar2 == 0) {
          return 0;
        }
LAB_2c5f3140:
        return (int)pbVar5 - (int)param_1;
      }
    }
    else if ((uVar3 != 0xf4) || (0xf < (*(byte *)((int)pbVar7 + 1) ^ 0x80))) goto LAB_2c5f313a;
LAB_2c5f30f2:
    pbVar7 = pbVar7 + 1;
LAB_2c5f3122:
    if (0x3f < (pbVar7[1] ^ 0x80)) goto LAB_2c5f313a;
  }
LAB_2c5f312c:
  pbVar7 = pbVar7 + 1;
LAB_2c5f312e:
  if (0x3f < (pbVar7[1] ^ 0x80)) goto LAB_2c5f313a;
LAB_2c5f3036:
  pbVar7 = pbVar7 + 1;
  goto LAB_2c5f30a0;
LAB_2c5f31b0:
  uVar3 = (uint)pbVar6[1];
  pbVar1 = pbVar6 + 1;
  pbVar7 = pbVar1;
  if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
  if (uVar3 < 0x74) {
    if (uVar3 < 0x53) {
      if (uVar3 < 0xb) goto joined_r0x2c5f366e;
      if (uVar3 != 0x50) goto LAB_2c5f30a0;
LAB_2c5f31d4:
      uVar3 = (uint)pbVar6[2];
      pbVar1 = pbVar6 + 2;
      pbVar7 = pbVar1;
      if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
      if (0xc1 < uVar3) goto LAB_2c5f34fe;
      if (uVar3 < 0x52) {
        if (uVar3 == 10) goto LAB_2c5f313a;
LAB_2c5f31f6:
        pbVar7 = pbVar6 + 2;
joined_r0x2c5f3198:
        if (uVar3 == 0) goto LAB_2c5f313a;
        goto LAB_2c5f30a0;
      }
      if (uVar3 < 0x72) {
        if (uVar3 != 0x52) goto LAB_2c5f30a0;
      }
      else if (uVar3 != 0x72) goto LAB_2c5f3246;
LAB_2c5f3524:
      uVar3 = (uint)pbVar1[1];
      pbVar1 = pbVar1 + 1;
      pbVar7 = pbVar1;
      if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
      if (0xc1 < uVar3) {
        if (uVar3 < 0xee) {
          if (uVar3 < 0xe0) goto LAB_2c5f312e;
          goto LAB_2c5f36b4;
        }
        goto joined_r0x2c5f34f2;
      }
      if (uVar3 < 0x45) goto joined_r0x2c5f366e;
      if (uVar3 < 0x65) {
        if (uVar3 != 0x45) goto LAB_2c5f30a0;
      }
      else if (uVar3 != 0x65) {
        if (-1 < (int)(uVar3 << 0x18)) goto LAB_2c5f30a0;
        goto LAB_2c5f313a;
      }
LAB_2c5f3396:
      uVar3 = (uint)pbVar1[1];
      pbVar7 = pbVar1 + 1;
      if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
      if (0xdf < uVar3) {
        if (0xef < uVar3) {
LAB_2c5f33e8:
          if (uVar3 == 0xf0) goto LAB_2c5f30e8;
          goto joined_r0x2c5f33f0;
        }
LAB_2c5f36b4:
        if (uVar3 == 0xe0) goto LAB_2c5f320a;
        if (uVar3 == 0xed) goto LAB_2c5f3228;
        goto LAB_2c5f3122;
      }
      if (uVar3 < 0x3e) {
joined_r0x2c5f366e:
        if ((uVar3 == 0) || (uVar3 == 10)) goto LAB_2c5f313a;
        goto LAB_2c5f30a0;
      }
      if (uVar3 != 0x3e) goto LAB_2c5f3258;
      uVar3 = (uint)pbVar1[2];
      pbVar5 = pbVar1 + 2;
      bVar2 = 1;
      pbVar7 = pbVar5;
      if ((*(byte *)(_LAB_2c5f3250 + uVar3) & 0x40) != 0) goto LAB_2c5f30a0;
      if (uVar3 < 0xed) {
        if (uVar3 < 0xc2) {
          if (0x31 < uVar3 - 0xb) goto LAB_2c5f3140;
          goto LAB_2c5f3180;
        }
        if (uVar3 < 0xe0) {
          if (0x3f < (pbVar1[3] ^ 0x80)) goto LAB_2c5f3140;
          pbVar7 = pbVar1 + 3;
          goto LAB_2c5f30a0;
        }
        if (uVar3 == 0xe0) {
          bVar2 = pbVar1[3] + 0x60;
joined_r0x2c5f3684:
          if (0x1f < bVar2) goto LAB_2c5f3140;
          goto LAB_2c5f3572;
        }
      }
      else {
        if (0xf0 < uVar3) {
          if (uVar3 < 0xf4) {
            if (0x3f < (pbVar1[3] ^ 0x80)) goto LAB_2c5f3140;
          }
          else if ((uVar3 != 0xf4) || (0xf < (pbVar1[3] ^ 0x80))) goto LAB_2c5f3140;
LAB_2c5f365c:
          pbVar7 = pbVar1 + 3;
          if (0x3f < (pbVar1[4] ^ 0x80)) goto LAB_2c5f3140;
          bVar2 = 1;
          goto LAB_2c5f312c;
        }
        if (uVar3 == 0xed) {
          bVar2 = pbVar1[3] ^ 0x80;
          goto joined_r0x2c5f3684;
        }
        if (uVar3 == 0xf0) {
          if (0x2f < (byte)(pbVar1[3] + 0x70)) goto LAB_2c5f3140;
          goto LAB_2c5f365c;
        }
      }
      if (0x3f < (pbVar1[3] ^ 0x80)) goto LAB_2c5f3140;
LAB_2c5f3572:
      pbVar7 = pbVar1 + 3;
      if (0x3f < (pbVar1[4] ^ 0x80)) goto LAB_2c5f3140;
      bVar2 = 1;
      goto LAB_2c5f3036;
    }
    if (uVar3 < 0x70) {
      if (uVar3 != 0x53) {
        if (uVar3 != 0x54) goto LAB_2c5f30a0;
        goto LAB_2c5f3278;
      }
    }
    else {
      if (uVar3 == 0x70) goto LAB_2c5f31d4;
      if (uVar3 != 0x73) goto LAB_2c5f30a0;
    }
    uVar3 = (uint)pbVar6[2];
    pbVar1 = pbVar6 + 2;
    pbVar7 = pbVar1;
    if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
    if (0x74 < uVar3) {
      if (0xec < uVar3) goto LAB_2c5f30da;
      if (0xc1 < uVar3) goto LAB_2c5f311a;
      goto LAB_2c5f3246;
    }
    if (uVar3 < 0x44) {
      if (uVar3 < 10) goto LAB_2c5f31f6;
      if (uVar3 == 10) goto LAB_2c5f313a;
      if (uVar3 != 0x43) goto LAB_2c5f30a0;
LAB_2c5f344c:
      uVar3 = (uint)pbVar6[3];
      pbVar1 = pbVar6 + 3;
      pbVar7 = pbVar1;
      if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
      if (uVar3 < 0xc2) {
        if (uVar3 < 0x52) goto joined_r0x2c5f366e;
        if (uVar3 < 0x72) {
          if (uVar3 != 0x52) goto LAB_2c5f30a0;
        }
        else if (uVar3 != 0x72) goto LAB_2c5f3246;
        uVar3 = (uint)pbVar6[4];
        pbVar1 = pbVar6 + 4;
        pbVar7 = pbVar1;
        if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
        if (uVar3 < 0xc2) {
          if (uVar3 < 0x49) goto joined_r0x2c5f366e;
          if (uVar3 < 0x69) {
            if (uVar3 != 0x49) goto LAB_2c5f30a0;
          }
          else if (uVar3 != 0x69) goto LAB_2c5f3246;
          uVar3 = (uint)pbVar6[5];
          pbVar1 = pbVar6 + 5;
          pbVar7 = pbVar1;
          if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
          if (uVar3 < 0xc2) {
            if (uVar3 < 0x50) goto joined_r0x2c5f366e;
            if (uVar3 < 0x70) {
              if (uVar3 != 0x50) goto LAB_2c5f30a0;
            }
            else if (uVar3 != 0x70) goto LAB_2c5f3246;
            uVar3 = (uint)pbVar6[6];
            pbVar1 = pbVar6 + 6;
            pbVar7 = pbVar1;
            if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
            if (uVar3 < 0xc2) {
              if (uVar3 < 0x54) goto joined_r0x2c5f366e;
              if (uVar3 < 0x74) {
                if (uVar3 != 0x54) goto LAB_2c5f30a0;
              }
              else if (uVar3 != 0x74) goto LAB_2c5f3246;
              goto LAB_2c5f3396;
            }
          }
        }
      }
    }
    else {
      if (uVar3 < 99) {
        if (uVar3 != 0x54) goto LAB_2c5f30a0;
      }
      else {
        if (uVar3 == 99) goto LAB_2c5f344c;
        if (uVar3 != 0x74) goto LAB_2c5f30a0;
      }
      uVar3 = (uint)pbVar6[3];
      pbVar1 = pbVar6 + 3;
      pbVar7 = pbVar1;
      if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
      if (uVar3 < 0xc2) {
        if (uVar3 < 0x59) goto joined_r0x2c5f366e;
        if (uVar3 < 0x79) {
          if (uVar3 != 0x59) goto LAB_2c5f30a0;
        }
        else if (uVar3 != 0x79) goto LAB_2c5f3246;
        uVar3 = (uint)pbVar6[4];
        pbVar1 = pbVar6 + 4;
        pbVar7 = pbVar1;
        if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
        if (uVar3 < 0xc2) {
          if (uVar3 < 0x4c) goto joined_r0x2c5f366e;
          if (uVar3 < 0x6c) {
            if (uVar3 != 0x4c) goto LAB_2c5f30a0;
          }
          else if (uVar3 != 0x6c) {
LAB_2c5f3246:
            pbVar7 = pbVar1;
            if ((int)(uVar3 << 0x18) < 0) goto LAB_2c5f313a;
            goto LAB_2c5f30a0;
          }
          goto LAB_2c5f3524;
        }
      }
    }
  }
  else {
    if (0xec < uVar3) goto LAB_2c5f30da;
    if (0xc1 < uVar3) goto LAB_2c5f311a;
    if (uVar3 != 0x74) goto LAB_2c5f3246;
LAB_2c5f3278:
    uVar3 = (uint)pbVar6[2];
    pbVar1 = pbVar6 + 2;
    pbVar7 = pbVar1;
    if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
    if (uVar3 < 0xc2) {
      if (uVar3 < 0x45) goto joined_r0x2c5f366e;
      if (uVar3 < 0x65) {
        if (uVar3 != 0x45) goto LAB_2c5f30a0;
      }
      else if (uVar3 != 0x65) goto LAB_2c5f3246;
      uVar3 = (uint)pbVar6[3];
      pbVar1 = pbVar6 + 3;
      pbVar7 = pbVar1;
      if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
      if (uVar3 < 0xc2) {
        if (uVar3 < 0x58) goto joined_r0x2c5f366e;
        if (uVar3 < 0x78) {
          if (uVar3 != 0x58) goto LAB_2c5f30a0;
        }
        else if (uVar3 != 0x78) goto LAB_2c5f3246;
        uVar3 = (uint)pbVar6[4];
        pbVar1 = pbVar6 + 4;
        pbVar7 = pbVar1;
        if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
        if (uVar3 < 0xc2) {
          if (uVar3 < 0x54) goto joined_r0x2c5f366e;
          if (uVar3 < 0x74) {
            if (uVar3 != 0x54) goto LAB_2c5f30a0;
          }
          else if (uVar3 != 0x74) goto LAB_2c5f3246;
          uVar3 = (uint)pbVar6[5];
          pbVar1 = pbVar6 + 5;
          pbVar7 = pbVar1;
          if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
          if (uVar3 < 0xc2) {
            if (uVar3 < 0x41) goto joined_r0x2c5f366e;
            if (uVar3 < 0x61) {
              if (uVar3 != 0x41) goto LAB_2c5f30a0;
            }
            else if (uVar3 != 0x61) goto LAB_2c5f3246;
            uVar3 = (uint)pbVar6[6];
            pbVar1 = pbVar6 + 6;
            pbVar7 = pbVar1;
            if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
            if (uVar3 < 0xc2) {
              if (uVar3 < 0x52) goto joined_r0x2c5f366e;
              if (uVar3 < 0x72) {
                if (uVar3 != 0x52) goto LAB_2c5f30a0;
              }
              else if (uVar3 != 0x72) goto LAB_2c5f3246;
              uVar3 = (uint)pbVar6[7];
              pbVar1 = pbVar6 + 7;
              pbVar7 = pbVar1;
              if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
              if (uVar3 < 0xc2) {
                if (uVar3 < 0x45) goto joined_r0x2c5f366e;
                if (uVar3 < 0x65) {
                  if (uVar3 != 0x45) goto LAB_2c5f30a0;
                }
                else if (uVar3 != 0x65) goto LAB_2c5f3246;
                uVar3 = (uint)pbVar6[8];
                pbVar1 = pbVar6 + 8;
                pbVar7 = pbVar1;
                if (*(char *)(_LAB_2c5f3250 + uVar3) < '\0') goto LAB_2c5f3180;
                if (uVar3 < 0xc2) {
                  if (uVar3 < 0x41) goto joined_r0x2c5f366e;
                  if (uVar3 < 0x61) {
                    if (uVar3 != 0x41) goto LAB_2c5f30a0;
                  }
                  else if (uVar3 != 0x61) goto LAB_2c5f3246;
                  goto LAB_2c5f3396;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_2c5f34fe:
  pbVar7 = pbVar1;
  if (uVar3 < 0xee) {
    if (uVar3 < 0xe0) goto LAB_2c5f312e;
    if (uVar3 == 0xe0) goto LAB_2c5f320a;
joined_r0x2c5f3224:
    if (uVar3 != 0xed) goto LAB_2c5f3122;
    goto LAB_2c5f3228;
  }
joined_r0x2c5f34f2:
  if (uVar3 < 0xf1) goto joined_r0x2c5f34f6;
  goto joined_r0x2c5f33f0;
LAB_2c5f3258:
  if (-1 < (int)(uVar3 << 0x18)) goto LAB_2c5f30a0;
  if (uVar3 < 0xc2) goto LAB_2c5f313a;
  goto LAB_2c5f312e;
}

