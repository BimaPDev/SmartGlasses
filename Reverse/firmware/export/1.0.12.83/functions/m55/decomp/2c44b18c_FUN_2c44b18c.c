/* FUN_2c44b18c @ 0x2c44b18c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44b200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44b18c(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar6;
  int unaff_r6;
  int iVar7;
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 *puVar8;
  int in_stack_000002d4;
  
  puVar6 = *(undefined4 **)(unaff_r6 + 0x68);
  if (!in_ZR && in_NG == in_OV) {
    bVar1 = *(byte *)(unaff_r6 + 5);
    uVar3 = (uint)bVar1;
    *(short *)(uVar3 + 6) = (short)unaff_r7;
    *(uint *)(param_1 + 0x20) = uVar3;
    piVar4 = (int *)*puVar6;
    iVar5 = puVar6[1];
    puVar8 = puVar6 + 4;
    *(byte *)(param_1 + 0x17) = bVar1;
    *(byte *)((int)puVar6 + 0x1f) = bVar1;
    iVar7 = *(int *)(param_1 + (int)puVar8);
    if (!SCARRY4((int)puVar8,200)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(puVar6 + 0x45) = (short)piVar4;
    *piVar4 = uVar3 - 0xe0;
    piVar4[1] = unaff_r7 + iVar5 + (uint)CARRY4(param_1,param_1);
    *(uint *)((int)piVar4 + 0xbf) = param_1;
    param_3 = *(int *)(iVar7 + 4);
    param_4 = *(int *)(iVar7 + 8);
    *(short *)(*(int *)(iVar7 + 0xc) + 8) = (short)param_4;
    *(short *)(param_4 + 0x1e) = (short)param_3;
    unaff_r7 = in_stack_000002d4;
    if (param_1 == 0) {
      if (puVar8 < (undefined4 *)0xffffff38) {
        cRam2c44b33e = (char)iVar7 + '\x14';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar7 = _LAB_2c44b314;
  *(char *)(param_1 + 699) = (char)param_4;
  iVar5 = iRam2c44b198;
  bVar1 = *(byte *)(unaff_r7 >> 7);
  UNRECOVERED_JUMPTABLE = (code *)(bVar1 - 6);
  uVar2 = *(ushort *)(iRam2c44b198 + 2);
  iVar7 = iVar7 + -0x46;
  *(char *)(param_3 + 8) = (char)iVar7;
  uRam0000008c = SUB41(UNRECOVERED_JUMPTABLE,0);
  *(code **)(iVar5 + 0x59) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x2c44b0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((uint)bVar1,iVar7,iVar7 * 2,*(undefined2 *)(iVar7 + (uint)uVar2));
  return;
}

