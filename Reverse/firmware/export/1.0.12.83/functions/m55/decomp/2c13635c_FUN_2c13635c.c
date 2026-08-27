/* FUN_2c13635c @ 0x2c13635c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c1363bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13635c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  
  puVar3 = puRam2c1363b0;
  puVar4 = puRam2c1363b0 + 1;
  *puRam2c1363b0 = param_1;
  *puVar4 = param_2;
  puVar3[2] = param_3;
  puVar3[3] = param_4;
  puVar3[4] = unaff_r4;
  puVar3[5] = unaff_r5;
  puVar3[6] = unaff_r6;
  puVar3[7] = unaff_r7;
  puVar3[8] = unaff_r8;
  puVar3[9] = unaff_r9;
  puVar3[10] = unaff_r10;
  puVar3[0xb] = unaff_r11;
  puVar3[0xc] = in_r12;
  puVar3[0xd] = register0x00000054;
  puVar3[0xe] = unaff_lr;
  isThreadModePrivileged();
  cVar2 = isUsingMainStack();
  if (cVar2 == '\x01') {
    puVar8 = (undefined1 *)getProcessStackPointer();
    puVar7 = (undefined1 *)register0x00000054;
  }
  else {
    puVar7 = (undefined1 *)getMainStackPointer();
    puVar8 = (undefined1 *)register0x00000054;
  }
  puVar3[0xf] = puVar7;
  puVar3[0x10] = puVar8;
  FUN_2c1361a4(param_1,param_2,param_3,param_4);
  FUN_2c13635c(uRam2c1363d8,uRam2c1363d4);
  uStack_90 = 0x79;
  local_94 = *DAT_2c1366b8;
  local_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  local_b4 = 0;
  local_98 = 0;
  FUN_2c135458(&local_b4,0x20,0x74,0);
  iVar5 = FUN_2c1427e8(&local_b4);
  *(undefined1 *)((int)&local_b4 + iVar5) = 10;
  uVar6 = FUN_2c1427e8(&local_b4);
  FUN_2c135420(1,&local_b4,uVar6);
  FUN_2c135420(0x10,0,0);
  FUN_2c135420(0x11,0,0);
  iVar5 = FUN_2c1446bc();
  *(undefined1 *)(DAT_2c1366bc + (uint)(iVar5 != 0)) = 1;
  puVar3 = DAT_2c1366c0;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = isIRQinterruptsEnabled();
  }
  if (-1 < iVar5 << 0x1f) {
    *DAT_2c1366c0 = 0x2c13645e;
    puVar3[1] = 0x2c1363cf;
    disableIRQinterrupts();
  }
  getProcessStackPointer();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

