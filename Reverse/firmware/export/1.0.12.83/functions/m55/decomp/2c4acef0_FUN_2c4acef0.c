/* FUN_2c4acef0 @ 0x2c4acef0 */

void FUN_2c4acef0(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_50;
  uint local_4c [8];
  uint local_2c;
  
  puVar7 = local_4c;
  local_2c = *DAT_2c4ad090;
  puVar6 = &local_50;
  FUN_2c674268(puVar7,0,0x20,0);
  do {
    local_50 = 0;
    iVar2 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 0x270),&local_50,
                       *(undefined1 *)(param_1 + 0x274));
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xf5,DAT_2c4ad0a0,DAT_2c4ad09c,DAT_2c4ad098,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ad094);
    }
    puVar6 = puVar6 + 1;
    *puVar6 = (local_50 * 1000 >> (*(uint *)(param_1 + 0x278) & 0xff)) - *(int *)(param_1 + 0x300);
    FUN_2c6444fc(0x1e);
    puVar4 = puVar7;
    puVar1 = local_4c + 7;
  } while (local_4c + 7 != puVar6);
  do {
    puVar5 = puVar1;
    uVar3 = *puVar4;
    puVar6 = puVar4 + 1;
    if (*puVar6 < uVar3) {
      *puVar4 = *puVar6;
      *puVar6 = uVar3 & 0xffff;
    }
    puVar4 = puVar6;
    puVar1 = puVar5;
  } while ((puVar5 != puVar6) || (puVar4 = puVar7, puVar1 = puVar5 + -1, puVar5 + -1 != puVar7));
  iVar2 = 0;
  do {
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + *puVar7;
  } while (puVar5 + 5 != puVar7);
  uVar3 = (int)((ulonglong)((longlong)DAT_2c4ad0a4 * (longlong)iVar2) >> 0x20) - (iVar2 >> 0x1f);
  if ((*(code **)(param_1 + 0x37c) != (code *)0x0) &&
     (iVar2 = (**(code **)(param_1 + 0x37c))
                        (param_1,(int)((longlong)DAT_2c4ad0a4 * (longlong)iVar2)), iVar2 < 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x246,DAT_2c4ad0a0,DAT_2c4ad09c,DAT_2c4ad0b0,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ad0a8);
  }
  if ((uVar3 < *(uint *)(param_1 + 0x308)) || (*(uint *)(param_1 + 0x30c) < uVar3)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x24d,DAT_2c4ad0a0,DAT_2c4ad09c,DAT_2c4ad0ac,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ad0a8,uVar3);
  }
  if (*(char *)(param_1 + 0x305) != '\0') {
    *(undefined1 *)(param_1 + 0x304) = 1;
  }
  *(uint *)(param_1 + 0x2f0) = uVar3;
  FUN_2c4ab4ec(param_1,0);
  FUN_2c4ace48(param_1);
  FUN_2c4ab4ec(param_1,1);
  if ((*DAT_2c4ad090 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(0,extraout_r1,*DAT_2c4ad090 ^ local_2c,0);
  }
  return;
}

