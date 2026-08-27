/* FUN_2c62b85c @ 0x2c62b85c */

uint FUN_2c62b85c(char *param_1,uint param_2,int param_3,short param_4,byte param_5)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_30;
  int local_2c;
  
  puVar1 = DAT_2c62b950;
  local_2c = *DAT_2c62b94c;
  if ((param_1 != (char *)0x0) && (uVar5 = (uint)(param_3 == 0), param_3 != 0)) {
    uVar4 = 0;
    if (*param_1 == '\0') goto LAB_2c62b8e2;
    local_30 = uVar5;
    if (param_2 != 0) {
      uVar6 = uVar5;
      do {
        while (iVar3 = (*(code *)*puVar1)(param_1,&local_30), iVar3 == 0) {
          uVar4 = param_5 & 1;
          if ((param_5 & 1) != 0) {
            if (uVar6 == 1) goto LAB_2c62b912;
            uVar4 = 0;
          }
LAB_2c62b8fe:
          sVar2 = FUN_2c6298c0(param_3,iVar3,uVar4);
          if (0 < sVar2) {
            uVar5 = (uint)(short)(sVar2 + (short)uVar5 + param_4);
          }
LAB_2c62b912:
          uVar4 = uVar5;
          if (param_2 <= local_30) goto LAB_2c62b8d8;
        }
        uVar4 = (*(code *)*puVar1)(param_1 + local_30,0);
        if ((param_5 & 1) == 0) goto LAB_2c62b8fe;
        if (iVar3 != 0x23) {
          if (uVar6 != 1) goto LAB_2c62b8fe;
          if (iVar3 == 0x20) {
            uVar6 = 2;
          }
          goto LAB_2c62b912;
        }
        if (uVar6 != 0) {
          bVar7 = uVar6 == 1;
          uVar6 = 0;
          if (bVar7) goto LAB_2c62b8fe;
          goto LAB_2c62b912;
        }
        uVar4 = uVar5;
        uVar6 = param_5 & 1;
      } while (local_30 < param_2);
LAB_2c62b8d8:
      if (0 < (int)uVar4) {
        uVar4 = (uint)(short)((short)uVar4 - param_4);
      }
      goto LAB_2c62b8e2;
    }
  }
  uVar4 = 0;
LAB_2c62b8e2:
  if (*DAT_2c62b94c != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar4;
}

