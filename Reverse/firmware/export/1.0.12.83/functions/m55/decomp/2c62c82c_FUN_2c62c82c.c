/* FUN_2c62c82c @ 0x2c62c82c */

void FUN_2c62c82c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *local_25c;
  undefined4 local_258;
  undefined1 **local_254;
  undefined4 local_250;
  undefined1 auStack_24c [32];
  undefined1 auStack_22c [512];
  uint local_2c;
  
  local_2c = *DAT_2c62c914;
  uVar3 = 0;
  if ((param_1 - 3U & 0xff) < 3) {
    local_25c = &stack0x00000004;
    iVar4 = FUN_2c66c4ec(param_2);
    piVar1 = DAT_2c62c920;
    iVar6 = 0;
    if (iVar4 != 0) {
      pcVar5 = (char *)(iVar4 + 1 + param_2);
      do {
        pcVar5 = pcVar5 + -1;
        if ((*pcVar5 == '/') || (*pcVar5 == '\\')) {
          iVar6 = iVar4 + 1;
          break;
        }
        iVar4 = iVar4 + -1;
        iVar6 = 0;
      } while (iVar4 != 0);
    }
    uVar7 = FUN_2c629df4();
    piVar2 = DAT_2c62c924;
    iVar4 = (int)uVar7;
    if (*piVar1 != 0) {
      local_250 = 0;
      FUN_2c674268(auStack_24c,0,0x1d);
      FUN_2c6742b8(&local_250,0x20);
      local_254 = &local_25c;
      local_258 = param_5;
      FUN_2c646854();
      uVar3 = FUN_2c646824();
      FUN_2c62dbd4(auStack_22c,0x200,DAT_2c62c91c,&local_250,uVar3,
                   *(undefined4 *)(DAT_2c62c918 + param_1 * 4),iVar4 - *piVar2,param_4,&local_258,
                   iVar6 + param_2,param_3);
      uVar7 = (*(code *)*piVar1)(auStack_22c);
    }
    param_2 = (int)((ulonglong)uVar7 >> 0x20);
    uVar3 = (undefined4)uVar7;
    *piVar2 = iVar4;
  }
  if ((*DAT_2c62c914 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar3,param_2,*DAT_2c62c914 ^ local_2c,0);
  }
  return;
}

