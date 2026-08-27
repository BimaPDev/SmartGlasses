/* FUN_2c4a4564 @ 0x2c4a4564 */

void FUN_2c4a4564(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int local_38;
  undefined1 *local_34;
  undefined4 local_2c;
  
  uVar7 = DAT_2c4a463c;
  uVar6 = DAT_2c4a4638;
  uVar5 = DAT_2c4a4634;
  puVar4 = DAT_2c4a4630;
  uVar3 = DAT_2c4a462c;
  pcVar2 = DAT_2c4a4628;
  puVar1 = DAT_2c4a4624;
  local_2c = *DAT_2c4a4620;
  while( true ) {
    do {
      FUN_2c644324(&local_38,*puVar1,0xffffffff);
      puVar8 = local_34;
    } while (local_38 != 0x20);
    if ((local_34 != (undefined1 *)0x0) && (local_34[2] == '\x01')) break;
    FUN_2c4a3c88(*local_34,local_34[1]);
    iVar9 = FUN_2c644388(*puVar1,puVar8);
    if (iVar9 == 0) {
      *pcVar2 = *pcVar2 + -1;
    }
  }
  local_38 = 0;
  *puVar4 = 0;
  FUN_2c4a4514(0,&local_38);
  FUN_2c6444fc(2);
  iVar9 = FUN_2c4c02f4(0x48);
  if (iVar9 == 0) {
    FUN_2c4bce68();
    FUN_2c4a4414();
    FUN_2c6444fc(2);
    FUN_2c4a4514(0,&local_38);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x53b,uVar3,uVar7,uVar6,uVar5,0x53b,local_38,0,iVar9);
}

