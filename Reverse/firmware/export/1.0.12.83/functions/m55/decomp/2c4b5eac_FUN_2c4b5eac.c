/* FUN_2c4b5eac @ 0x2c4b5eac */

void FUN_2c4b5eac(int param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort local_26;
  int local_24;
  
  iVar1 = DAT_2c4b5f4c;
  uVar4 = 0;
  local_24 = *DAT_2c4b5f48;
  do {
    if ((1 << (uVar4 & 0xff) & param_2) != 0) {
      if (param_1 == 5) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)*(char *)(uVar4 + iVar1);
      }
      uVar2 = FUN_2c4b5e70(iVar3);
      if (uVar4 == 5) {
        uVar5 = 0x105e;
      }
      else {
        uVar5 = uVar4 * 0x10 + 1 & 0xffff | 0x1000;
      }
      FUN_2c673e88(uVar5,&local_26);
      local_26 = (uVar2 & 7) << 10 | local_26 & 0xe3ff;
      FUN_2c673d68(uVar5);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 6);
  if (*DAT_2c4b5f48 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

