/* FUN_1009f98c @ 0x1009f98c */

undefined4 FUN_1009f98c(int param_1,undefined2 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *DAT_1009f9ec;
  if ((iVar3 != 0) && (*(short *)(iVar3 + 400) != 0)) {
    uVar2 = (uint)*(byte *)(iVar3 + 0x199);
    iVar4 = *(int *)(param_1 + 4);
    if ((uVar2 == 3) && (uVar2 = (uint)*(ushort *)(iVar3 + 0x196), uVar2 == 1)) {
      param_3 = (uint)*(ushort *)(iVar3 + 0x192);
      uVar2 = *(ushort *)(*(int *)(iVar3 + (uint)*(byte *)(iVar3 + 0x195) * 4) + 4) + param_3;
      *(short *)(iVar3 + 0x192) = (short)uVar2;
    }
    FUN_1009f54c(iVar3,0,param_3,uVar2,param_4);
    iVar1 = FUN_1009f644(iVar3,param_1);
    if (iVar1 == 0) {
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = *(undefined2 *)(iVar3 + 0x192);
      }
      return *(undefined4 *)(iVar4 + 0x34);
    }
  }
  return 0;
}

