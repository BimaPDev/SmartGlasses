/* FUN_140a6e38 @ 0x140a6e38 */

void FUN_140a6e38(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar5;
  undefined1 auStack_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  uint local_1c;
  
  local_1c = *DAT_140a6efc;
  uVar2 = FUN_140e5998();
  puVar1 = DAT_140a6f00;
  iVar5 = 2;
  *DAT_140a6f00 = uVar2;
  local_38 = 0xf;
  local_2c = 0x3c;
  local_34 = 2;
  FUN_140b4a50(auStack_44);
  FUN_140a59e8();
  do {
    FUN_140e5098(*puVar1,1);
    FUN_140e5098(*puVar1,2);
    FUN_140a59ac();
    iVar3 = FUN_140a6dec();
    if (iVar3 != 0) {
      local_2c = 0x5a;
      local_38 = 0xf;
      local_34 = 2;
      FUN_140b4a50(auStack_44);
      FUN_140e5098(*puVar1,1);
      FUN_140e5098(*puVar1,2);
      local_38 = 0xf;
      local_34 = 2;
      local_2c = 100;
      FUN_140b4a50(auStack_44);
      FUN_140e5818(100);
      FUN_140e5098(*puVar1,1);
      FUN_140e5098(*puVar1,2);
      uVar4 = 0;
      uVar2 = extraout_r1_00;
LAB_140a6e98:
      if ((*DAT_140a6efc ^ local_1c) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc(uVar4,uVar2,*DAT_140a6efc ^ local_1c,0);
    }
    if (iVar5 == 1) {
      FUN_140e5098(*puVar1,1);
      FUN_140e5098(*puVar1,2);
      uVar4 = 0xffffffff;
      uVar2 = extraout_r1;
      goto LAB_140a6e98;
    }
    iVar5 = 1;
  } while( true );
}

