/* FUN_1011b224 @ 0x1011b224 */

undefined4
FUN_1011b224(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  uVar1 = *param_1;
  iVar3 = *piVar4;
  piVar2 = (int *)piVar4[1];
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  *piVar4 = 0;
  piVar4[1] = 0;
  FUN_1011a1b6(uVar1,(uint)*(ushort *)(piVar4 + 2) + (uint)*(ushort *)((int)piVar4 + 10) + 0xc,0,
               (uint)*(ushort *)((int)piVar4 + 10),param_4);
  return 1;
}

