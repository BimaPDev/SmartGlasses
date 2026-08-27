/* FUN_2c5eb06c @ 0x2c5eb06c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eb06c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = _LAB_2c5eb110;
  puVar4 = _LAB_2c5eb110;
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5eb11c,99,_LAB_2c5eb118,_LAB_2c5eb120);
  }
  while (puVar4 = (undefined4 *)*puVar4, puVar4 != (undefined4 *)0x0) {
    iVar2 = FUN_2c66b624(param_2[1],*(undefined4 *)(puVar4[2] + 4));
    if (iVar2 == 0) {
      lv_obj_add_flag_invalidate(*param_2,1);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5eb11c,0x6c,_LAB_2c5eb118,_LAB_2c5eb114);
    }
  }
  puVar4 = (undefined4 *)FUN_2c62c45c(0x14);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5eb11c,0x73,_LAB_2c5eb118,_LAB_2c5eb124);
  }
  *puVar4 = *param_2;
  uVar3 = func_0x2c5e949c(param_2[1]);
  puVar4[1] = uVar3;
  puVar4[2] = param_2[2];
  puVar4[4] = param_2[4];
  puVar4 = (undefined4 *)func_0x2c5e95c4(puVar4,6,2);
  *puVar4 = *puVar1;
  *puVar1 = puVar4;
  return 1;
}

