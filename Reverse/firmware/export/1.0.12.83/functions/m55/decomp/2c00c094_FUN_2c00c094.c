/* FUN_2c00c094 @ 0x2c00c094 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c00c094(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_lr;
  undefined4 auStack_8c [20];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  local_1c = *DAT_2c00c238;
  local_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  uStack_28 = 0;
  local_24 = 0;
  uStack_20 = 0;
  FUN_2c00b250(&local_3c,0x20,param_3,0);
  iVar2 = FUN_2c013b1c(&local_3c);
  *(undefined1 *)((int)&local_3c + iVar2) = 10;
  uVar3 = FUN_2c013b1c(&local_3c);
  FUN_2c00b1ac(1,&local_3c,uVar3);
  FUN_2c00b1ac(0x10,0,0);
  FUN_2c00b1ac(0x11,0,0);
  iVar2 = FUN_2c012f30();
  *(undefined1 *)(DAT_2c00c23c + (uint)(iVar2 != 0)) = 1;
  puVar5 = DAT_2c00c240;
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  if (-1 < iVar2 << 0x1f) {
    *DAT_2c00c240 = 0x2c00c118;
    puVar5[1] = unaff_lr;
    disableIRQinterrupts();
  }
  puVar4 = auStack_8c;
  puVar5 = DAT_2c00c244;
  do {
    puVar5 = puVar5 + 1;
    *puVar4 = *puVar5;
    puVar4 = puVar4 + 1;
  } while (puVar5 != DAT_2c00c244 + 0xf);
  isThreadModePrivileged();
  isUsingMainStack();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

