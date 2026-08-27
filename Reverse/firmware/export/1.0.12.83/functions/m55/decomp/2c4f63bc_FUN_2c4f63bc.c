/* FUN_2c4f63bc @ 0x2c4f63bc */

undefined4 FUN_2c4f63bc(undefined2 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_418;
  undefined1 auStack_416 [1026];
  int local_14;
  
  piVar1 = DAT_2c4f6428;
  local_14 = *DAT_2c4f6424;
  if (0x400 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4f642c,param_3,0x400,0);
  }
  local_418 = param_1;
  FUN_2c674668(auStack_416);
  uVar2 = FUN_2c4f699c(piVar1 + 3,&local_418,param_3 + 2);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    FUN_2c64723c(iVar3);
  }
  if (*DAT_2c4f6424 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

