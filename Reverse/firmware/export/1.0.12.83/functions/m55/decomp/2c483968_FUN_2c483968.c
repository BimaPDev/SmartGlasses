/* FUN_2c483968 @ 0x2c483968 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c483968(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = _LAB_2c4839c4;
  FUN_2c674268(_LAB_2c4839c4,0,0x2d);
  FUN_2c66c568(iVar1,param_1,param_2);
  uVar3 = _LAB_2c4839cc;
  uVar2 = _LAB_2c4839c8;
  *(undefined1 *)(iVar1 + 0x2c) = 0;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xf2,_LAB_2c4839d0,uVar3,uVar2,iVar1);
}

