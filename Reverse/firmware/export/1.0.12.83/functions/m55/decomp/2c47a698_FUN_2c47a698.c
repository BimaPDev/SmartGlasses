/* FUN_2c47a698 @ 0x2c47a698 */

void FUN_2c47a698(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  byte local_34 [12];
  undefined1 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = *DAT_2c47a788;
  iVar2 = FUN_2c46de74();
  iVar8 = 0;
  pbVar3 = (byte *)(iVar2 + 6);
  pbVar5 = local_34;
  do {
    while( true ) {
      pbVar3 = pbVar3 + -1;
      bVar1 = *pbVar3 >> 4;
      bVar6 = *pbVar3 & 0xf;
      bVar7 = bVar1 + 0x30;
      if (bVar7 < 0x3a) break;
      *pbVar5 = bVar1 + 0x57;
      if (0x39 < (byte)(bVar6 + 0x30)) goto LAB_2c47a6c2;
LAB_2c47a6f0:
      iVar8 = iVar8 + 2;
      pbVar5[1] = bVar6 + 0x30;
      pbVar5 = pbVar5 + 2;
      if (iVar8 == 0xc) goto LAB_2c47a6fe;
    }
    *pbVar5 = bVar7;
    if ((byte)(bVar6 + 0x30) < 0x3a) goto LAB_2c47a6f0;
LAB_2c47a6c2:
    iVar8 = iVar8 + 2;
    pbVar5[1] = bVar6 + 0x57;
    pbVar5 = pbVar5 + 2;
  } while (iVar8 != 0xc);
LAB_2c47a6fe:
  local_28 = 0;
  uVar4 = FUN_2c66b19c();
  local_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  FUN_2c46c9f4(uVar4,&local_24,10);
  iVar2 = FUN_2c473be8(0,0,local_34,DAT_2c47a78c,0,0,0,0,DAT_2c47a790);
  if (iVar2 != 0) {
    FUN_2c47cc58(iVar2,0,0,2);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(7,iVar2);
  }
  FUN_2c6741e8(0x710,DAT_2c47a794);
  if (*DAT_2c47a788 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

