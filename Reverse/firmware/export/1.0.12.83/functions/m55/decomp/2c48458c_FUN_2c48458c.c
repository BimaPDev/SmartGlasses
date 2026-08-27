/* FUN_2c48458c @ 0x2c48458c */

int FUN_2c48458c(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_124 [256];
  int local_24;
  
  puVar1 = DAT_2c484618;
  local_24 = *DAT_2c484614;
  iVar2 = ((param_3 >> 4) + 1) * 0x10;
  uVar3 = 0x10 - (param_3 & 0xf) & 0xff;
  *param_1 = iVar2;
  if ((code *)*puVar1 == (code *)0x0) {
    iVar2 = FUN_2c669578(iVar2,param_2,0);
  }
  else {
    iVar2 = (*(code *)*puVar1)();
  }
  if (iVar2 != 0) {
    FUN_2c674668(iVar2,param_2,param_3);
    FUN_2c674268(iVar2 + param_3,uVar3,uVar3);
    FUN_2c47f2e0(auStack_124,param_4,param_5);
    FUN_2c47f304(auStack_124,iVar2,*param_1);
  }
  if (*DAT_2c484614 == local_24) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

