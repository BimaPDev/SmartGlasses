/* FUN_10023584 @ 0x10023584 */

uint FUN_10023584(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_r1;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  iVar6 = *DAT_10023708;
  if (param_2 != 0) goto LAB_100235aa;
  do {
    uVar8 = 0;
    while( true ) {
      if (*DAT_10023708 == iVar6) {
        return uVar8;
      }
      FUN_1013cdc0();
      param_2 = extraout_r1;
LAB_100235aa:
      iVar4 = FUN_100259e8();
      if (iVar4 == 0) break;
      uVar9 = *DAT_1002370c;
      iVar4 = FUN_10025948(uVar9,param_2,0xfd);
      uVar10 = (DAT_10023710 - DAT_10023714) * 0x20 & 0xff00;
      if (iVar4 == 0) {
        iVar4 = FUN_10025948(uVar9,param_2,param_1);
        if (iVar4 != 0) {
          uVar5 = (**(code **)(DAT_10023720 + 0x14))();
          uVar9 = DAT_10023724;
          bVar1 = *(byte *)(iVar4 + 0x41);
          *(byte *)(iVar4 + 0x41) = bVar1 & 0xfe | (byte)uVar5 & 1;
          FUN_100a5b78(DAT_10023728 | uVar10,DAT_1002371c,uVar9,param_1,iVar4,0,uVar5,
                       (*(byte *)(iVar4 + 0x41) & 3) >> 1,(*(byte *)(iVar4 + 0x41) & 7) >> 2,
                       (bVar1 & 0xe) >> 3);
          bVar1 = *(byte *)(iVar4 + 0x41);
          uVar7 = (uint)bVar1;
          uVar8 = uVar7 & 2;
          if ((bVar1 & 1) == 0) {
            if ((bVar1 & 2) == 0) {
              if ((bVar1 & 8) == 0) {
                uVar8 = 2;
              }
              else {
                uVar8 = 3;
              }
            }
            else {
              uVar8 = 1;
            }
          }
          else if ((int)(uVar7 << 0x1d) < 0) {
            if ((bVar1 & 2) == 0) {
              uVar8 = 2;
            }
            else {
              uVar8 = 0;
            }
          }
          else if ((bVar1 & 2) != 0) {
            uVar8 = 1;
          }
          bVar1 = *(byte *)(iVar4 + 0x41);
          bVar2 = *(byte *)(iVar4 + 0x41);
          bVar3 = *(byte *)(iVar4 + 0x41);
          uVar10 = DAT_1002372c | uVar10;
          uVar9 = DAT_10023724;
          goto LAB_1002361c;
        }
        iVar4 = (**(code **)(DAT_10023720 + 0x14))(param_1);
        if (iVar4 == 0) {
          uVar8 = 2;
        }
        else {
          uVar8 = 0;
        }
        FUN_100a5b78(DAT_10023730 | uVar10,DAT_1002371c,DAT_10023734,param_1,uVar8,iVar4);
      }
      else {
        uVar7 = (uint)*(byte *)(iVar4 + 0x41);
        if ((int)(uVar7 << 0x1e) < 0) {
          uVar8 = 1;
        }
        else {
          uVar8 = uVar7 & 4;
          if ((*(byte *)(iVar4 + 0x41) & 4) != 0) {
            uVar8 = 2;
          }
        }
        bVar1 = *(byte *)(iVar4 + 0x41);
        bVar2 = *(byte *)(iVar4 + 0x41);
        bVar3 = *(byte *)(iVar4 + 0x41);
        uVar10 = uVar10 | 0x4480037;
        uVar9 = DAT_10023718;
LAB_1002361c:
        FUN_100a5b78(uVar10,DAT_1002371c,uVar9,param_1,iVar4,uVar8,bVar3 & 1,(bVar2 & 3) >> 1,
                     (bVar1 & 7) >> 2,(uVar7 & 0xf) >> 3);
      }
    }
  } while( true );
}

