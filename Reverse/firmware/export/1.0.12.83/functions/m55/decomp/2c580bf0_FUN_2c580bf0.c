/* FUN_2c580bf0 @ 0x2c580bf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c580bf0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c580d84;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
  }
  uVar2 = _LAB_2c580d8c;
  piVar1 = _LAB_2c580d88;
  iVar5 = param_2[1];
  for (iVar4 = *param_2; iVar4 != iVar5; iVar4 = iVar4 + 0xe4) {
    while( true ) {
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puVar3 = (undefined4 *)FUN_2c47245c(0,0x114);
      FUN_2c674268(puVar3,0,0x114);
      *puVar3 = uVar2;
      puVar3[8] = puVar3 + 10;
      *(undefined1 *)(puVar3 + 3) = 0;
      puVar3[0x15] = puVar3 + 0x17;
      puVar3[9] = 0;
      puVar3[0x21] = puVar3 + 0x23;
      *(undefined1 *)(puVar3 + 10) = 0;
      puVar3[0x2d] = puVar3 + 0x2f;
      *(undefined1 *)(puVar3 + 0x11) = 0;
      puVar3[0x16] = 0;
      *(undefined1 *)(puVar3 + 0x17) = 0;
      *(undefined1 *)(puVar3 + 0x1d) = 0;
      puVar3[0x22] = 0;
      *(undefined1 *)(puVar3 + 0x23) = 0;
      *(undefined1 *)(puVar3 + 0x29) = 0;
      puVar3[0x2e] = 0;
      *(undefined1 *)(puVar3 + 0x2f) = 0;
      *(undefined1 *)(puVar3 + 0x35) = 0;
      puVar3[1] = puVar3 + 3;
      puVar3[2] = 0;
      puVar3[0xf] = puVar3 + 0x11;
      puVar3[0x10] = 0;
      puVar3[0x1b] = puVar3 + 0x1d;
      puVar3[0x1c] = 0;
      puVar3[0x33] = puVar3 + 0x35;
      puVar3[0x34] = 0;
      puVar3[0x27] = puVar3 + 0x29;
      puVar3[0x28] = 0;
      puStack_30 = puVar3;
      FUN_2c52f5f4(puVar3 + 1,iVar4 + 4);
      puStack_30[7] = *(undefined4 *)(iVar4 + 0x1c);
      FUN_2c52f5f4(puStack_30 + 8,iVar4 + 0x20);
      *(undefined1 *)(puStack_30 + 0xe) = *(undefined1 *)(iVar4 + 0x38);
      FUN_2c52f5f4(puStack_30 + 0xf,iVar4 + 0x3c);
      FUN_2c52f5f4(puStack_30 + 0x15,iVar4 + 0x54);
      FUN_2c52f5f4(puStack_30 + 0x1b,iVar4 + 0x6c);
      FUN_2c52f5f4(puStack_30 + 0x21,iVar4 + 0x84);
      FUN_2c52f5f4(puStack_30 + 0x27,iVar4 + 0x9c);
      FUN_2c52f5f4(puStack_30 + 0x2d,iVar4 + 0xb4);
      FUN_2c52f5f4(puStack_30 + 0x33,iVar4 + 0xcc);
      puVar3 = *(undefined4 **)(param_1 + 0x14);
      if (puVar3 == *(undefined4 **)(param_1 + 0x18)) break;
      iVar4 = iVar4 + 0xe4;
      *puVar3 = puStack_30;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
      if (iVar5 == iVar4) goto LAB_2c580d6a;
    }
    FUN_2c580434(param_1 + 0x10,puVar3,&puStack_30);
  }
LAB_2c580d6a:
  if (*_LAB_2c580d84 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

