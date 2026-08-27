/* FUN_2c54731c @ 0x2c54731c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54731c(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint auStack_28 [3];
  undefined4 uStack_1c;
  
  uVar2 = _LAB_2c54760c;
  uStack_1c = *_LAB_2c547608;
  param_1[4] = 8000;
  param_1[0x16] = 0;
  param_1[0x18] = param_1 + 0x1a;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1f] = param_1 + 0x21;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0xffffffff;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined2 *)((int)param_1 + 0x9e) = 0xff;
  param_1[2] = 0;
  param_1[3] = 30000;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[0x1e] = _LAB_2c547610;
  *(undefined1 *)(param_1 + 0x27) = 0xb;
  *param_1 = uVar2;
  param_1[1] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x29] = param_1 + 0x2b;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0xff;
  iVar3 = FUN_2c547250();
  puVar5 = param_1 + 0x3a;
  param_1[0x36] = _LAB_2c547614;
  uVar1 = *(undefined1 *)(iVar3 + 4);
  param_1[0x38] = puVar5;
  *(undefined1 *)(param_1 + 0x37) = uVar1;
  puVar7 = *(undefined1 **)(iVar3 + 8);
  uVar6 = *(uint *)(iVar3 + 0xc);
  if ((puVar7 + uVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5475fc;
  auStack_28[0] = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)(param_1 + 0x3a) = *puVar7;
    }
    else if (uVar6 != 0) goto LAB_2c547548;
  }
  else {
    puVar5 = (undefined4 *)FUN_2c5470b4(auStack_28,0);
    param_1[0x38] = puVar5;
    param_1[0x3a] = auStack_28[0];
LAB_2c547548:
    FUN_2c674668(puVar5,puVar7,uVar6);
    puVar5 = (undefined4 *)param_1[0x38];
  }
  puVar4 = param_1 + 0x40;
  param_1[0x39] = auStack_28[0];
  *(undefined1 *)((int)puVar5 + auStack_28[0]) = 0;
  param_1[0x3e] = puVar4;
  puVar7 = *(undefined1 **)(iVar3 + 0x20);
  uVar6 = *(uint *)(iVar3 + 0x24);
  if ((puVar7 + uVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
LAB_2c5475fc:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c547644);
  }
  auStack_28[0] = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)(param_1 + 0x40) = *puVar7;
      goto LAB_2c547424;
    }
    if (uVar6 == 0) goto LAB_2c547424;
  }
  else {
    puVar4 = (undefined4 *)FUN_2c5470b4(auStack_28,0);
    param_1[0x3e] = puVar4;
    param_1[0x40] = auStack_28[0];
  }
  FUN_2c674668(puVar4,puVar7,uVar6);
  puVar4 = (undefined4 *)param_1[0x3e];
LAB_2c547424:
  param_1[0x3f] = auStack_28[0];
  *(undefined1 *)((int)puVar4 + auStack_28[0]) = 0;
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(iVar3 + 0x38);
  iVar3 = FUN_2c5e31b4(0xb,param_1 + 8);
  uVar2 = _LAB_2c547618;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c547628,0x1d,_LAB_2c547618,_LAB_2c547638,_LAB_2c547618);
  }
  param_1[8] = 1;
  param_1[9] = 0;
  FUN_2c59a6b0(1);
  iVar3 = FUN_2c5e31b4(0xc,param_1 + 10);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c547628,0x23,_LAB_2c547618,_LAB_2c547634,uVar2);
  }
  param_1[10] = 1;
  param_1[0xb] = 0;
  iVar3 = FUN_2c5e31b4(0xd,param_1 + 0xc);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c547628,0x28,_LAB_2c547618,_LAB_2c547630,uVar2);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

