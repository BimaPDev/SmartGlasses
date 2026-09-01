/* FUN_1006626c @ 0x1006626c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006626c(ushort *param_1,int param_2,uint param_3,int param_4,ushort param_5,ushort param_6
                 ,ushort param_7)

{
  undefined4 uVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  ushort *puVar9;
  
  uVar1 = DAT_1006634c;
  uVar7 = (uint)param_7;
  if (param_3 >> 0x18 == 0xff) {
                    /* WARNING: Could not recover jumptable at 0x100662a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_000070a0)();
    return;
  }
  puVar9 = param_1 + param_6;
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    pbVar8 = (byte *)(param_2 + -1);
    for (puVar2 = param_1; puVar2 != puVar9; puVar2 = puVar2 + 1) {
      pbVar8 = pbVar8 + 1;
      iVar5 = (int)((param_3 >> 0x18) * (uint)*pbVar8) >> 8;
      uVar3 = *puVar2;
      uVar4 = (uint)uVar3;
      if (iVar5 != 0) {
        if (iVar5 == 0xff) {
          uVar3 = (ushort)uVar1 & (ushort)(param_3 >> 8) | (ushort)((param_3 & 0xfc00) >> 5) |
                  (ushort)((param_3 << 0x18) >> 0x1b);
        }
        else {
          iVar6 = (0xff - iVar5) * ((uVar4 & 0xf800) << 8 | (uVar4 & 0x1f) << 3) +
                  iVar5 * (param_3 & 0xff00ff);
          uVar3 = (ushort)((0xff - iVar5) * (uVar4 & 0x7e0) * 0x20 + iVar5 * (param_3 & 0xff00) >>
                          0xd) & 0x7e0 |
                  (ushort)iVar6 >> 0xb | (ushort)uVar1 & (ushort)((uint)iVar6 >> 0x10);
        }
      }
      *puVar2 = uVar3;
    }
    param_1 = (ushort *)((int)param_1 + param_4);
    param_2 = param_2 + (uint)param_5;
    puVar9 = (ushort *)((int)puVar9 + param_4);
  }
  return;
}

