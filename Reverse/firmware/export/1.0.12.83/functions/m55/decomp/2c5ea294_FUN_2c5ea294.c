/* FUN_2c5ea294 @ 0x2c5ea294 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ea294(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (((*param_2 != 0) && (param_2[1] != 0)) && (param_2[2] != 0)) {
    puVar1 = (undefined4 *)FUN_2c62c45c(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = func_0x2c5e949c(*param_2);
      *puVar1 = uVar2;
      uVar2 = func_0x2c5e949c(param_2[1]);
      puVar1[1] = uVar2;
      puVar1[2] = param_2[2];
      func_0x2c5e6abc(1);
      func_0x2c5eb3c8(puVar1);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5ea30c,0x46,_LAB_2c5ea308,_LAB_2c5ea310);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5ea30c,0x41,_LAB_2c5ea308,_LAB_2c5ea304);
}

