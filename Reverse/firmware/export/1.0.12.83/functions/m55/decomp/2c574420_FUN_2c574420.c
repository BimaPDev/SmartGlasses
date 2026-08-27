/* FUN_2c574420 @ 0x2c574420 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c574420(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c5745e0;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
  }
  uVar2 = _LAB_2c5745e8;
  piVar1 = _LAB_2c5745e4;
  iVar6 = param_2[1];
  for (iVar5 = *param_2; iVar5 != iVar6; iVar5 = iVar5 + 0xf0) {
    while( true ) {
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puVar3 = (undefined4 *)FUN_2c47245c(0,0xf0);
      FUN_2c674268(puVar3,0,0xf0);
      *puVar3 = uVar2;
      puVar3[7] = puVar3 + 9;
      *(undefined1 *)(puVar3 + 3) = 0;
      puVar3[0x13] = puVar3 + 0x15;
      puVar3[8] = 0;
      *(undefined1 *)(puVar3 + 9) = 0;
      *(undefined1 *)(puVar3 + 0xf) = 0;
      puVar3[0x14] = 0;
      *(undefined1 *)(puVar3 + 0x15) = 0;
      *(undefined1 *)(puVar3 + 0x20) = 0;
      *(undefined1 *)(puVar3 + 0x26) = 0;
      puVar3[1] = puVar3 + 3;
      puVar3[2] = 0;
      puVar3[0xd] = puVar3 + 0xf;
      puVar3[0xe] = 0;
      puVar3[0x24] = puVar3 + 0x26;
      puVar3[0x25] = 0;
      puVar3[0x1e] = puVar3 + 0x20;
      puVar3[0x1f] = 0;
      puStack_30 = puVar3;
      FUN_2c52f5f4(puVar3 + 1,iVar5 + 4);
      FUN_2c52f5f4(puStack_30 + 7,iVar5 + 0x1c);
      FUN_2c52f5f4(puStack_30 + 0xd,iVar5 + 0x34);
      FUN_2c52f5f4(puStack_30 + 0x13,iVar5 + 0x4c);
      FUN_2c52f5f4(puStack_30 + 0x1e,iVar5 + 0x78);
      FUN_2c52f5f4(puStack_30 + 0x24,iVar5 + 0x90);
      uVar4 = *(undefined4 *)(iVar5 + 0xac);
      puStack_30[0x2a] = *(undefined4 *)(iVar5 + 0xa8);
      puStack_30[0x2b] = uVar4;
      uVar4 = *(undefined4 *)(iVar5 + 0xb4);
      puStack_30[0x2c] = *(undefined4 *)(iVar5 + 0xb0);
      puStack_30[0x2d] = uVar4;
      uVar4 = *(undefined4 *)(iVar5 + 0x6c);
      puStack_30[0x1a] = *(undefined4 *)(iVar5 + 0x68);
      puStack_30[0x1b] = uVar4;
      uVar4 = *(undefined4 *)(iVar5 + 0x74);
      puStack_30[0x1c] = *(undefined4 *)(iVar5 + 0x70);
      puStack_30[0x1d] = uVar4;
      puStack_30[0x2e] = *(undefined4 *)(iVar5 + 0xb8);
      puStack_30[0x2f] = *(undefined4 *)(iVar5 + 0xbc);
      puStack_30[0x30] = *(undefined4 *)(iVar5 + 0xc0);
      puStack_30[0x31] = *(undefined4 *)(iVar5 + 0xc4);
      puStack_30[0x32] = *(undefined4 *)(iVar5 + 200);
      puStack_30[0x33] = *(undefined4 *)(iVar5 + 0xcc);
      puStack_30[0x34] = *(undefined4 *)(iVar5 + 0xd0);
      puStack_30[0x35] = *(undefined4 *)(iVar5 + 0xd4);
      puStack_30[0x36] = *(undefined4 *)(iVar5 + 0xd8);
      puStack_30[0x37] = *(undefined4 *)(iVar5 + 0xdc);
      puStack_30[0x38] = *(undefined4 *)(iVar5 + 0xe0);
      puStack_30[0x39] = *(undefined4 *)(iVar5 + 0xe4);
      puStack_30[0x3a] = *(undefined4 *)(iVar5 + 0xe8);
      puStack_30[0x3b] = *(undefined4 *)(iVar5 + 0xec);
      puVar3 = *(undefined4 **)(param_1 + 0x14);
      if (puVar3 == *(undefined4 **)(param_1 + 0x18)) break;
      *puVar3 = puStack_30;
      iVar5 = iVar5 + 0xf0;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
      if (iVar6 == iVar5) goto LAB_2c5745c6;
    }
    FUN_2c573d48(param_1 + 0x10,puVar3,&puStack_30);
  }
LAB_2c5745c6:
  if (*_LAB_2c5745e0 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

