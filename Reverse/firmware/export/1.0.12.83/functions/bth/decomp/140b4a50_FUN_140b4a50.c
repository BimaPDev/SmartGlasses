/* FUN_140b4a50 @ 0x140b4a50 */

void FUN_140b4a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_28;
  undefined4 *puStack_24;
  int local_1c;
  
  puVar1 = DAT_140b4b48;
  local_1c = *DAT_140b4b4c;
  puVar4 = (undefined4 *)FUN_140e5728(*DAT_140b4b48,0,param_3,0);
  if (puVar4 != (undefined4 *)0x0) {
    uVar5 = FUN_140e5998();
    *puVar4 = uVar5;
    puVar4[1] = 0;
    uVar5 = FUN_140e5848();
    puVar4[2] = uVar5;
    puVar4[3] = *(undefined4 *)(param_1 + 0xc);
    puVar4[4] = *(undefined4 *)(param_1 + 0x10);
    puVar4[5] = *(undefined4 *)(param_1 + 0x14);
    puVar4[6] = *(undefined4 *)(param_1 + 0x18);
    puVar4[7] = *(undefined4 *)(param_1 + 0x1c);
    puVar4[8] = *(undefined4 *)(param_1 + 0x20);
    if (*DAT_140b4b4c == local_1c) {
      FUN_140e56b8(*puVar1,puVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  FUN_1402a6e8(4,0x37,DAT_140b4b58,DAT_140b4b54,DAT_140b4b50);
  uVar3 = DAT_140b4b68;
  uVar2 = DAT_140b4b58;
  uVar5 = DAT_140b4b54;
  iVar8 = 0;
  do {
    FUN_140e55d8(&local_28,*puVar1,0);
    if (local_28 != 0x20) {
      FUN_1402a6e8(4,0x46,DAT_140b4b58,DAT_140b4b54,DAT_140b4b5c,iVar8,local_28);
      iVar9 = iVar8;
      iVar6 = local_28;
      break;
    }
    iVar6 = puStack_24[3];
    iVar7 = iVar8 + 1;
    iVar9 = iVar8;
    FUN_1402a6e8(4,0x3b,uVar2,uVar5,uVar3,iVar8,iVar6,*puStack_24,puStack_24[2],puStack_24[4],
                 puStack_24[5],puStack_24[6],puStack_24[7],puStack_24[8]);
    iVar8 = iVar7;
  } while (iVar7 != 0x14);
  FUN_1402a6e8(4,0x4a,DAT_140b4b58,DAT_140b4b54,DAT_140b4b60,iVar9,iVar6);
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140b4b64);
}

