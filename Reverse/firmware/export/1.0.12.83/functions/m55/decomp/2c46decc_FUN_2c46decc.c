/* FUN_2c46decc @ 0x2c46decc */

void FUN_2c46decc(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar2 = DAT_2c46df1c;
  piVar1 = DAT_2c46df18;
  if (*DAT_2c46df18 == 0) {
    uVar5 = param_1[3];
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    *DAT_2c46df1c = *param_1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar2[4] = param_1[4];
    *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 5);
  }
  else {
    FUN_2c644044(*DAT_2c46df18,0xffffffff);
    puVar2 = DAT_2c46df1c;
    uVar5 = param_1[3];
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    iVar6 = *piVar1;
    *DAT_2c46df1c = *param_1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar2[4] = param_1[4];
    *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 5);
    if (iVar6 != 0) {
      FUN_2c644080(iVar6);
      return;
    }
  }
  return;
}

