/* FUN_2c4a62bc @ 0x2c4a62bc */

void FUN_2c4a62bc(void)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint local_38 [8];
  
  uVar5 = 3;
  local_38[7] = *DAT_2c4a659c;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  do {
    local_38[0] = 0xd;
    iVar3 = FUN_2c4a578c(0x7c,0xd);
    if (iVar3 != 0) {
      FUN_2c4a578c(0x7c,0xd);
    }
    uVar5 = uVar5 - 1 & 0xffff;
  } while (uVar5 != 0);
  local_38[0] = uVar5;
  sVar2 = FUN_2c4a5988(0x7c,local_38);
  if ((sVar2 != 0) || (local_38[0] != 0xd)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5e4,DAT_2c4a65a8,DAT_2c4a65ac,DAT_2c4a65a4,DAT_2c4a65a0,0x5e4);
  }
  puVar7 = DAT_2c4a65b0 + 0x198;
  puVar6 = DAT_2c4a65b0;
  do {
    uVar1 = *puVar6;
    uVar4 = *(undefined4 *)(puVar6 + 2);
    iVar3 = FUN_2c4a578c(uVar1);
    if ((iVar3 != 0) && (iVar3 = FUN_2c4a578c(uVar1,uVar4), iVar3 < 0)) goto LAB_2c4a6358;
    puVar6 = puVar6 + 4;
  } while (puVar6 != puVar7);
  puVar7 = DAT_2c4a65b4 + 0xc;
  puVar6 = DAT_2c4a65b4;
  while( true ) {
    uVar1 = *puVar6;
    uVar4 = *(undefined4 *)(puVar6 + 2);
    iVar3 = FUN_2c4a578c(uVar1);
    if ((iVar3 != 0) && (iVar3 = FUN_2c4a578c(uVar1,uVar4), iVar3 != 0)) break;
    puVar6 = puVar6 + 4;
    if (puVar6 == puVar7) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x364,DAT_2c4a65a8,DAT_2c4a65ac,DAT_2c4a65b8,DAT_2c4a65dc,0x364);
    }
  }
LAB_2c4a6358:
  if (*DAT_2c4a659c == local_38[7]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

