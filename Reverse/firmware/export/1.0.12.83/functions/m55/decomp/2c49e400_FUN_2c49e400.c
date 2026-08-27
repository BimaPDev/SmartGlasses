/* FUN_2c49e400 @ 0x2c49e400 */

void FUN_2c49e400(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int local_38;
  undefined1 *local_34;
  undefined4 local_2c;
  
  uVar6 = DAT_2c49e4c4;
  uVar5 = DAT_2c49e4c0;
  puVar4 = DAT_2c49e4bc;
  uVar3 = DAT_2c49e4b8;
  pcVar2 = DAT_2c49e4b4;
  puVar1 = DAT_2c49e4b0;
  local_2c = *DAT_2c49e4ac;
  while( true ) {
    do {
      FUN_2c644324(&local_38,*puVar1,0xffffffff);
      puVar7 = local_34;
    } while (local_38 != 0x20);
    if ((local_34 != (undefined1 *)0x0) && (local_34[2] == '\x01')) break;
    FUN_2c49ffd8(*local_34,local_34[1]);
    iVar8 = FUN_2c644388(*puVar1,puVar7);
    if (iVar8 == 0) {
      *pcVar2 = *pcVar2 + -1;
    }
  }
  local_38 = 0;
  *puVar4 = 0;
  FUN_2c49e3b0(0,&local_38);
  FUN_2c6444fc(2);
  iVar8 = FUN_2c4c02f4(0x48);
  if (iVar8 == 0) {
    FUN_2c4bce68();
    FUN_2c49e2b0();
    FUN_2c6444fc(2);
    FUN_2c49e3b0(0,&local_38);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x5c4,uVar3,uVar6,uVar5,local_38,0,iVar8);
}

