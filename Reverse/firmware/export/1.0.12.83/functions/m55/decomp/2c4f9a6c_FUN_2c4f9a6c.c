/* FUN_2c4f9a6c @ 0x2c4f9a6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c4f9a6c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar1 = _LAB_2c4f9aa4;
  puVar2 = (undefined4 *)FUN_2c6442f0(*_LAB_2c4f9aa4,0,param_3,param_4,param_4);
  if (puVar2 != (undefined4 *)0x0) {
    uVar5 = param_1[2];
    uVar4 = param_1[1];
    *puVar2 = *param_1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    iVar3 = *piVar1;
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 3);
    if (iVar3 == 0) {
      uVar4 = 0xfffffffc;
    }
    else if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0xffffff81;
    }
    else {
      uVar4 = FUN_2c6450ec(*(undefined4 *)(iVar3 + 4),&stack0xfffffff4,0);
    }
    return uVar4;
  }
  return 0xffffffff;
}

