/* FUN_2c4ed5c8 @ 0x2c4ed5c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ed5c8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_2c4e94fc();
  uVar2 = (*(code *)*puVar1)();
  iVar3 = FUN_2c4e94fc();
  uVar4 = (**(code **)(iVar3 + 0x18))();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x34,_LAB_2c4ed6c4,_LAB_2c4ed6c0,_LAB_2c4ed6bc,uVar2,uVar4);
}

