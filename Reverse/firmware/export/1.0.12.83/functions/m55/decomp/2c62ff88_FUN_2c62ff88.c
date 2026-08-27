/* FUN_2c62ff88 @ 0x2c62ff88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62ff88(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined1 auStack_124 [4];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined1 *puStack_114;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_dc [88];
  undefined1 auStack_84 [88];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c630170;
  iVar2 = FUN_2c602400();
  uVar3 = FUN_2c602608(param_1);
  cVar1 = FUN_2c6033b4(iVar2,0,0x16);
  iVar4 = FUN_2c6073ec(iVar2);
  iVar5 = FUN_2c6073f8(iVar2);
  if ((((*(byte *)(iVar2 + 100) & 3) == 1) && (*(int *)(iVar2 + 0x28) < 0)) &&
     (0 < *(int *)(iVar2 + 0x2c))) {
    if (iVar5 <= iVar4) {
      uVar6 = FUN_2c6073f8();
      if (*(int *)(iVar2 + 0x24) < 0) {
        uStack_12c = *(undefined2 *)(iVar2 + 0x34);
        goto LAB_2c62fff2;
      }
LAB_2c63008e:
      if (cVar1 == '\x01') {
        uStack_12c = *(undefined2 *)(iVar2 + 0x34);
      }
      else {
        uStack_12c = *(undefined2 *)(iVar2 + 0x38);
      }
      goto LAB_2c62fff2;
    }
    uVar6 = FUN_2c6073ec(iVar2);
    if (*(int *)(iVar2 + 0x24) < 0) {
      uStack_12a = *(undefined2 *)(iVar2 + 0x3a);
      goto LAB_2c62fff2;
    }
  }
  else {
    if (iVar5 <= iVar4) {
      uVar6 = FUN_2c6073f8(iVar2);
      goto LAB_2c63008e;
    }
    uVar6 = FUN_2c6073ec();
  }
  uStack_12a = *(undefined2 *)(iVar2 + 0x36);
LAB_2c62fff2:
  iVar8 = iVar2 + 0x70;
  FUN_2c61314c(auStack_dc);
  FUN_2c6004cc(iVar2,0x30000,auStack_dc);
  FUN_2c62fe64(iVar2,&uStack_12c,uVar6,iVar5 <= iVar4);
  *(undefined2 *)(iVar2 + 0x70) = uStack_12c;
  *(undefined2 *)(iVar2 + 0x72) = uStack_12a;
  *(undefined2 *)(iVar2 + 0x74) = uStack_128;
  *(undefined2 *)(iVar2 + 0x76) = uStack_126;
  FUN_2c600b9c(auStack_124,uVar3);
  puStack_114 = auStack_dc;
  uStack_11c = 0;
  uStack_ec = 0;
  uStack_f0 = 0x30000;
  uStack_120 = _LAB_2c630174;
  iStack_118 = iVar8;
  iVar7 = func_0x2c639428(iVar2);
  if (iVar7 == 2) {
    FUN_2c62c0d8(auStack_84,auStack_dc,0x58);
    FUN_2c602340(iVar2,0x1a,auStack_124);
    FUN_2c61319c(uVar3,auStack_dc,iVar8);
    FUN_2c602340(iVar2,0x1b,auStack_124);
    if (iVar4 < iVar5) {
      uStack_12a = *(undefined2 *)(iVar2 + 0x3a);
    }
    else if (cVar1 == '\x01') {
      uStack_12c = *(undefined2 *)(iVar2 + 0x38);
    }
    else {
      uStack_12c = *(undefined2 *)(iVar2 + 0x34);
    }
    FUN_2c62fe64(iVar2,&uStack_12c,uVar6,iVar5 <= iVar4);
    *(undefined2 *)(iVar2 + 0x68) = uStack_12c;
    *(undefined2 *)(iVar2 + 0x6a) = uStack_12a;
    *(undefined2 *)(iVar2 + 0x6c) = uStack_128;
    iVar8 = iVar2 + 0x68;
    *(undefined2 *)(iVar2 + 0x6e) = uStack_126;
    FUN_2c62c0d8(auStack_dc,auStack_84,0x58);
    puStack_114 = auStack_dc;
    uStack_11c = 1;
    uStack_ec = 1;
    iStack_118 = iVar8;
    FUN_2c602340(iVar2,0x1a,auStack_124);
  }
  else {
    FUN_2c602340(iVar2,0x1a,auStack_124);
  }
  FUN_2c61319c(uVar3,auStack_dc,iVar8);
  FUN_2c602340(iVar2,0x1b,auStack_124);
  if (*_LAB_2c630170 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

