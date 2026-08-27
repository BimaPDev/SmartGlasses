/* FUN_2c5f4b40 @ 0x2c5f4b40 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5f4b40(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (*param_1 == '`') {
    if (param_1[1] != '`') {
      return 0;
    }
    if ((*(byte *)(_LAB_2c5f4d94 + (uint)(byte)param_1[2]) & 0x10) == 0) {
      return 0;
    }
    pbVar4 = (byte *)(param_1 + 2);
    do {
      pbVar4 = pbVar4 + 1;
      uVar3 = (uint)*pbVar4;
    } while ((*(byte *)(_LAB_2c5f4d94 + uVar3) & 0x10) != 0);
    pbVar1 = pbVar4;
    if (0xdf < uVar3) {
      if (0xef < uVar3) {
        if (uVar3 == 0xf0) goto LAB_2c5f4cf4;
        if (uVar3 < 0xf4) goto LAB_2c5f4d44;
        if (uVar3 == 0xf4) goto LAB_2c5f4c84;
        return 0;
      }
      if (uVar3 == 0xe0) goto LAB_2c5f4cd4;
      if (uVar3 == 0xed) goto LAB_2c5f4d20;
      goto LAB_2c5f4c1a;
    }
    if (uVar3 < 0xd) {
      if (uVar3 == 0) {
        return 0;
      }
      if (uVar3 != 10) {
LAB_2c5f4b86:
        do {
          do {
            pbVar1 = pbVar1 + 1;
            uVar3 = (uint)*pbVar1;
          } while ((*(byte *)(_LAB_2c5f4d94 + uVar3) & 0x40) != 0);
          if (uVar3 < 0xed) {
            if (uVar3 < 0xc2) goto joined_r0x2c5f4bac;
            if (0xdf < uVar3) {
              if (uVar3 != 0xe0) goto LAB_2c5f4c1a;
LAB_2c5f4cd4:
              bVar2 = pbVar1[1] + 0x60;
joined_r0x2c5f4d28:
              if (0x1f < bVar2) {
                return 0;
              }
              goto LAB_2c5f4c24;
            }
          }
          else {
            if (uVar3 < 0xf1) {
              if (uVar3 == 0xed) {
LAB_2c5f4d20:
                bVar2 = pbVar1[1] ^ 0x80;
                goto joined_r0x2c5f4d28;
              }
              if (uVar3 != 0xf0) goto LAB_2c5f4c1a;
LAB_2c5f4cf4:
              if (0x2f < (byte)(pbVar1[1] + 0x70)) {
                return 0;
              }
            }
            else if (uVar3 < 0xf4) {
LAB_2c5f4d44:
              if (0x3f < (pbVar1[1] ^ 0x80)) {
                return 0;
              }
            }
            else {
              if (uVar3 != 0xf4) {
                return 0;
              }
LAB_2c5f4c84:
              if (0xf < (pbVar1[1] ^ 0x80)) {
                return 0;
              }
            }
            pbVar1 = pbVar1 + 1;
LAB_2c5f4c1a:
            if (0x3f < (pbVar1[1] ^ 0x80)) {
              return 0;
            }
LAB_2c5f4c24:
            pbVar1 = pbVar1 + 1;
          }
LAB_2c5f4c26:
          if (0x3f < (pbVar1[1] ^ 0x80)) {
            return 0;
          }
          pbVar1 = pbVar1 + 1;
        } while( true );
      }
    }
    else if (uVar3 != 0xd) {
      if ((int)(uVar3 << 0x18) < 0) {
        if (0xc1 < uVar3) goto LAB_2c5f4c26;
        return 0;
      }
      goto LAB_2c5f4b86;
    }
  }
  else {
    if (*param_1 != '~') {
      return 0;
    }
    if (param_1[1] != '~') {
      return 0;
    }
    if ((*(byte *)(_LAB_2c5f4d94 + (uint)(byte)param_1[2]) & 0x20) == 0) {
      return 0;
    }
    pbVar4 = (byte *)(param_1 + 2);
    do {
      pbVar4 = pbVar4 + 1;
      uVar3 = (uint)*pbVar4;
    } while ((*(byte *)(_LAB_2c5f4d94 + uVar3) & 0x20) != 0);
    pbVar1 = pbVar4;
    if (0xdf < uVar3) {
      if (0xef < uVar3) {
        if (uVar3 == 0xf0) goto LAB_2c5f4d12;
        if (uVar3 < 0xf4) goto LAB_2c5f4d70;
        if (uVar3 == 0xf4) goto LAB_2c5f4ca4;
        return 0;
      }
      if (uVar3 == 0xe0) goto LAB_2c5f4d34;
      if (uVar3 == 0xed) goto LAB_2c5f4d52;
      goto LAB_2c5f4c44;
    }
    if (uVar3 < 0xd) {
      if (uVar3 == 0) {
        return 0;
      }
      if (uVar3 != 10) {
LAB_2c5f4be8:
        do {
          do {
            pbVar1 = pbVar1 + 1;
            uVar3 = (uint)*pbVar1;
          } while (*(char *)(_LAB_2c5f4d94 + uVar3) < '\0');
          if (uVar3 < 0xed) {
            if (uVar3 < 0xc2) goto joined_r0x2c5f4bac;
            if (0xdf < uVar3) {
              if (uVar3 == 0xe0) {
LAB_2c5f4d34:
                if (0x1f < (byte)(pbVar1[1] + 0x60)) {
                  return 0;
                }
                goto LAB_2c5f4c50;
              }
              goto LAB_2c5f4c44;
            }
          }
          else {
            if (uVar3 < 0xf1) {
              if (uVar3 != 0xed) {
                if (uVar3 != 0xf0) goto LAB_2c5f4c44;
LAB_2c5f4d12:
                if (0x2f < (byte)(pbVar1[1] + 0x70)) {
                  return 0;
                }
                goto LAB_2c5f4cb0;
              }
LAB_2c5f4d52:
              if (0x1f < (pbVar1[1] ^ 0x80)) {
                return 0;
              }
            }
            else {
              if (uVar3 < 0xf4) {
LAB_2c5f4d70:
                if (0x3f < (pbVar1[1] ^ 0x80)) {
                  return 0;
                }
              }
              else {
                if (uVar3 != 0xf4) {
                  return 0;
                }
LAB_2c5f4ca4:
                if (0xf < (pbVar1[1] ^ 0x80)) {
                  return 0;
                }
              }
LAB_2c5f4cb0:
              pbVar1 = pbVar1 + 1;
LAB_2c5f4c44:
              if (0x3f < (pbVar1[1] ^ 0x80)) {
                return 0;
              }
            }
LAB_2c5f4c50:
            pbVar1 = pbVar1 + 1;
          }
LAB_2c5f4c52:
          if (0x3f < (pbVar1[1] ^ 0x80)) {
            return 0;
          }
          pbVar1 = pbVar1 + 1;
        } while( true );
      }
    }
    else if (uVar3 != 0xd) {
      if ((int)(uVar3 << 0x18) < 0) {
        if (0xc1 < uVar3) goto LAB_2c5f4c52;
        return 0;
      }
      goto LAB_2c5f4be8;
    }
  }
LAB_2c5f4bae:
  return (int)pbVar4 - (int)param_1;
joined_r0x2c5f4bac:
  if (0xc < uVar3 - 1) {
    return 0;
  }
  goto LAB_2c5f4bae;
}

