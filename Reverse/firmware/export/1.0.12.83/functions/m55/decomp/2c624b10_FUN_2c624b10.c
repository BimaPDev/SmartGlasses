/* FUN_2c624b10 @ 0x2c624b10 */

int FUN_2c624b10(uint *param_1,uint *param_2,int param_3,char *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_5 != 0) && (param_4 != (char *)0x0)) {
    if (0x20 < param_5) {
      FUN_2c624038();
      FUN_2c623fdc(param_3 + 0x98);
      if (((((*param_4 == -0x77) && (param_4[1] == 'P')) && (param_4[2] == 'N')) &&
          ((param_4[3] == 'G' && (param_4[4] == '\r')))) &&
         ((param_4[5] == '\n' && ((param_4[6] == '\x1a' && (param_4[7] == '\n')))))) {
        if (*(int *)(param_4 + 8) == 0xd000000) {
          iVar6 = FUN_2c623e84(param_4 + 8,DAT_2c624c6c);
          if (iVar6 == 0) {
            iVar6 = 0x1d;
            *(undefined4 *)(param_3 + 0x17c) = 0x1d;
          }
          else {
            uVar5 = *(uint *)(param_4 + 0x10);
            uVar4 = *(uint *)(param_4 + 0x14);
            uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                    uVar5 >> 0x18;
            uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                    uVar4 >> 0x18;
            if (param_1 != (uint *)0x0) {
              *param_1 = uVar5;
            }
            if (param_2 != (uint *)0x0) {
              *param_2 = uVar4;
            }
            *(uint *)(param_3 + 0xa8) = (uint)(byte)param_4[0x18];
            *(char *)(param_3 + 0xa4) = param_4[0x19];
            bVar2 = param_4[0x1a];
            *(uint *)(param_3 + 0x98) = (uint)bVar2;
            bVar1 = param_4[0x1b];
            *(uint *)(param_3 + 0x9c) = (uint)bVar1;
            bVar3 = param_4[0x1c];
            *(uint *)(param_3 + 0xa0) = (uint)bVar3;
            if ((uVar5 == 0) || (uVar4 == 0)) {
              iVar6 = 0x5d;
              *(undefined4 *)(param_3 + 0x17c) = 0x5d;
            }
            else {
              iVar6 = FUN_2c621464();
              *(int *)(param_3 + 0x17c) = iVar6;
              if (iVar6 == 0) {
                if (bVar2 == 0) {
                  if (bVar1 == 0) {
                    if (bVar3 < 2) {
                      if (*(int *)(param_3 + 0x18) == 0) {
                        uVar5 = *(uint *)(param_4 + 0x1d);
                        uVar4 = FUN_2c623e50(param_4 + 0xc,0x11);
                        iVar6 = 0;
                        if (uVar4 != (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18)) {
                          iVar6 = 0x39;
                          *(undefined4 *)(param_3 + 0x17c) = 0x39;
                        }
                      }
                      else {
                        iVar6 = 0;
                      }
                    }
                    else {
                      iVar6 = 0x22;
                      *(undefined4 *)(param_3 + 0x17c) = 0x22;
                    }
                  }
                  else {
                    iVar6 = 0x21;
                    *(undefined4 *)(param_3 + 0x17c) = 0x21;
                  }
                }
                else {
                  iVar6 = 0x20;
                  *(undefined4 *)(param_3 + 0x17c) = 0x20;
                }
              }
            }
          }
        }
        else {
          iVar6 = 0x5e;
          *(undefined4 *)(param_3 + 0x17c) = 0x5e;
        }
      }
      else {
        iVar6 = 0x1c;
        *(undefined4 *)(param_3 + 0x17c) = 0x1c;
      }
      return iVar6;
    }
    *(undefined4 *)(param_3 + 0x17c) = 0x1b;
    return 0x1b;
  }
  *(undefined4 *)(param_3 + 0x17c) = 0x30;
  return 0x30;
}

