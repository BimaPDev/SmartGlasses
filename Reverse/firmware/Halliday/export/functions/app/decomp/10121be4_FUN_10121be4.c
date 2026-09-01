/* FUN_10121be4 @ 0x10121be4 */

bool FUN_10121be4(int param_1,undefined2 *param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  bVar1 = *(char *)(**(int **)(param_1 + 0xc) + 10) != '\0';
  if (bVar1) {
    uVar2 = *(ushort *)((int)*(int **)(param_1 + 0xc) + 0xc2);
    uVar5 = param_3 / uVar2;
    uVar3 = FUN_10121b5c();
    uVar4 = FUN_10121ba6(param_1,uVar5);
    *param_2 = uVar4;
    *(undefined1 *)(param_2 + 4) = uVar3;
    param_2[1] = (short)param_3 - uVar2 * (short)uVar5;
    *(undefined4 *)(param_2 + 2) = param_4;
  }
  return bVar1;
}

