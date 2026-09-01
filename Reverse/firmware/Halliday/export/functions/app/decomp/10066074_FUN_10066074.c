/* FUN_10066074 @ 0x10066074 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066074(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 ushort param_7,uint param_8,uint param_9,uint param_10)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  param_8 = param_8 & 0xffff;
  param_9 = param_9 & 0xffff;
  param_10 = param_10 & 0xffff;
  if (param_8 == param_9) {
                    /* WARNING: Could not recover jumptable at 0x1011e1a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_000070c8)();
    return;
  }
  if (param_7 < 0xe11) {
    iVar3 = FUN_10066014(param_7);
    iVar4 = FUN_10066044(param_7);
    uVar5 = param_10 + 0x1e;
    uVar1 = (longlong)iVar3 * (longlong)(param_3 - param_5) -
            (longlong)iVar4 * (longlong)(param_4 - param_6);
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_8;
    iVar3 = param_8 * (int)(uVar1 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20);
    uVar7 = param_10 - 2;
    bVar8 = -1 < (int)uVar7;
    if (bVar8) {
      uVar7 = iVar3 >> (uVar7 & 0xff);
    }
    uVar6 = (uint)lVar2 >> (uVar5 & 0xff) | iVar3 << (2 - param_10 & 0xff);
    if (bVar8) {
      uVar6 = uVar6 | uVar7;
    }
    *param_1 = uVar6 + param_5;
    iVar3 = FUN_10066044(param_7);
    iVar4 = FUN_10066014(param_7);
    uVar1 = (longlong)iVar4 * (longlong)(param_4 - param_6);
    uVar1 = (longlong)(param_3 - param_5) * (longlong)iVar3 +
            ((longlong)(int)(uVar1 >> 0x20) << 0x20 | uVar1 & 0xffffffff);
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_9;
    iVar3 = param_9 * (int)(uVar1 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20);
    uVar5 = (uint)lVar2 >> (uVar5 & 0xff) | iVar3 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(param_10 - 2)) {
      uVar5 = uVar5 | iVar3 >> (param_10 - 2 & 0xff);
    }
    *param_2 = uVar5 + param_6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_10066174,0x178,DAT_10066170,DAT_1006616c);
}

