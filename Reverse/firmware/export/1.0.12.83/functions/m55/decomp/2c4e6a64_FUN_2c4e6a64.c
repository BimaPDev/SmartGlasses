/* FUN_2c4e6a64 @ 0x2c4e6a64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e6a64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  piVar1 = _LAB_2c4e6acc;
  iVar2 = *_LAB_2c4e6acc;
  if (iVar2 == 0) {
    iVar2 = FUN_2c478b68();
    *piVar1 = iVar2;
  }
  puVar3 = (undefined1 *)(**(code **)(iVar2 + 0x24))();
  FUN_2c66b450(param_3,param_4,_LAB_2c4e6ad0,puVar3[5],puVar3[4],puVar3[3],puVar3[2],puVar3[1],
               *puVar3);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x53,_LAB_2c4e6ad8,_LAB_2c4e6adc,_LAB_2c4e6ad4,param_3);
}

