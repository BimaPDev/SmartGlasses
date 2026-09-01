/* FUN_100f62e4 @ 0x100f62e4 */

undefined4 FUN_100f62e4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(param_4 + 8);
  iVar2 = FUN_10138cb0();
  if ((int)(uint)uVar1 < iVar2) {
    uVar3 = param_3[1];
    uVar1 = *(ushort *)(param_4 + 8);
    iVar2 = *(int *)(param_4 + 0xc);
    *(undefined4 *)(iVar2 + (uint)uVar1 * 0x1c) = *param_3;
    iVar2 = iVar2 + (uint)uVar1 * 0x1c;
    *(undefined4 *)(iVar2 + 4) = uVar3;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 8) = *param_1;
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x10) = *param_2;
    *(undefined4 *)(iVar2 + 0x14) = uVar3;
    *(ushort *)(param_4 + 8) = uVar1 + 1;
    *(undefined4 *)(iVar2 + 0x18) = 4;
    return 0;
  }
  FUN_100a5b78(DAT_100f6354 | (DAT_100f6350 - DAT_100f634c) * 0x20 & 0xff00U,DAT_100f635c,
               DAT_100f6358);
  return 0;
}

