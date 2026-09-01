/* FUN_1012fbb2 @ 0x1012fbb2 */

undefined4 FUN_1012fbb2(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = *param_2;
  if (iVar2 < 10) {
    if (iVar2 == 1) {
      iVar2 = *(int *)(param_1 + 0xc);
      puVar3 = (undefined4 *)param_2[1];
      *puVar3 = *(undefined4 *)(iVar2 + 4);
      puVar3[1] = *(undefined4 *)(iVar2 + 8);
      puVar3[2] = *(undefined4 *)(iVar2 + 0x10);
      uVar1 = *(undefined4 *)(iVar2 + 0x2c);
      puVar3[3] = *(undefined4 *)(iVar2 + 0x14);
      puVar3[4] = uVar1;
    }
    else {
      if (iVar2 != 2) goto LAB_1012fbea;
      iVar4 = *(int *)(param_1 + 0xc);
      puVar3 = (undefined4 *)param_2[1];
      FUN_1012fa06(*(undefined4 *)(param_1 + 8));
      iVar2 = *(int *)(param_1 + 8);
      *puVar3 = *(undefined4 *)(iVar4 + 0xbc);
      puVar3[1] = *(undefined4 *)(iVar4 + 0xc0);
      thunk_FUN_10113e2c(iVar2 + 0x38);
    }
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_1012fa06(*(undefined4 *)(param_1 + 8));
      uVar1 = FUN_1013108c(*(undefined4 *)(param_1 + 0x10),*param_2,param_2[1],param_2[2]);
      thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x38);
      return uVar1;
    }
LAB_1012fbea:
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

