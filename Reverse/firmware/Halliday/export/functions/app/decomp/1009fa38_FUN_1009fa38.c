/* FUN_1009fa38 @ 0x1009fa38 */

undefined4 FUN_1009fa38(int param_1,int param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *DAT_1009faa8;
  if ((iVar4 != 0) && (uVar2 = (uint)*(ushort *)(iVar4 + 400), uVar2 != 0)) {
    uVar3 = (uint)*(byte *)(iVar4 + 0x199);
    iVar5 = *(int *)(param_1 + 4);
    if (uVar3 == 2) {
      uVar3 = (uint)*(ushort *)(iVar4 + 0x192);
      if ((uVar3 == uVar2) && (param_2 == 0)) {
        return 0;
      }
    }
    else if (uVar3 == 3) {
      uVar2 = (uint)*(ushort *)(iVar4 + 0x196);
      uVar3 = (uint)*(ushort *)(*(int *)(iVar4 + (uint)*(byte *)(iVar4 + 0x195) * 4) + 4);
      if (uVar3 <= uVar2) {
        uVar3 = *(ushort *)(iVar4 + 0x192) - uVar2;
        *(short *)(iVar4 + 0x192) = (short)uVar3;
      }
    }
    FUN_1009f54c(iVar4,1,uVar2,uVar3,param_4);
    iVar1 = FUN_1009f644(iVar4,param_1);
    if (iVar1 == 0) {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(iVar4 + 0x192);
      }
      return *(undefined4 *)(iVar5 + 0x34);
    }
  }
  return 0;
}

