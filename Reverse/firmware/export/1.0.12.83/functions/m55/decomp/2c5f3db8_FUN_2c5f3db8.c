/* FUN_2c5f3db8 @ 0x2c5f3db8 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5f3db8(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  uVar4 = (uint)*param_1;
  bVar3 = *(byte *)(_LAB_2c5f405c + uVar4) & 0x40;
  pbVar6 = param_1;
  if ((*(byte *)(_LAB_2c5f405c + uVar4) & 0x40) != 0) goto LAB_2c5f3e0e;
  if (uVar4 < 0xe1) {
    if (uVar4 < 0xb) {
      if (uVar4 == 0) {
        return 0;
      }
      if (uVar4 == 10) {
        return 0;
      }
    }
    else if ((int)(uVar4 << 0x18) < 0) {
      if (uVar4 < 0xc2) {
        return 0;
      }
      if (uVar4 != 0xe0) {
        if (0x3f < (param_1[1] ^ 0x80)) {
          return 0;
        }
        pbVar5 = param_1 + 1;
        pbVar6 = pbVar5;
        goto LAB_2c5f3e74;
      }
      bVar3 = param_1[1] + 0x60;
      goto joined_r0x2c5f3f42;
    }
    uVar4 = (uint)param_1[1];
    pbVar5 = param_1 + 1;
    pbVar6 = pbVar5;
    if (uVar4 < 0xb) {
      if (((uVar4 != 10) && (uVar4 != 0)) && (*(char *)(_LAB_2c5f405c + uVar4) < '\0')) {
        bVar3 = 0;
        goto LAB_2c5f3e74;
      }
    }
    else if ((-1 < (int)(uVar4 << 0x18)) || ((uVar4 + 0x3e & 0xff) < 0x33)) {
      bVar3 = 0;
      goto LAB_2c5f3e7c;
    }
  }
  else {
    if (0xef < uVar4) {
      if (uVar4 == 0xf0) {
        if (0x2f < (byte)(param_1[1] + 0x70)) {
          return 0;
        }
      }
      else if (uVar4 < 0xf4) {
        if (0x3f < (param_1[1] ^ 0x80)) {
          return 0;
        }
      }
      else {
        if (uVar4 != 0xf4) {
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
      pbVar6 = param_1 + 2;
      if (0x3f < (param_1[3] ^ 0x80)) {
        return 0;
      }
      bVar3 = 0;
      goto LAB_2c5f3f24;
    }
    bVar3 = param_1[1] ^ 0x80;
    if (uVar4 == 0xed) {
joined_r0x2c5f3f42:
      if (0x1f < bVar3) {
        return 0;
      }
    }
    else if (0x3f < bVar3) {
      return 0;
    }
    pbVar5 = param_1 + 1;
    if ((param_1[2] ^ 0x80) < 0x40) {
      pbVar6 = param_1 + 2;
      bVar3 = 0;
LAB_2c5f3e74:
      do {
        do {
          uVar4 = (uint)pbVar6[1];
          pbVar6 = pbVar6 + 1;
LAB_2c5f3e7c:
        } while (*(char *)(_LAB_2c5f405c + uVar4) < '\0');
        if (0xec < uVar4) {
          if (uVar4 < 0xf1) {
            if (uVar4 == 0xed) {
              bVar2 = pbVar6[1] ^ 0x80;
joined_r0x2c5f4098:
              if (0x1f < bVar2) goto joined_r0x2c5f4056;
              pbVar6 = pbVar6 + 1;
              goto LAB_2c5f3eec;
            }
            if (uVar4 != 0xf0) goto LAB_2c5f3e9e;
            if (0x2f < (byte)(pbVar6[1] + 0x70)) goto joined_r0x2c5f4056;
          }
          else if (uVar4 < 0xf4) {
            if (0x3f < (pbVar6[1] ^ 0x80)) goto joined_r0x2c5f4056;
          }
          else if ((uVar4 != 0xf4) || (0xf < (pbVar6[1] ^ 0x80))) goto joined_r0x2c5f4056;
          pbVar6 = pbVar6 + 1;
LAB_2c5f3e9e:
          pbVar1 = pbVar6 + 1;
          if ((-1 < (char)pbVar6[1]) || (pbVar6 = pbVar6 + 1, 0xbf < *pbVar1))
          goto joined_r0x2c5f4056;
LAB_2c5f3eec:
          if (0x3f < (pbVar6[1] ^ 0x80)) {
joined_r0x2c5f4056:
            if (bVar3 == 0) {
              return 0;
            }
LAB_2c5f3e28:
            return (int)pbVar5 - (int)param_1;
          }
LAB_2c5f3f24:
          pbVar6 = pbVar6 + 1;
          goto LAB_2c5f3e74;
        }
        if (0xc1 < uVar4) {
          if (0xdf < uVar4) {
            if (uVar4 == 0xe0) {
              bVar2 = pbVar6[1] + 0x60;
              goto joined_r0x2c5f4098;
            }
            goto LAB_2c5f3e9e;
          }
          goto LAB_2c5f3eec;
        }
        if (0x33 < uVar4 - 0xb) goto joined_r0x2c5f4056;
LAB_2c5f3e0e:
        while( true ) {
          pbVar5 = pbVar6 + 1;
          uVar4 = (uint)*pbVar5;
          if (*(char *)(_LAB_2c5f405c + uVar4) < '\0') break;
          if (0xec < uVar4) {
            if (uVar4 < 0xf1) {
              if (uVar4 == 0xed) {
                if ((pbVar6[2] ^ 0x80) < 0x20) goto LAB_2c5f3f12;
                goto LAB_2c5f3e28;
              }
              if (uVar4 != 0xf0) goto LAB_2c5f3f08;
              if (0x2f < (byte)(pbVar6[2] + 0x70)) goto LAB_2c5f3e28;
            }
            else {
              if (0xf3 < uVar4) {
                if ((((uVar4 == 0xf4) && ((pbVar6[2] ^ 0x80) < 0x10)) && ((char)pbVar6[3] < '\0'))
                   && ((pbVar6[3] < 0xc0 && (pbVar1 = pbVar5, (pbVar6[4] ^ 0x80) < 0x40))))
                goto LAB_2c5f3f22;
                goto LAB_2c5f3e28;
              }
              if (0x3f < (pbVar6[2] ^ 0x80)) goto LAB_2c5f3e28;
            }
            pbVar1 = pbVar6 + 3;
            if ((-1 < (char)pbVar6[3]) || (pbVar6 = pbVar6 + 3, 0xbf < *pbVar1)) goto LAB_2c5f3e28;
            bVar3 = 1;
            goto LAB_2c5f3eec;
          }
          if (0xc1 < uVar4) {
            if (uVar4 < 0xe0) {
              if (0x3f < (pbVar6[2] ^ 0x80)) goto LAB_2c5f3e28;
              bVar3 = 1;
              pbVar6 = pbVar6 + 2;
              goto LAB_2c5f3e74;
            }
            if (uVar4 == 0xe0) {
              if (0x1f < (byte)(pbVar6[2] + 0x60)) goto LAB_2c5f3e28;
            }
            else {
LAB_2c5f3f08:
              if (0x3f < (pbVar6[2] ^ 0x80)) goto LAB_2c5f3e28;
            }
LAB_2c5f3f12:
            pbVar1 = pbVar6;
            if (0x3f < (pbVar6[3] ^ 0x80)) goto LAB_2c5f3e28;
LAB_2c5f3f22:
            pbVar6 = pbVar1 + 2;
            bVar3 = 1;
            goto LAB_2c5f3f24;
          }
          pbVar6 = pbVar5;
          if (0x33 < uVar4 - 0xb) goto LAB_2c5f3e28;
        }
        bVar3 = 1;
        pbVar6 = pbVar5;
      } while( true );
    }
  }
  return 0;
}

