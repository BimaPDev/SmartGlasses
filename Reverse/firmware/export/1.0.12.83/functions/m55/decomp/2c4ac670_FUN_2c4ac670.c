/* FUN_2c4ac670 @ 0x2c4ac670 */

int FUN_2c4ac670(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 extraout_r1;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar6 = 5;
  uVar4 = 0;
  uVar5 = 0;
  local_2c = *DAT_2c4ac760;
  local_34 = 0;
  do {
    iVar3 = FUN_2c4ac5f0(param_1,&local_34);
    if (iVar3 < 0) goto LAB_2c4ac700;
    uVar5 = uVar5 + local_34;
    local_30 = 0;
    iVar3 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 0x264),&local_30,
                       *(undefined1 *)(param_1 + 0x268));
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x158,DAT_2c4ac774,DAT_2c4ac770,DAT_2c4ac76c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ac768);
    }
    uVar4 = uVar4 + ((uint)(local_30 * 1000) >> (*(uint *)(param_1 + 0x26c) & 0xff));
    FUN_2c6444fc(0x1e);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar1 = (ulonglong)DAT_2c4ac764;
  uVar2 = (ulonglong)DAT_2c4ac764;
  *(uint *)(param_1 + 0x2f8) = (uint)(uVar1 * uVar5 >> 0x22);
  *(uint *)(param_1 + 0x2fc) = (uint)(uVar2 * uVar4 >> 0x22);
  if ((*(code **)(param_1 + 0x37c) != (code *)0x0) &&
     (iVar6 = (**(code **)(param_1 + 0x37c))(param_1,extraout_r1,(int)(uVar1 * uVar5)), iVar6 < 0))
  {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x32c,DAT_2c4ac774,DAT_2c4ac770,DAT_2c4ac77c,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ac778);
  }
  iVar3 = 0;
LAB_2c4ac700:
  if (*DAT_2c4ac760 == local_2c) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

