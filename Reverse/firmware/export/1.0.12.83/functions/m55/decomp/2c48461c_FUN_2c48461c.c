/* FUN_2c48461c @ 0x2c48461c */

int FUN_2c48461c(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
                )

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_124 [256];
  int local_24;
  
  puVar1 = DAT_2c4846c4;
  local_24 = *DAT_2c4846c0;
  if ((param_3 & 0xf) == 0) {
    *param_1 = param_3;
    pcVar4 = (code *)*puVar1;
    uVar2 = param_3;
  }
  else {
    uVar2 = (param_3 + 0x10) - (param_3 & 0xf);
    *param_1 = uVar2;
    pcVar4 = (code *)*puVar1;
  }
  if (pcVar4 == (code *)0x0) {
    iVar3 = FUN_2c669578(uVar2,param_2,0);
  }
  else {
    iVar3 = (*pcVar4)();
  }
  if (iVar3 != 0) {
    FUN_2c674268(iVar3,0,*param_1);
    FUN_2c674668(iVar3,param_2,param_3);
    FUN_2c47f2e0(auStack_124,param_4,param_5);
    FUN_2c47f374(auStack_124,iVar3,*param_1);
    uVar2 = (uint)*(byte *)(iVar3 + *param_1 + -1);
    if (uVar2 - 1 < 0x10) {
      uVar2 = *param_1 - uVar2;
      *param_1 = uVar2;
      *(undefined1 *)(iVar3 + uVar2) = 0;
    }
  }
  if (*DAT_2c4846c0 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar3;
}

