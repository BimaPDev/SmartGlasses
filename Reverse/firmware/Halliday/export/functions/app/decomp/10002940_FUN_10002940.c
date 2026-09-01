/* FUN_10002940 @ 0x10002940 */

uint FUN_10002940(int param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined2 local_50;
  ushort local_4e;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  uint uStack_3c;
  uint local_38;
  ushort local_34;
  uint local_2c;
  
  iVar9 = *(int *)(param_1 + 0x10);
  FUN_10003208(auStack_5c,0,0x18);
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar1 = *(ushort *)(param_3 + 0x10);
  local_50 = (undefined2)uVar8;
  local_58 = param_4;
  local_4e = uVar1;
  if (*(char *)(iVar9 + 10) == '\0') {
    if (*(int *)(param_3 + 4) == 0x20) {
      if ((uVar8 < 2) || (uVar6 = *(uint *)(param_3 + 8), (int)(uVar6 << 0x1f) < 0)) {
        return 0xffffffea;
      }
      if (uVar6 == 0) {
        uVar6 = uVar8 << 1;
      }
      uVar7 = uVar6 & 0xffff;
      uVar5 = *(uint *)(param_3 + 0x18);
      if ((((uVar6 & 3) == 0) && ((uVar5 & 3) == 0 && (uVar8 & 1) == 0)) && (3 < uVar8)) {
        FUN_10003208(auStack_44,0,0x18);
        local_38 = uVar8 >> 1;
        local_40 = 8;
        uVar2 = (ushort)DAT_10002ab4 & (ushort)(((param_4 & 0xffffff) >> 0x10) << 8) |
                (ushort)(((param_4 & 0xffff) >> 8) << 3) & 0x7e0 | (ushort)((param_4 & 0xff) >> 3);
        local_50 = (undefined2)local_38;
        local_58 = CONCAT22(uVar2,uVar2);
        param_3 = auStack_44;
        uStack_3c = uVar7;
        local_34 = uVar1;
        local_2c = uVar5;
      }
      else if ((0x2fffffff < uVar5) || (uVar7 * (uVar1 - 1) + uVar5 + uVar8 * 2 < 0x30000001)) {
        iVar3 = FUN_10001956(param_2);
        if (iVar3 != 0) {
          *(uint *)(iVar3 + 8) =
               *(uint *)(param_3 + 0xc) & 0x1ff | (uint)*(ushort *)(param_3 + 0x10) << 0x10;
          uVar4 = FUN_10003178(*(undefined4 *)(param_3 + 0x18));
          *(undefined1 *)(iVar3 + 4) = 0x10;
          *(undefined1 *)(iVar3 + 5) = 0;
          *(undefined1 *)(iVar3 + 6) = 3;
          *(undefined1 *)(iVar3 + 7) = 0x80;
          *(undefined4 *)(iVar3 + 0x14) = uVar4;
          *(undefined1 *)(iVar3 + 1) = 7;
          *(uint *)(iVar3 + 0x18) = uVar7;
          *(uint *)(iVar3 + 0x3c) =
               ((param_4 & 0xffff) >> 10) << 5 | ((param_4 & 0xffffff) >> 0x13) << 0xb |
               (param_4 & 0xff) >> 3;
          uVar4 = FUN_100031a8(param_2,1);
          FUN_1000257c(iVar9,iVar3,uVar4);
          return (uint)*(ushort *)(iVar3 + 2);
        }
        goto LAB_10002984;
      }
    }
    uVar8 = FUN_10002640(param_1,param_2,param_3,auStack_5c,1,2);
  }
  else {
    FUN_10003108(DAT_10002ab0);
LAB_10002984:
    uVar8 = 0xfffffff0;
  }
  return uVar8;
}

