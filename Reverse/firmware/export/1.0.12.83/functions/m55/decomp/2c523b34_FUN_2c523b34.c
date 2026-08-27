/* FUN_2c523b34 @ 0x2c523b34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c523b34(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c66c4ec(param_2);
  puVar2 = (undefined1 *)lv_mem_alloc(iVar1 + 2);
  *puVar2 = 10;
  puVar2[1] = param_1;
  uVar3 = FUN_2c66c4ec(param_2);
  FUN_2c62c0d8(puVar2 + 2,param_2,uVar3);
  FUN_2c5fd5fc(*_LAB_2c523ba0,(int)*_DAT_2c523b9c,_LAB_2c523ba4,0x1f,0,0,puVar2,iVar1 + 2);
  FUN_2c62bea8(puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c523bb0,0x124,_LAB_2c523ba8,_LAB_2c523bac,_LAB_2c523ba8);
}

