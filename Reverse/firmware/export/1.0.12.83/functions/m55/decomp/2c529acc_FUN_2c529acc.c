/* FUN_2c529acc @ 0x2c529acc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c529acc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = _LAB_2c529b1c;
  *(undefined1 *)(param_1 + 4) = 1;
  uVar3 = _LAB_2c529b24;
  uVar2 = _LAB_2c529b20;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  *param_1 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c529b28,0x1e,uVar1,uVar3,uVar1);
}

