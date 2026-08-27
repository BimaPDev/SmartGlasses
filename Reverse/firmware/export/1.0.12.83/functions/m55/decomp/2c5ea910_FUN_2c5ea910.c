/* FUN_2c5ea910 @ 0x2c5ea910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ea910(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = _LAB_2c5ea9a0;
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(**(code **)(_LAB_2c5ea9a0 + 0x34))();
    puVar4 = (undefined4 *)func_0x2c5e95c4(param_2,6,1);
    puVar6 = (undefined4 *)*puVar3;
    puVar2 = puVar6;
    if (puVar6 != (undefined4 *)0x0) goto LAB_2c5ea93a;
    while (puVar6 = puVar3, puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
      iVar5 = FUN_2c66b624(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(puVar3[2] + 0x18));
      if (iVar5 == 0) {
        *puVar6 = *puVar3;
        (**(code **)(iVar1 + 0x38))(param_1,puVar3[2]);
        FUN_2c62bea8(puVar3);
LAB_2c5ea93a:
        puVar2 = (undefined4 *)*puVar6;
        puVar3 = puVar6;
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    }
    *puVar4 = 0;
    *puVar6 = puVar4;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5ea99c,0x182,_LAB_2c5ea998,_LAB_2c5ea994);
}

