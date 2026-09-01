/* FUN_10093628 @ 0x10093628 */

uint FUN_10093628(undefined4 param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r2;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_2c;
  uint uStack_28;
  
  puVar2 = DAT_10093720;
  iVar5 = DAT_1009371c;
  bVar7 = 0;
  uVar6 = (uint)param_5;
  do {
    uVar9 = (uint)bVar7;
    uVar4 = (uint)*(byte *)(DAT_10093710 + uVar9);
    if (uVar4 == 0) {
      if (*DAT_10093714 == 0) {
        return 0x20;
      }
      iVar5 = *DAT_10093714 - 1;
      if (*(byte *)(DAT_1009371c + *(int *)(DAT_10093718 + iVar5 * 8)) != param_4) {
        return 0x20;
      }
      bVar7 = *(byte *)(DAT_10093718 + iVar5 * 8 + 4);
      *DAT_10093714 = (byte)iVar5;
      return (uint)bVar7;
    }
    bVar7 = bVar7 + 1;
  } while (uVar4 != param_4);
  uVar8 = 0x20;
  uVar10 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  while ((local_2c < param_3 &&
         (uVar4 = (*(code *)*puVar2)(param_1,&local_2c,uVar4,(code *)*puVar2,uVar10),
         *(byte *)(iVar5 + uVar9) != uVar4))) {
    uVar3 = FUN_100935d0();
    uVar4 = extraout_r2;
    if (uVar3 == uVar6) {
      uVar8 = uVar6;
    }
  }
  puVar2 = DAT_10093724;
  if (local_2c <= param_3) {
    uVar4 = uVar8;
    if ((uVar8 - 0x20 & 0xff) < 2) {
      if (param_2 == 0) {
LAB_100936bc:
        if (uVar8 == 0x20) {
          uVar4 = uVar6;
          if (uVar6 == 0x20) {
            return 0x20;
          }
        }
        else {
          uVar4 = 0x21;
        }
      }
      else {
        local_2c = param_2;
        (*(code *)*DAT_10093724)(param_1,&local_2c);
        do {
          if (local_2c == 0) goto LAB_100936bc;
          (*(code *)*puVar2)(param_1,&local_2c);
          uVar4 = FUN_100935d0();
        } while (1 < uVar4);
      }
    }
    iVar5 = DAT_10093718;
    pbVar1 = DAT_10093714;
    bVar7 = *DAT_10093714;
    uVar6 = (uint)bVar7;
    if (uVar6 != 4) {
      *(uint *)(DAT_10093718 + uVar6 * 8) = uVar9;
      *(char *)(iVar5 + uVar6 * 8 + 4) = (char)uVar4;
      *pbVar1 = bVar7 + 1;
      return uVar4;
    }
  }
  return 0x20;
}

