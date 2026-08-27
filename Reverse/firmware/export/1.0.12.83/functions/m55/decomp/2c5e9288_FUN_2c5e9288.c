/* FUN_2c5e9288 @ 0x2c5e9288 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e9288(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = _LAB_2c5e931c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e9318,0x10a,_LAB_2c5e9314,_LAB_2c5e9310);
  }
  puVar2 = (undefined4 *)(**(code **)(_LAB_2c5e931c + 0x34))(0);
  puVar3 = (undefined4 *)func_0x2c5e95c4(param_2,4,0);
  puVar6 = puVar2;
  while (puVar5 = puVar6, puVar6 = (undefined4 *)*puVar5, puVar6 != (undefined4 *)0x0) {
    while (iVar4 = FUN_2c66b624(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(puVar6[2] + 0x14)),
          iVar4 == 0) {
      *puVar5 = *puVar6;
      (**(code **)(iVar1 + 0x38))(param_1,puVar6[2]);
      FUN_2c62bea8(puVar6);
      puVar6 = (undefined4 *)*puVar5;
      if (puVar6 == (undefined4 *)0x0) goto LAB_2c5e92e4;
    }
  }
LAB_2c5e92e4:
  *puVar3 = *puVar2;
  *puVar2 = puVar3;
  return 1;
}

