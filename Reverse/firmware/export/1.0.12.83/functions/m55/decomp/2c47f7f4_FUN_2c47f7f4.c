/* FUN_2c47f7f4 @ 0x2c47f7f4 */

void FUN_2c47f7f4(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
  uint auStack_54 [8];
  uint local_34;
  
  local_34 = *DAT_2c47f8e8;
  sVar3 = FUN_2c47f4d0(param_2,param_3);
  uVar6 = extraout_r1;
  if ((code *)*DAT_2c47f8ec != (code *)0x0) {
    iVar12 = (short)param_3 * 4;
    uVar9 = param_3 - 1U & 0xff;
    puVar11 = (uint *)(param_3 * 4 + param_1 + -4);
    iVar10 = 0x40;
    uVar13 = (*(code *)*DAT_2c47f8ec)(param_1,iVar12);
    while (uVar6 = (uint)((ulonglong)uVar13 >> 0x20), (int)uVar13 != 0) {
      *puVar11 = *puVar11 & 0xffffffffU >> ((int)(short)((short)param_3 * 0x20 - sVar3) & 0xffU);
      if (0 < param_3) {
        puVar7 = (uint *)(param_1 + -4);
        uVar5 = 0;
        do {
          puVar7 = puVar7 + 1;
          uVar5 = uVar5 | *puVar7;
        } while (puVar7 != (uint *)(param_1 + uVar9 * 4));
        uVar6 = 0;
        if (uVar5 != 0) {
          iVar4 = FUN_2c47f470(auStack_54,param_2,param_1,param_3);
          uVar6 = 0;
          puVar7 = auStack_54;
          if (iVar4 != 0) {
            iVar4 = 1;
          }
          do {
            puVar8 = puVar7 + 1;
            uVar6 = uVar6 | *puVar7;
            puVar7 = puVar8;
          } while (auStack_54 + uVar9 + 1 != puVar8);
          if (uVar6 == 0) {
            cVar2 = (char)iVar4 * -2;
          }
          else {
            cVar2 = (char)iVar4 * -2 + '\x01';
          }
          if (cVar2 == '\x01') {
            uVar1 = 1;
            goto LAB_2c47f88c;
          }
        }
      }
      iVar10 = iVar10 + -1;
      if (iVar10 == 0) break;
      uVar13 = (*(code *)*DAT_2c47f8ec)(param_1,iVar12);
    }
  }
  uVar1 = 0;
LAB_2c47f88c:
  if ((*DAT_2c47f8e8 ^ local_34) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar1,uVar6,*DAT_2c47f8e8 ^ local_34,0);
}

