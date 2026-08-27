/* FUN_2c600c44 @ 0x2c600c44 */

void FUN_2c600c44(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  char local_1c [4];
  undefined4 local_18;
  uint local_14;
  
  local_14 = *DAT_2c600ccc;
  uVar5 = FUN_2c62a998(param_1,param_2 + 0x14,0,0);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    uVar5 = FUN_2c606b94(param_2,1);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == 0) {
      uVar5 = FUN_2c600c38(param_2);
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) {
        local_1c[0] = '\0';
        local_18 = param_1;
        FUN_2c602340(param_2,0x12,local_1c);
        uVar2 = extraout_r1;
        if (local_1c[0] != '\x02') {
          uVar5 = FUN_2c6041fc(param_2);
          uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
          iVar3 = (int)uVar5 + -1;
          if (-1 < iVar3) {
            do {
              uVar5 = FUN_2c600c44(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar3 * 4));
              uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
              iVar1 = (int)uVar5;
              if ((int)uVar5 != 0) goto LAB_2c600cb4;
              bVar4 = iVar3 != 0;
              iVar3 = iVar3 + -1;
            } while (bVar4);
          }
          iVar1 = param_2;
          if (local_1c[0] == '\0') goto LAB_2c600cb4;
        }
      }
    }
  }
  iVar1 = 0;
LAB_2c600cb4:
  if ((*DAT_2c600ccc ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iVar1,uVar2,*DAT_2c600ccc ^ local_14,0);
  }
  return;
}

