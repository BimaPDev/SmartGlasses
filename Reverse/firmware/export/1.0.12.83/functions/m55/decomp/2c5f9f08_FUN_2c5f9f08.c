/* FUN_2c5f9f08 @ 0x2c5f9f08 */

void FUN_2c5f9f08(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = DAT_2c5fa030;
  if (0 < param_3) {
    iVar3 = 0;
    do {
      iVar7 = 0;
      iVar6 = iVar3;
LAB_2c5f9f26:
      do {
        iVar4 = param_2 + iVar6;
        uVar8 = (uint)*(byte *)(param_2 + iVar6);
        if (*(char *)(param_2 + iVar6) < '\x01') {
          if (*(char *)(param_2 + iVar6) == '\0') {
            iVar5 = 1;
          }
          else {
            iVar7 = (int)*(char *)(iVar2 + uVar8);
            iVar5 = param_3 - iVar6;
            if (iVar7 == 0) {
LAB_2c5fa020:
              iVar5 = 1;
            }
            else if (iVar7 <= iVar5) {
              if (iVar7 == 3) {
                bVar1 = *(byte *)(iVar4 + 1);
                if ((bVar1 & 0xc0) != 0x80) goto LAB_2c5fa020;
                if ((*(byte *)(iVar4 + 2) & 0xc0) == 0x80) {
                  if (uVar8 == 0xe0) {
                    if (0x9f < bVar1) goto LAB_2c5f9f52;
                  }
                  else if ((bVar1 < 0xa0) || (uVar8 != 0xed)) {
                    iVar7 = 3;
                    iVar6 = iVar6 + 3;
                    goto LAB_2c5f9f54;
                  }
LAB_2c5fa01a:
                  iVar5 = 3;
                }
                else {
LAB_2c5f9fa2:
                  iVar5 = 2;
                }
              }
              else {
                if (iVar7 != 4) {
                  if (iVar7 == 2) {
                    if ((*(byte *)(iVar4 + 1) & 0xc0) != 0x80) goto LAB_2c5fa020;
                    if (uVar8 < 0xc2) goto LAB_2c5f9fa2;
                  }
                  else if (iVar7 < 0) {
                    iVar5 = -iVar7;
                    goto LAB_2c5f9f6c;
                  }
LAB_2c5f9f52:
                  iVar6 = iVar6 + iVar7;
LAB_2c5f9f54:
                  if (param_3 <= iVar6) break;
                  goto LAB_2c5f9f26;
                }
                bVar1 = *(byte *)(iVar4 + 1);
                if ((bVar1 & 0xc0) != 0x80) goto LAB_2c5fa020;
                if ((*(byte *)(iVar4 + 2) & 0xc0) != 0x80) goto LAB_2c5f9fa2;
                if ((*(byte *)(iVar4 + 3) & 0xc0) != 0x80) goto LAB_2c5fa01a;
                if (uVar8 == 0xf0) {
                  if (0x8f < bVar1) goto LAB_2c5fa010;
                }
                else if ((uVar8 < 0xf4) || ((uVar8 == 0xf4 && (bVar1 < 0x90)))) {
LAB_2c5fa010:
                  iVar7 = 4;
                  iVar6 = iVar6 + 4;
                  goto LAB_2c5f9f54;
                }
                iVar5 = 4;
              }
            }
          }
LAB_2c5f9f6c:
          if ((iVar3 < iVar6) &&
             (FUN_2c5f6b40(param_1,iVar3 + param_2,iVar6 - iVar3), param_3 <= iVar6)) {
            return;
          }
          goto LAB_2c5f9f7e;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_3);
      iVar5 = iVar7;
      if (iVar3 < iVar6) {
        FUN_2c5f6b40(param_1,iVar3 + param_2,iVar6 - iVar3,param_4);
        return;
      }
LAB_2c5f9f7e:
      FUN_2c5f6b40(param_1,DAT_2c5fa02c,3);
      iVar3 = iVar5 + iVar6;
    } while (iVar3 < param_3);
  }
  return;
}

