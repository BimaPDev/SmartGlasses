/* FUN_140bd860 @ 0x140bd860 */

void FUN_140bd860(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_30;
  int local_2c [2];
  
  local_2c[0] = *DAT_140bd96c;
  uVar9 = param_3 * 4;
  FUN_140e5278(param_2,param_1,uVar9);
  iVar2 = DAT_140bd974;
  if ((int)(uVar9 & 0xff) < (param_4 + 1) * 0x10) {
    uVar8 = uVar9 & 0xff;
    do {
      uVar1 = uVar9 * (uVar8 / uVar9);
      uVar5 = *(uint *)(param_2 + uVar8 + -4);
      local_30 = uVar5;
      if (uVar8 == uVar1) {
        local_30._3_1_ = (undefined1)uVar5;
        local_30 = CONCAT31(CONCAT12(local_30._3_1_,(short)(uVar5 >> 0x10)),
                            *(undefined1 *)(iVar2 + ((uVar5 & 0xffff) >> 8)));
        for (pbVar7 = (byte *)((int)&local_30 + 1); (byte *)local_2c != pbVar7; pbVar7 = pbVar7 + 1)
        {
          *pbVar7 = *(byte *)(iVar2 + (uint)*pbVar7);
        }
        pbVar7 = (byte *)&local_30;
        pbVar4 = (byte *)(uVar8 / param_3 + DAT_140bd970);
        do {
          pbVar3 = pbVar7 + 1;
          *pbVar7 = *pbVar7 ^ *pbVar4;
          pbVar7 = pbVar3;
          pbVar4 = pbVar4 + 1;
        } while ((byte *)local_2c != pbVar3);
      }
      else if ((6 < param_3) && (pbVar7 = (byte *)&local_30, uVar8 - uVar1 == 0x10)) {
        do {
          pbVar4 = pbVar7 + 1;
          *pbVar7 = *(byte *)(iVar2 + (uint)*pbVar7);
          pbVar7 = pbVar4;
        } while ((byte *)local_2c != pbVar4);
      }
      iVar10 = uVar8 + param_3 * -4;
      pbVar7 = (byte *)(uVar8 + param_2);
      pbVar4 = (byte *)(param_2 + iVar10);
      pbVar3 = (byte *)&local_30;
      do {
        pbVar6 = pbVar4 + 1;
        *pbVar7 = *pbVar4 ^ *pbVar3;
        pbVar7 = pbVar7 + 1;
        pbVar4 = pbVar6;
        pbVar3 = pbVar3 + 1;
      } while ((byte *)(iVar10 + param_2 + 4) != pbVar6);
      uVar8 = uVar8 + 4 & 0xff;
    } while ((int)uVar8 < (param_4 + 1) * 0x10);
  }
  if (*DAT_140bd96c == local_2c[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

