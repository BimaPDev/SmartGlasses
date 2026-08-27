/* FUN_2c4a5ce8 @ 0x2c4a5ce8 */

void FUN_2c4a5ce8(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int local_38;
  undefined1 *local_34;
  undefined4 local_2c;
  
  uVar5 = DAT_2c4a5e0c;
  uVar4 = DAT_2c4a5e08;
  puVar3 = DAT_2c4a5e04;
  pcVar2 = DAT_2c4a5df0;
  puVar1 = DAT_2c4a5dec;
  local_2c = *DAT_2c4a5de8;
  while( true ) {
    do {
      FUN_2c644324(&local_38,*puVar1,0xffffffff);
      puVar6 = local_34;
    } while (local_38 != 0x20);
    if ((local_34 != (undefined1 *)0x0) && (local_34[2] == '\x01')) break;
    FUN_2c4a8020(*local_34,local_34[1]);
    iVar7 = FUN_2c644388(*puVar1,puVar6);
    if (iVar7 == 0) {
      *pcVar2 = *pcVar2 + -1;
    }
  }
  local_38 = 0;
  *puVar3 = 0;
  iVar7 = FUN_2c4a5988(0,&local_38);
  if (iVar7 == 0) {
    FUN_2c6444fc(2);
    iVar7 = FUN_2c4c02f4(0x48);
    if (iVar7 == 0) {
      FUN_2c4bce68(0);
      FUN_2c4a5c78();
      FUN_2c6444fc(2);
      iVar8 = FUN_2c4a5988(0,&local_38);
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,700,uVar5,uVar4,DAT_2c4a5e00,DAT_2c4a5dfc,700);
      }
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x801,uVar5,uVar4,DAT_2c4a5df8,DAT_2c4a5df4,0x801,local_38,0,iVar7);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,700,uVar5,uVar4,DAT_2c4a5e00,DAT_2c4a5dfc,700);
}

