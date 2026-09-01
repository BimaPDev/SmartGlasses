/* FUN_100740b0 @ 0x100740b0 */

undefined4 FUN_100740b0(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (param_2 == (int *)0x0) {
    FUN_100a5b78(DAT_10074160 | (DAT_1007415c - DAT_10074158) * 0x20 & 0xff00U,DAT_10074168,
                 DAT_10074164);
    return 0xffffffea;
  }
  if (*param_2 != DAT_1007416c) {
    FUN_100a5b78(DAT_10074170 | (DAT_1007415c - DAT_10074158) * 0x20 & 0xff00U,DAT_10074168,
                 DAT_10074174);
    return 0xfffffff2;
  }
  if ((-1 < (int)((uint)*(byte *)((int)param_2 + 0x23) << 0x1d)) &&
     (iVar2 = FUN_10073cdc(iVar4), iVar2 != 0)) {
    FUN_100a5b78(DAT_10074178 | (DAT_1007415c - DAT_10074158) * 0x20 & 0xff00U,DAT_10074168,
                 DAT_1007417c);
    return 0xfffffffa;
  }
  uVar1 = *(ushort *)(param_2 + 3);
  if ((int)((uint)*(byte *)((int)param_2 + 0x23) << 0x1f) < 0) {
    if ((uVar1 & 4) != 0) {
      return 0;
    }
  }
  else if ((uVar1 & 4) != 0) goto LAB_10074146;
  *(ushort *)(param_2 + 3) = uVar1 | 4;
LAB_10074146:
  if ((int)((uint)*(byte *)((int)param_2 + 0x23) << 0x1d) < 0) {
    return 0;
  }
  iVar4 = *(int *)(iVar4 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x10074156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(int *)(iVar4 + 8) + 8))(iVar4,param_2[1]);
  return uVar3;
}

