/* FUN_10120a74 @ 0x10120a74 */

undefined4
FUN_10120a74(int param_1,undefined1 *param_2,uint param_3,short param_4,undefined2 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = **(int **)(param_1 + 0xc);
  uVar2 = (uint)*(byte *)(iVar3 + 9);
  uVar1 = 0;
  if ((uVar2 * *(byte *)(iVar3 + 8) != 0) && (uVar1 = 0, uVar2 != 0)) {
    if (*(byte *)(iVar3 + 10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
      *(ushort *)(param_2 + 3) =
           ((short)param_3 - (ushort)*(byte *)(iVar3 + 9) * (short)(param_3 / uVar2)) *
           (*(ushort *)(iVar3 + 0x10) / (ushort)*(byte *)(iVar3 + 10)) + param_4;
      *param_2 = (char)(param_3 / uVar2);
      *(undefined2 *)(param_2 + 1) = param_5;
    }
  }
  return uVar1;
}

