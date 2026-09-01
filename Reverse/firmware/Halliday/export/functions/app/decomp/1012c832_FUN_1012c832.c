/* FUN_1012c832 @ 0x1012c832 */

undefined4 FUN_1012c832(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(byte *)(param_2 + 6) < 3) {
LAB_1012c840:
    uVar1 = 1;
  }
  else {
    if ((*(char *)((int)param_2 + 0x19) != '\x02') && (iVar2 = FUN_1009dbd4(), iVar2 != 0)) {
      iVar2 = FUN_1012a896(auStack_38,*param_2,*(undefined4 *)(param_1 + 8));
      if (iVar2 == 0) goto LAB_1012c840;
      FUN_1012a87c(auStack_38,-**(int **)(param_1 + 4),-(*(int **)(param_1 + 4))[1]);
      if ((param_2[3] == 0) && (uVar3 = FUN_1012a84e(auStack_38), 0x1f < uVar3)) {
        if (param_2[1] == 0) {
          uVar1 = FUN_1009d0bc(auStack_38,*(undefined2 *)(param_2 + 2),*(undefined1 *)(param_2 + 6),
                               *(undefined1 *)((int)param_2 + 0x19));
          return uVar1;
        }
        piVar4 = (int *)*param_2;
        local_28 = *piVar4 - **(int **)(param_1 + 4);
        local_24 = piVar4[1] - (*(int **)(param_1 + 4))[1];
        local_1c = (local_24 - piVar4[1]) + piVar4[3];
        local_20 = (local_28 - *piVar4) + piVar4[2];
        uVar1 = FUN_1012cd32(auStack_38,param_2[1],&local_28,(piVar4[2] + 1) - *piVar4,4,param_2);
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

