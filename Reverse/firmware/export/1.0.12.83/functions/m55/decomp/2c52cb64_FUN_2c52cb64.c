/* FUN_2c52cb64 @ 0x2c52cb64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c52cb64(undefined4 *param_1,int *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uStack_60;
  undefined1 *puStack_5c;
  uint uStack_58;
  undefined1 auStack_54 [16];
  undefined1 *puStack_44;
  uint uStack_40;
  undefined1 auStack_3c [16];
  int iStack_2c;
  
  iVar8 = *param_4;
  bVar1 = *param_3;
  iVar9 = *param_2;
  iStack_2c = *_LAB_2c52ccf8;
  if (iVar8 != 0) {
    iVar8 = iVar8 + 0x24;
  }
  iVar7 = *param_5;
  puStack_5c = auStack_54;
  if (iVar7 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = FUN_2c66c4ec(iVar7,param_2,0);
    iVar4 = iVar7 + iVar4;
  }
  FUN_2c52b630(&puStack_5c,iVar7,iVar4);
  piVar2 = _LAB_2c52cd00;
  puStack_44 = auStack_3c;
  FUN_2c52b630(&puStack_44,_LAB_2c52ccfc);
  if (*piVar2 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar5 = (undefined4 *)FUN_2c47245c(0,0x60);
  puVar3 = puStack_5c;
  *(ushort *)((int)puVar5 + 0x16) = (ushort)bVar1;
  *(undefined2 *)(puVar5 + 6) = 0;
  puVar5[7] = iVar9;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar6 = puVar5 + 10;
  *puVar5 = _LAB_2c52cd04;
  *(undefined2 *)(puVar5 + 5) = 0x27d1;
  puVar5[8] = puVar6;
  if ((puStack_5c + uStack_58 != (undefined1 *)0x0) && (puStack_5c == (undefined1 *)0x0))
  goto LAB_2c52ccee;
  uStack_60 = uStack_58;
  if (uStack_58 < 0x10) {
    if (uStack_58 == 1) {
      *(undefined1 *)(puVar5 + 10) = *puStack_5c;
    }
    else if (uStack_58 != 0) goto LAB_2c52ccc0;
  }
  else {
    puVar6 = (undefined4 *)FUN_2c52b5c0(&uStack_60,0);
    puVar5[8] = puVar6;
    puVar5[10] = uStack_60;
LAB_2c52ccc0:
    FUN_2c674668(puVar6,puVar3,uStack_58);
    puVar6 = (undefined4 *)puVar5[8];
  }
  puVar3 = puStack_44;
  puVar5[9] = uStack_60;
  *(undefined1 *)((int)puVar6 + uStack_60) = 0;
  puVar6 = puVar5 + 0x10;
  puVar5[0xe] = puVar6;
  if ((puStack_44 + uStack_40 != (undefined1 *)0x0) && (puStack_44 == (undefined1 *)0x0)) {
LAB_2c52ccee:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c52cd08);
  }
  uStack_60 = uStack_40;
  if (uStack_40 < 0x10) {
    if (uStack_40 == 1) {
      *(undefined1 *)(puVar5 + 0x10) = *puStack_44;
      goto LAB_2c52cc3c;
    }
    if (uStack_40 == 0) goto LAB_2c52cc3c;
  }
  else {
    puVar6 = (undefined4 *)FUN_2c52b5c0(&uStack_60,0);
    puVar5[0xe] = puVar6;
    puVar5[0x10] = uStack_60;
  }
  FUN_2c674668(puVar6,puVar3,uStack_40);
  puVar6 = (undefined4 *)puVar5[0xe];
LAB_2c52cc3c:
  puVar5[0xf] = uStack_60;
  *(undefined1 *)((int)puVar6 + uStack_60) = 0;
  puVar5[0x17] = iVar8;
  puVar5[0x16] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  if (iVar9 == 2) {
    *(undefined2 *)(puVar5 + 0x15) = 0xc;
    *(undefined2 *)(puVar5 + 5) = 0xf8;
  }
  else if (iVar9 == 3) {
    *(undefined2 *)(puVar5 + 0x15) = 8;
    *(undefined2 *)(puVar5 + 5) = 0xa4;
  }
  *param_1 = puVar5;
  if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_5c != auStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c52ccf8 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

