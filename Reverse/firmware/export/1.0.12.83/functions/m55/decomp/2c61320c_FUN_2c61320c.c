/* FUN_2c61320c @ 0x2c61320c */

int FUN_2c61320c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1[0xf] != 0) &&
     (puVar1 = (undefined4 *)lv_mem_alloc(param_1[0x13]), puVar1 != (undefined4 *)0x0)) {
    FUN_2c62c3b0(puVar1,param_1[0x13]);
    piVar2 = (int *)FUN_2c601b5c();
    puVar1[8] = *param_1;
    puVar1[7] = param_1[1];
    puVar1[6] = param_1[2];
    *(byte *)(puVar1 + 9) = (byte)(((uint)*(byte *)(*piVar2 + 0x10) << 0x19) >> 0x1f);
    uVar4 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    iVar3 = (*(code *)param_1[0xf])(param_1,puVar1,param_3,(code *)param_1[0xf],param_4);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_2c62bea8(puVar1);
    return 0;
  }
  return 0;
}

