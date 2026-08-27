/* FUN_14034df0 @ 0x14034df0 */

/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_14034df0(undefined1 *param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 unaff_r6;
  
  piVar2 = DAT_14034f10;
  iVar13 = *DAT_14034f10;
  if (iVar13 == 0) {
    puVar8 = (undefined1 *)FUN_1402e55c();
    iVar13 = *piVar2;
    *piVar2 = iVar13 + 1;
    puVar6 = DAT_14044e90;
    switch(param_1) {
    case (undefined1 *)0x0:
      puVar10 = (undefined1 *)FUN_140434e0(0);
      puVar8 = (undefined1 *)FUN_140434e0(1);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = puVar10;
      }
      return puVar8;
    case (undefined1 *)0x1:
      if ((char)*piVar2 != '\0') {
        uVar9 = *(undefined4 *)((int)piVar2 + 0xe42);
        uVar1 = *DAT_14044e90;
        *(char *)(piVar2 + 0x31b) = '\x01';
        *puVar6 = uVar1 | 0x20;
        puVar8 = (undefined1 *)FUN_140e52d8(uVar9);
        return puVar8;
      }
      *(char *)piVar2 = '\x01';
      FUN_140e52d8(*(undefined4 *)((int)piVar2 + 0xe42));
      unaff_r6 = 0;
    case (undefined1 *)0x2:
      puVar6 = DAT_14044e90;
      *param_1 = 5;
      *puVar6 = *puVar6 & 0xffdf;
      puVar8 = (undefined1 *)FUN_14048958(unaff_r6,unaff_r6,DAT_14044e94);
      return puVar8;
    case (undefined1 *)0x3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *DAT_14034f10 = iVar13 + 1;
    uVar14 = DAT_14034f2c;
    uVar5 = DAT_14034f28;
    uVar4 = DAT_14034f1c;
    uVar9 = DAT_14034f18;
    iVar3 = DAT_14034f14;
    switch(param_1) {
    case (undefined1 *)0x0:
      *(uint *)(DAT_14034f14 + 0xc7c) = *(uint *)(DAT_14034f14 + 0xc7c) & 0xfffffffe;
      puVar8 = (undefined1 *)
               FUN_1402a6e8(4,0xcf1,DAT_14034f24,DAT_14034f20,DAT_14034f30,uVar9,
                            *(undefined4 *)(iVar3 + 0xc7c),*(undefined4 *)(iVar3 + 0xc94),
                            *(undefined4 *)(iVar3 + 0xc98));
      iVar13 = *piVar2 + -1;
      *piVar2 = iVar13;
      goto joined_r0x14034e48;
    case (undefined1 *)0x1:
      *(uint *)(DAT_14034f14 + 0xd0c) = *(uint *)(DAT_14034f14 + 0xd0c) & 0x7fffffff;
      uVar7 = *(undefined4 *)(iVar3 + 0xd08);
      uVar12 = *(undefined4 *)(iVar3 + 0xd0c);
      uVar11 = 0xcf8;
      break;
    case (undefined1 *)0x2:
      *(uint *)(DAT_14034f14 + 0xd14) = *(uint *)(DAT_14034f14 + 0xd14) & 0x7fffffff;
      uVar7 = *(undefined4 *)(iVar3 + 0xd10);
      uVar12 = *(undefined4 *)(iVar3 + 0xd14);
      uVar11 = 0xcff;
      uVar14 = uVar5;
      break;
    case (undefined1 *)0x3:
      *(uint *)(DAT_14034f14 + 0xd1c) = *(uint *)(DAT_14034f14 + 0xd1c) & 0x7fffffff;
      uVar7 = *(undefined4 *)(iVar3 + 0xd18);
      uVar12 = *(undefined4 *)(iVar3 + 0xd1c);
      uVar11 = 0xd06;
      uVar14 = uVar4;
      break;
    default:
      *piVar2 = iVar13;
      return param_1;
    }
    puVar8 = (undefined1 *)
             FUN_1402a6e8(4,uVar11,DAT_14034f24,DAT_14034f20,uVar14,uVar9,uVar7,uVar12);
    iVar13 = *piVar2 + -1;
  }
  *piVar2 = iVar13;
joined_r0x14034e48:
  if (iVar13 != 0) {
    return puVar8;
  }
  puVar8 = (undefined1 *)FUN_1402e5f8();
  return puVar8;
}

