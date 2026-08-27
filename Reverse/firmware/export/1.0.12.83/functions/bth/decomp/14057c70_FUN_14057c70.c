/* FUN_14057c70 @ 0x14057c70 */

void FUN_14057c70(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_40;
  undefined4 local_3c [8];
  int local_1c;
  
  uVar7 = DAT_14057c7c;
  bVar1 = *(byte *)(param_1 + 0x184);
  puVar4 = &uStack_40;
  local_1c = *DAT_14072820;
  do {
    uVar5 = FUN_140dc0a0();
    puVar4 = puVar4 + 1;
    *puVar4 = uVar5;
  } while (puVar4 != local_3c + 7);
  iVar6 = FUN_14073fdc(0x38,3);
  iVar3 = DAT_14072824;
  *(undefined4 *)(iVar6 + 4) = 0;
  *(undefined4 *)(iVar6 + 8) = uVar7;
  *(uint *)(iVar6 + 0x14) = (uint)bVar1;
  *(undefined4 *)(iVar6 + 0x18) = local_3c[0];
  *(undefined4 *)(iVar6 + 0x1c) = local_3c[1];
  *(undefined4 *)(iVar6 + 0x20) = local_3c[2];
  *(undefined4 *)(iVar6 + 0x24) = local_3c[3];
  *(undefined4 *)(iVar6 + 0x28) = local_3c[4];
  *(undefined4 *)(iVar6 + 0x2c) = local_3c[5];
  *(undefined4 *)(iVar6 + 0x34) = local_3c[7];
  *(undefined4 *)(iVar6 + 0x30) = local_3c[6];
  FUN_140739f0(iVar3,iVar6);
  cVar2 = *(char *)(iVar3 + 8);
  *(undefined4 **)(iVar6 + 0xc) = (undefined4 *)(iVar6 + 0x18);
  *(undefined4 **)(iVar6 + 0x10) = (undefined4 *)(iVar6 + 0x28);
  if (cVar2 == '\0') {
    *(undefined1 *)(iVar3 + 8) = 1;
    if (*DAT_14072820 == local_1c) {
      puVar4 = (undefined4 *)FUN_1406db30(0x2017,0x20,0,0);
      uVar8 = *(undefined4 *)(iVar6 + 0x1c);
      uVar5 = *(undefined4 *)(iVar6 + 0x20);
      uVar7 = *(undefined4 *)(iVar6 + 0x24);
      *puVar4 = *(undefined4 *)(iVar6 + 0x18);
      puVar4[1] = uVar8;
      puVar4[2] = uVar5;
      puVar4[3] = uVar7;
      uVar5 = *(undefined4 *)(iVar6 + 0x30);
      uVar8 = *(undefined4 *)(iVar6 + 0x2c);
      uVar7 = *(undefined4 *)(iVar6 + 0x34);
      puVar4[4] = *(undefined4 *)(iVar6 + 0x28);
      puVar4[5] = uVar8;
      puVar4[6] = uVar5;
      puVar4[7] = uVar7;
      FUN_1406da30(puVar4,0,DAT_1405fcbc);
      return;
    }
  }
  else if (*DAT_14072820 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

