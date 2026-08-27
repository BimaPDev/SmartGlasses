/* FUN_2c1361a4 @ 0x2c1361a4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c1361a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_lr;
  undefined4 auStack_8c [20];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = *DAT_2c136338;
  local_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  local_3c = 0;
  local_20 = 0;
  FUN_2c135458(&local_3c,0x20,param_3,0);
  iVar2 = FUN_2c1427e8(&local_3c);
  *(undefined1 *)((int)&local_3c + iVar2) = 10;
  uVar3 = FUN_2c1427e8(&local_3c);
  FUN_2c135420(1,&local_3c,uVar3);
  FUN_2c135420(0x10,0,0);
  FUN_2c135420(0x11,0,0);
  iVar2 = FUN_2c1446bc();
  *(undefined1 *)(DAT_2c13633c + (uint)(iVar2 != 0)) = 1;
  puVar5 = DAT_2c136340;
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  if (-1 < iVar2 << 0x1f) {
    *DAT_2c136340 = 0x2c136226;
    puVar5[1] = unaff_lr;
    disableIRQinterrupts();
  }
  puVar4 = auStack_8c;
  puVar5 = DAT_2c136344;
  do {
    puVar5 = puVar5 + 1;
    *puVar4 = *puVar5;
    puVar4 = puVar4 + 1;
  } while (puVar5 != DAT_2c136344 + 0xf);
  isThreadModePrivileged();
  isUsingMainStack();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

