/* FUN_2c203ec2 @ 0x2c203ec2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c112984) */
/* WARNING: Removing unreachable block (ram,0x2c20f010) */
/* WARNING: Removing unreachable block (ram,0x2c20eff4) */
/* WARNING: Removing unreachable block (ram,0x2c20f014) */
/* WARNING: Removing unreachable block (ram,0x2c20f238) */
/* WARNING: Removing unreachable block (ram,0x2c20f26c) */
/* WARNING: Removing unreachable block (ram,0x2c203fe8) */
/* WARNING: Removing unreachable block (ram,0x2c203ffa) */
/* WARNING: Removing unreachable block (ram,0x2c204014) */
/* WARNING: Removing unreachable block (ram,0x2c20f684) */
/* WARNING: Removing unreachable block (ram,0x2c20f078) */
/* WARNING: Removing unreachable block (ram,0x2c20f0b2) */
/* WARNING: Removing unreachable block (ram,0x2c20f0ca) */
/* WARNING: Removing unreachable block (ram,0x2c20f67e) */
/* WARNING: Removing unreachable block (ram,0x2c20f698) */
/* WARNING: Removing unreachable block (ram,0x2c20f6c0) */
/* WARNING: Removing unreachable block (ram,0x2c20f16a) */
/* WARNING: Removing unreachable block (ram,0x2c20f1c4) */
/* WARNING: Removing unreachable block (ram,0x2c20f138) */
/* WARNING: Removing unreachable block (ram,0x2c20f1e0) */
/* WARNING: Removing unreachable block (ram,0x2c20f082) */
/* WARNING: Removing unreachable block (ram,0x2c20f092) */
/* WARNING: Removing unreachable block (ram,0x2c20f02a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c203ec2(int param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int unaff_r4;
  undefined2 *unaff_r7;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  
  *(char *)(param_1 + 0x10) = (char)param_3;
  *(undefined2 **)((param_1 >> 0x20) + 4) = unaff_r7;
  *unaff_r7 = (short)unaff_r7;
  *(char *)(param_4 + unaff_r4 * 8) = (char)(unaff_r4 * 8);
  iVar5 = (int)(unaff_r7 + -0x78) * 0x20000;
  if (iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_4 + iVar5) = 0;
  iVar5 = (int)(unaff_r7 + -0x78) * 0x4000 + -0xf0;
  iVar6 = iVar5 * 0x4000;
  iVar5 = iVar5 * 0x20000;
  if (iVar5 != 0) {
    puVar1 = (undefined1 *)0x3f8;
    puVar2 = (undefined1 *)0x400;
    puVar3 = (undefined1 *)0x408;
    puVar4 = (undefined1 *)0x410;
    lVar8 = 8;
    puVar7 = param_3;
    while( true ) {
      *puVar7 = *puVar1;
      puVar7[1] = *puVar2;
      puVar7[2] = *puVar3;
      puVar7[3] = *puVar4;
      puVar7 = puVar7 + 4;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_3 = param_3 + iVar5;
    if (iVar6 == 0) {
      _MasterStackPointer = 0;
      *(char *)(param_4 + param_2 * 2) = (char)(param_2 * 2);
      *(undefined1 *)(param_4 + -0x1e00000) = 0;
      puVar1 = (undefined1 *)0x3f8;
      puVar2 = (undefined1 *)0x400;
      puVar3 = (undefined1 *)0x408;
      puVar4 = (undefined1 *)0x410;
      lVar8 = 8;
      while( true ) {
        *param_3 = *puVar1;
        param_3[1] = *puVar2;
        param_3[2] = *puVar3;
        param_3[3] = *puVar4;
        param_3 = param_3 + 4;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_4 + 0xc) = 0xffc40000;
      uRamffc40006 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(param_4 + 0xc) = iVar6;
    *(undefined2 *)(iVar6 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

