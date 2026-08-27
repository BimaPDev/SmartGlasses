/* FUN_2c49c938 @ 0x2c49c938 */

void FUN_2c49c938(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char local_1d;
  int local_1c;
  
  iVar3 = DAT_2c49c9b8;
  uVar2 = DAT_2c49c9ac;
  uVar1 = DAT_2c49c9a8;
  iVar5 = 0;
  local_1c = *DAT_2c49c9a4;
  do {
    iVar4 = FUN_2c49c6a0(uVar1,iVar5 + 0x10U & 0xff,&local_1d);
    if (-1 < iVar4) {
      uVar6 = DAT_2c49c9b0;
      if (*(char *)(iVar5 + iVar3) == local_1d) {
        uVar6 = uVar2;
      }
      FUN_2c648600(DAT_2c49c9b4,*(char *)(iVar5 + iVar3),local_1d,iVar5,uVar6);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x50);
  if (*DAT_2c49c9a4 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

